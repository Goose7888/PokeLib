
CC				:= clang
CFLAGS			:= -Wall -Wextra

SOURCES			:= pokelib.c pokemonInfo.c #battleInfo.c

OBJECTS			:= pokelib.o pokemonInfo.o #battleInfo.o

TARGETS			:= pokelib

all				:	$(TARGETS)

# Link objects
$(TARGETS)		:	$(OBJECTS)
	mkdir -p ./build
	$(CC) -o $@ $^

# Build object files
$(OBJECTS)		:	$(SOURCES)
	$(CC) -c $(CFLAGS) $^

run 			: 	all
	./pokelib

clean 			:
	rm *.o
	rm $(TARGETS)
