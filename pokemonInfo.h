/* pokemonConfig.h */
#pragma once

#include <stdbool.h>
#include "moveInfo.h"

//typedef enum 
//{
//    GEN_1 = 1,
//    GEN_2 = 2,
//    GEN_3 = 3,
//    GEN_4 = 4,
//    GEN_5 = 5,
//    GEN_6 = 6,
//    GEN_7 = 7,
//    GEN_8 = 8,
//    GEN_9 = 9
//} GameGeneration;

typedef struct
{
    unsigned int hp;
    unsigned int attack;
    unsigned int defense;
    unsigned int spAttack;
    unsigned int spDefense;
    unsigned int speed;
} Stats;

typedef enum Type
{
    NOTHING,
    NORMAL,
    FIGHTING,
    FLYING,
    POISON,
    GROUND,
    ROCK,
    BUG,
    GHOST,
    FIRE,
    WATER,
    GRASS,
    ELEXTRIC,
    PSYCHIC,
    ICE,
    DRAGON,
    DARK,
    STEEL,
    FAIRY
} Type;

typedef enum Gender {
    MALE,
    FEMALE,
    UNKOWN
} Gender;

typedef enum Nature // See https://bulbapedia.bulbagarden.net/wiki/Nature#List_of_Natures
{
    LEGACY,
    HARDY,
    LONELY,
    BRAVE,
    ADAMANT,
    NAUGHTY,
    BOLD,
    DOCILE,
    RELAXED,
    IMPISH,
    LAX,
    TIMID,
    HASTY,
    SERIOUS,
    JOLLY,
    NAIVE,
    MODEST,
    MILD,
    QUIET,
    BASHFUL,
    RASH,
    CALM,
    GENTLE,
    SASSY,
    CAREFUL,
    QUIRKY
} Nature;

typedef struct Pokemon
{
    //GameGeneration gen;
    unsigned int pokedexNo;
    char *species;
    Stats baseStats;            // Determined by species
    Type type1;
    Type type2;

    unsigned int level;         // Values 1-100
    Stats effortValues;         // Values range from 0-255
    Stats individualValues;     // Values range from 0-31
    Stats legacyDeterminants;   // Values ranges from 0-15 in ONLY ATT, DEF, SPECIAL, SPEED
                                // legacyDeterminants only used for Gen 1 & 2
    Gender gender;
    Nature nature;
    bool isShiny;

    Stats stats; // stats is base stats + modifiers

    struct BattleState
    {
        unsigned int remainingHP;

        unsigned int remainingPP1, remainingPP2,
                     remainingPP3, remainingPP4;

        enum statusCondition
        {
            FAINTED_CONDITION,
            BURN_CONDITION,
            FREEZE_CONDITION,
            PARALYSIS_CONDITION,
            POISON_CONDITION,
            BADLY_POISON_CONDITION,
            SLEEP_CONDITION
        } statusCondition;
       
        bool extraConditions[100];
        // https://bulbapedia.bulbagarden.net/wiki/Status_condition#Volatile_status

    } BattleState;

} Pokemon;

// FUNCTIONS //

Pokemon *CreatePokemon(unsigned int pokedexNo, unsigned int level, 
                            Stats effortValues, Stats individualValues,
                            Stats legacyDeterminants, Gender gender,
                            Nature nature, bool isShiny);
void FreePokemon(Pokemon *pokemon);
void SetSpeciesData(Pokemon *pokemon);
//void CalculateStats(Pokemon *pokemon);
void PrintPokemon(Pokemon *pokemon);

