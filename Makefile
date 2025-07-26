
all				:	build/pokelib

build/pokelib	:	pokelib.c pokelib.h
	mkdir -p ./build
	clang -o build/pokelib pokelib.c -Wall -Wextra

run 			:
	./build/pokelib

clean 			:
	rm -rf ./build
