#include "game.h"

Game::Game() {
}

void Game::init()
{

    for (int i =0; i<4 ; i++){
        playerLocks.push_back(new std::condition_variable);
        players.emplace_back(*playerLocks[i],m);

    }
    players[0].UiAvailable=true;

    for(int i =0; i<4 ; i++){
        players[i].run();
    }
}

void Game::start()
{

    exec_procces=std::make_unique<std::thread>([this]{exec();});

}

void Game::join()
{

}

void Game::stepTurn()
{

    turn++;
    gameloopn++;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    if(turn==4){
        turn=0;
    }

    if(gameloopn==4){
        gameloopn=0;
        turn=findWinner(uibridge.CardsOnTable());
        if(turn==0 || turn==2){
            uibridge.Scoregird()->setYourGameScore(uibridge.Scoregird()->YourGameScore()+1);

        }else{
            uibridge.Scoregird()->setOpnGameScore(uibridge.Scoregird()->OpnGameScore()+1);
        }
        std::this_thread::sleep_for(std::chrono::seconds(2));
        uibridge.setCardsOnTable(QVector<QString>(4,""));



    }

}

void Game::splitCards(int t)
{
    for (int i =0; i<4 ; i++){
        players[i].clearCards();

    }

    for (int i =0; i<4 ; i++){

        players[i].setCards(std::set(cards.begin()+i*13,cards.begin()+i*13+t));


    }
    uibridge.setCardsString(players[0].getCards());

}
std::vector<std::string> Game::shuffle()
{
    std::srand(std::time(0));

    std::vector newdeck(cards);
    for (int i=0;i<52;i++){
        std::swap(newdeck[i],newdeck[rand()%52]);
    }
    return newdeck;
}

void Game::updateInterface()
{
    uibridge.setP1cards(players[1].getCards().size());
    uibridge.setP2cards(players[2].getCards().size());
    uibridge.setP3cards(players[3].getCards().size());
}

void Game::exec()
{
    int roundWinner=0;
    while(1){
        cards=shuffle();
        splitCards(5);
        turn=uibridge.hakemId();

        players[turn].PickHokm();




        splitCards();



        while(1)
        {
            m.lock();
            players[turn].myturn=true;
            m.unlock();
            playerLocks[turn]->notify_one();

            std::unique_lock<std::mutex> lk(m);
            playerLocks[turn]->wait(lk,[this]{return !players[turn].myturn;});

            std::string playerPlayed=players[turn].getCardIWILLPlay();

            if(validateCart(playerPlayed,uibridge.CardsOnTable())){
                players[turn].cards.erase(playerPlayed);

                auto temp=uibridge.CardsOnTable();
                temp[turn]=QString::fromStdString(playerPlayed);
                uibridge.setCardsOnTable(temp);

                updateInterface();

                stepTurn();
            }
            if (uibridge.Scoregird()->YourGameScore()==7){
                uibridge.Scoregird()->setYourScore(uibridge.Scoregird()->YourScore()+1);
                if (uibridge.hakemId()==1){
                    uibridge.setHakemId(2);
                }
                if (uibridge.hakemId()==3){
                    uibridge.setHakemId(0);
                }
                break;
            }
            else if(uibridge.Scoregird()->OpnGameScore()==7){
                uibridge.Scoregird()->setOpnScore(uibridge.Scoregird()->OpnScore()+1);
                if(uibridge.hakemId()==0 || uibridge.hakemId()==2){
                    uibridge.setHakemId(uibridge.hakemId()+1);
                }
                break;
            }
        }
        resetGame();
    }
}

int Game::findWinner(QVector<QString> table)
{
    int winner;
    int maxv=0;
    bool flaghokm=false;
    for (int i=0;i<4;i++){
        int value;

        value=valueOfCard((table[i].end()-1)->toLatin1());

        if (table[i].toStdString()[0]==hokm() && flaghokm==false){
            flaghokm=true;
            winner=i;
            maxv=value;
        }
        if (value>maxv){
            if (!flaghokm){

                if(table[i].toStdString()[0]==table[(((turn-gameloopn) < 0)? (turn-gameloopn+4) : (turn-gameloopn))].toStdString()[0]){
                    winner=i;
                    maxv=value;
                }
            }
            else{
                if(table[i].toStdString()[0]==hokm()){
                    winner=i;
                    maxv=value;
                }
            }
        }


    }
    return winner;

}

bool Game::validateCart(std::string cart, QVector<QString> table)
{
    if (gameloopn>0){

        std::string firstCart=table[(((turn-gameloopn) < 0)? (turn-gameloopn+4) : (turn-gameloopn))].toStdString();

        bool bor=true;
        for (std::string i : players[turn].cards){
            if (i[0]==firstCart[0]){
                bor=false;
                break;
            }
        }

        if (bor){
            return true;
        }
        else{
            if(cart[0]==firstCart[0]){
                return true;
            }
        }
        return false;
    }
    return true;
}

char Game::hokm()
{
    return uibridge.UiHokm().toLatin1();
}

int Game::valueOfCard(char val)
{
    int value=0;
    if (val=='0')
        value=10;
    else if (val=='J')
        value=11;
    else if (val=='Q')
        value=12;
    else if (val=='K')
        value=13;
    else if (val=='A')
        value=14;
    else
        value=val-'0';
    return value;

}


void Game::resetGame()
{
    uibridge.Scoregird()->setYourGameScore(0);
    uibridge.Scoregird()->setOpnGameScore(0);
    uibridge.setP1cards(13);
    uibridge.setP2cards(13);
    uibridge.setP3cards(13);
    uibridge.setUiHokm(' ');
    turn=uibridge.hakemId();


}

