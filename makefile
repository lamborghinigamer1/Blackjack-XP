SRC := $(wildcard src/*.cpp)

all: clean prepare build

prepare:
	mkdir -p target

build: $(SRC)
	g++ $(SRC) -o target/blackjack

clean:
	rm -rf target