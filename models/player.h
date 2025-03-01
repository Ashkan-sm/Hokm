#ifndef PLAYER_H
#define PLAYER_H

#include "UiBridge.h"
#include <thread>
#include <condition_variable>
#include <mutex>
#include <thread>
#include <chrono>
#include <memory>
#include <set>

class Player
{
private:
    UiBridge &uibridge=UiBridge::getInstance();

    std::condition_variable &conV;
    std::mutex &m;

    std::shared_ptr<std::thread> exec_process_;
    void exec();
    std::string cardIWillPlay;

    std::string pickCart(std::vector<std::string>);

public:
    bool UiAvailable{false};
    bool myturn{false};
    std::set<std::string> cards;
    void clearCards();
    Player(std::condition_variable &,std::mutex &);
    std::set<std::string> getCards() const;

    std::string getCardIWILLPlay();
    void setCards(const std::set<std::string> &newCards);
    void join();
    void run();



    void PickHokm();

    void setCardIWillPlay(const std::string &newCardIWillPlay);
};

#endif // PLAYER_H
