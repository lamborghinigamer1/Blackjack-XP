#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>

class Card
{
public:
    Card(std::string suit, std::string value);
    Card();
    std::string show();
    int score(bool highace);

private:
    bool validateSuit();
    bool validateValue();
    std::string suit;
    std::string value;
};

#endif
