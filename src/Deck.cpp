#include "Deck.h"

Deck::Deck()
{
    numCards = 4 * 13;
    cards = new Card[numCards];
    std::string validsuits[4] = {"Hearts", "Spades", "Diamonds", "Clubs"};
    std::string validvalues[13] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    int cardIndex = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int x = 0; x < 13; x++)
        {
            cards[cardIndex] = Card(validsuits[i], validvalues[x]);
            cardIndex++;
        }
    }
    srand(static_cast<unsigned>(time(0)));
}
Deck::~Deck()
{
    delete[] cards;
}

Card Deck::drawCard()
{
    if (numCards == 0)
    {
        return Card();
    }

    srand(time(0));
    int random_number = (rand() % (numCards - 0 + 1)) + 0;

    Card chosencard = cards[random_number];

    for (int i = random_number; i < numCards - 1; i++)
    {
        cards[i] = cards[i + 1];
    }

    numCards--;
    return chosencard;
}