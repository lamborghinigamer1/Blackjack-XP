#include "Blackjack.h"

int Blackjack::scoreHandInt(Card hand[], int cardIndex)
{
    int score = 0;
    for (int i = 0; i < cardIndex; i++)
    {
        if (score < 11)
        {
            score += hand[i].score(true);
        }
        else
        {
            score += hand[i].score(false);
        }
    }
    return score;
}

std::string Blackjack::scoreHand(Card hand[], int cardIndex)
{
    int score = 0;
    for (int i = 0; i < cardIndex; i++)
    {
        if (score < 11)
        {
            score += hand[i].score(true);
        }
        else
        {
            score += hand[i].score(false);
        }
    }

    if (score == 21 && cardIndex == 2)
    {
        return "Blackjack!";
    }

    if (cardIndex == 5)
    {
        return "Five card charlie";
    }

    if (score > 21)
    {
        return "Bust!";
    }

    if (score == 21)
    {
        return "Twenty-one!";
    }
    return "Score: " + std::to_string(score);
}
