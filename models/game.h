#ifndef GAME_H
#define GAME_H

#include "player.h"
#include "UiBridge.h"
#include <ctime>
#include <span>
#include <cstdlib>
#include <string>
#include <vector>
#include <mutex>
#include <condition_variable>
#include <memory>

class Game
{
private:
    int turn;
    void stepTurn();

    UiBridge &uibridge=UiBridge::getInstance();

    void splitCards(int t=13);
    std::vector<std::string> shuffle();
    std::vector<Player> players;

    std::vector<std::string> cards{"hearts_2","hearts_3","hearts_4","hearts_5","hearts_6","hearts_7","hearts_8","hearts_9","hearts_10","hearts_J","hearts_Q","hearts_K","hearts_A",
                                   "spades_2","spades_3","spades_4","spades_5","spades_6","spades_7","spades_8","spades_9","spades_10","spades_J","spades_Q","spades_K","spades_A",
                                   "diamonds_2","diamonds_3","diamonds_4","diamonds_5","diamonds_6","diamonds_7","diamonds_8","diamonds_9","diamonds_10","diamonds_J","diamonds_Q","diamonds_K","diamonds_A",
                                   "clubs_2","clubs_3","clubs_4","clubs_5","clubs_6","clubs_7","clubs_8","clubs_9","clubs_10","clubs_J","clubs_Q","clubs_K","clubs_A",};

    std::mutex m;
    std::vector<std::condition_variable *> playerLocks;

    std::shared_ptr<std::thread> exec_procces;
    void updateInterface();
    void exec();
    int findWinner(QVector<QString>);

    bool validateCart(std::string cart,QVector<QString> table);
    int gameloopn{0};

    char hokm();
    int gameSocreT1{0};
    int gameSocreT2{0};

    int socreT1{0};
    int socreT2{0};

    int valueOfCard(char val);

    void resetGame();

public:
    Game();
    void init();
    void start();
    void join();
};

#endif // GAME_H
