/* pokemonInfo.c */

#include "pokemonInfo.h"
#include <stdlib.h>
#include <stdio.h>

Pokemon *CreatePokemon(unsigned int pokedexNo, unsigned int level, 
                            Stats effortValues, Stats individualValues,
                            Stats legacyDeterminants, Gender gender,
                            Nature nature, bool isShiny)
{
    Pokemon *pokemon = (Pokemon*) malloc(sizeof(Pokemon));
    // allocate mem for new pokemon
    pokemon->pokedexNo = pokedexNo;

    SetSpeciesData(pokemon);     

    return pokemon;
}

void FreePokemon(Pokemon *pokemon)
{
    free(pokemon);
}

void SetSpeciesData(Pokemon *pokemon)
{
    pokemon->species = "Placeholder Name";
    //pokemon->baseStats = 
    pokemon->type1 = NOTHING;
    pokemon->type2 = NOTHING;
}

void PrintPokemon(Pokemon *pokemon)
{
    printf("Pokemon Species: %s", pokemon->species);
}
