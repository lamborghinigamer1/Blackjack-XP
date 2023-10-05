DIR="target/"

if [ -d "$DIR" ]; then
    echo "Directory target/ already exists."
else
    echo "Creating directory target/"
    mkdir target/
fi

echo "Compiling blackjack"

g++ -std=c++11 src/*.cpp -o target/blackjack

echo "Compiling done in target/."
