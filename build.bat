@echo off
if not exist target mkdir target

echo Compiling example.cpp...
g++ src\Card.cpp src/Player.cpp src/Deck.cpp src\main.cpp -o target\blackjack

echo done..