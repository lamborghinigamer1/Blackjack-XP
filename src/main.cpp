#include <iostream>
#include <string>
#include "Card.h"
#include "Deck.h"
#include "Player.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Deck deck;
    Player player("Tijmoe");
    player.addCard(deck.drawCard());
    player.addCard(deck.drawCard());
    cout << player.Name() << " has:" << player.showHand() << endl;
    return 0;
}