#include "Card.h"

Card::Card(std::string suit, std::string value)
{
    this->suit = suit;
    this->value = value;
    this->validateSuit();
    this->validateValue();
}

Card::Card()
{
}

std::string Card::show()
{
    return this->suit + " " + this->value;
}

int Card::score(bool highace)
{
    std::string cardvalue = this->value;

    if (cardvalue == "A")
    {
        if (highace)
        {
            return 11;
        }
        else
        {
            return 1;
        }
    }
    if (cardvalue == "B" || cardvalue == "Q" || cardvalue == "J" || cardvalue == "K")
    {
        return 10;
    }
    else
    {
        return std::stoi(cardvalue);
    }
}

bool Card::validateSuit()
{
    std::string validsuit[4] = {"Hearts", "Spades", "Diamonds", "Clubs"};
    std::string changeto[4] = {"♥", "♠", "♦", "♣"}
#ifdef _WIN32
    ;
    changeto[0] = "\x03";
    changeto[1] = "\x06";
    changeto[2] = "\x04";
    changeto[3] = "\x05";
#endif
    ;
    for (int i = 0; i < 4; i++)
    {
        if (this->suit == validsuit[i])
        {
            this->suit = changeto[i];
            return true;
        }
    }
    throw std::runtime_error("Invalid suit");
}

bool Card::validateValue()
{
    std::string validvalues[13] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    for (int i = 0; i < 13; i++)
    {
        if (this->value == validvalues[i])
        {
            this->value = validvalues[i].substr(0, 1);
            return true;
        }
    }
    throw std::runtime_error("Invalid value");
}
