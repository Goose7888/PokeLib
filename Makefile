
CC				:= clang
CFLAGS			:= -Wall -Wextra

SOURCES			:= pokemonInfo.c team.c example.c

OBJECTS			:= pokemonInfo.o team.o example.o

TARGETS			:= example

all				:	$(TARGETS)

# Link objects
$(TARGETS)		:	$(OBJECTS)
	$(CC) -o $@ $^

# Build object files
$(OBJECTS)		:	$(SOURCES)
	$(CC) -c $(CFLAGS) $^

run 			: 	all
	./example

clean 			:
	rm *.o
	rm $(TARGETS)
