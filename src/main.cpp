#include <iostream>
#include <string>
#include "Card.h"
#include "Deck.h"
#include "Player.h"
#include "Blackjack.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Blackjack blackjack;
    Deck deck;
    Player player("Tijmoe");
    player.addCard(deck.drawCard());
    player.addCard(deck.drawCard());
    cout << player.Name() << " has:" << player.showHand() << endl;
    cout << "score: " << Blackjack().scoreHandInt(player.getHand(), player.showCardIndex());
    return 0;
}