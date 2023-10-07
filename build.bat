@echo off
if not exist target mkdir target

echo Compiling blackjack...
g++ -std=c++11 src\Card.cpp src\Player.cpp src\Deck.cpp src\main.cpp src\Blackjack.cpp -o target\blackjack

echo done..