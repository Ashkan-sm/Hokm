#include "player.h"

std::set<std::string> Player::getCards() const
{
    return cards;
}

std::string Player::getCardIWILLPlay()
{
    return cardIWillPlay;
}

void Player::setCards(const std::set<std::string> &newCards)
{
    cards = newCards;

}

void Player::join()
{
    if (exec_process_ && exec_process_->joinable()){
        exec_process_->join();
    }

}

void Player::exec()
{
    while(1){
        std::unique_lock<std::mutex> lk(this->m);
        conV.wait(lk,[this]{return this->myturn;});
        cardIWillPlay="";
        if (UiAvailable){
            while(cardIWillPlay == ""){
                cardIWillPlay=uibridge.CardsOnTable()[0].toStdString();
            }
        }
        else{
            std::vector<std::string> cardOnTable(4);

            for (int i=0 ;i< 4;i++){
                cardOnTable[i]=uibridge.CardsOnTable()[i].toStdString();
            }
            cardIWillPlay=pickCart(cardOnTable);
        }

        myturn=false;
        conV.notify_one();
    }
}

std::string Player::pickCart(std::vector<std::string> table)
{

    int p=rand()%cards.size();
    auto tempItr =cards.begin();
    for (;p!=0;p--)tempItr++;
    return *tempItr;
}

void Player::clearCards()
{
    cards.clear();

}

void Player::setCardIWillPlay(const std::string &newCardIWillPlay)
{
    cardIWillPlay = newCardIWillPlay;
}

Player::Player(std::condition_variable &conv_,std::mutex &m) : conV(conv_),m(m) {}

void Player::run()
{
    exec_process_ = std::make_unique<std::thread>([this]{exec();});
}

void Player::PickHokm()
{
    if(UiAvailable){
        while(uibridge.UiHokm()==' '){
            std::this_thread::sleep_for(std::chrono::microseconds(100));
        }
    }
    else {
        uibridge.setUiHokm('h');
    }

}
