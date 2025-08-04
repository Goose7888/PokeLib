/* pokelib_pokemon.c */

#include "pokelib_pokemon.h"
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
    pokemon->level = level;
    pokemon->effortValues = effortValues;
    pokemon->individualValues = individualValues;
    pokemon->legacyDeterminants = legacyDeterminants;
    pokemon->gender = gender;
    pokemon->nature = nature;
    pokemon->isShiny = isShiny;

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

//bool ValidatePokemon(Pokemon *pokemon, enum GameGeneration generation)
//{
//    if (generation == GEN_1)
//    {
//        
//    }
//    if (generation == GEN_2)
//    {
//
//    }
//    if (generation == GEN_3)
//    {
//
//    }
//    return true;
//}

Pokemon *pokelib_loadPokemon(const char * path)
{
    printf("Loading %s\n", path);
    return NULL;
}
