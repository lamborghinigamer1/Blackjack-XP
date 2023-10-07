#ifndef DECK_H
#define DECK_H

#include "Card.h"
#include <ctime>

class Deck
{
private:
    Card *cards;
    int numCards;

public:
    Deck();
    ~Deck();
    Card drawCard();
};

#endif