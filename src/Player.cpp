#include "Player.h"

Player::Player()
{
    hand = new Card[5];
}

Player::Player(std::string name)
{
    cardIndex = 0;
    this->name = name;
    hand = new Card[5];
}

void Player::addCard(Card card)
{
    hand[cardIndex] = card;
    cardIndex++;
}

std::string Player::showHand()
{
    std::string ReturnString = "";
    for (int i = 0; i < cardIndex; i++)
    {
        ReturnString += " " + hand[i].show();
    }
    return ReturnString;
}

Player::~Player()
{
    delete[] hand;
}

std::string Player::Name()
{
    return this->name;
}

int Player::showCardIndex()
{
    return this->cardIndex;
}

Card* Player::getHand()
{
    return hand;
}