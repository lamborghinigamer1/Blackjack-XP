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