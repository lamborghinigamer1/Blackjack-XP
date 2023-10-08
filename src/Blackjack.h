#ifndef BLACKJACK_H
#define BLACKJACK_H

#include "Card.h"
#include <string>

class Blackjack
{
    public:
    int scoreHandInt(Card hand[], int cardIndex);
    std::string scoreHand(Card hand[], int cardIndex);
    private:
};

#endif