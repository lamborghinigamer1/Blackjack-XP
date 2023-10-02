SRC := $(wildcard src/*.cpp)

all: clean prepare build

prepare:
	mkdir -p target

build: $(SRC)
	g++ -std=c++11 $(SRC) -o target/blackjack

clean:
	rm -rf target