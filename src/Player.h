#ifndef PLAYER_H
#define PLAYER_H

#include "Card.h"
#include <string>

class Player
{
private:
    Card *hand;
    int cardIndex;
    std::string name;

public:
    Player();
    Player(std::string name);
    ~Player();
    std::string Name();
    void addCard(Card card);
    std::string showHand();
    int showCardIndex();
    Card *getHand();
};

#endif
