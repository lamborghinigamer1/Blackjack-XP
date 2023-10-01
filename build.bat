@echo off
if not exist target mkdir target

echo Compiling example.cpp...
g++ src\card.cpp src\main.cpp -o target\blackjack

echo done..