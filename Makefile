
CC				:= clang
CFLAGS			:= -Wall -Wextra

SOURCES			:= pokemonInfo.c team.c pokemonData.c pokesim.c teamWizard.c pokemonWizard.c 

OBJECTS			:= pokemonInfo.o team.o pokemonData.o pokesim.o teamWizard.o pokemonWizard.o

TARGETS			:= pokesim

all				:	$(TARGETS)

# Link objects
$(TARGETS)		:	$(OBJECTS)
	$(CC) -o $@ $^

# Build object files
$(OBJECTS)		:	$(SOURCES)
	$(CC) -c $(CFLAGS) $^

run 			: 	all
	./pokesim

clean 			:
	rm *.o
	rm $(TARGETS)
