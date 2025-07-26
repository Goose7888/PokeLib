/* battleData.h */
#pragma once

#include "pokemonConfig.h"

// Data for each instanced battle

typedef enum 
{
    GEN_1 = 1,
    GEN_2 = 2,
    GEN_3 = 3,
    GEN_4 = 4,
    GEN_5 = 5,
    GEN_6 = 6,
    GEN_7 = 7,
    GEN_8 = 8,
    GEN_9 = 9
} GameGeneration;

typedef enum
{
    SINGLE,
    DOUBLE,
    //MULTI,
    TRIPLE,
    ROTATION,
    INVERSE
} BattleType;



typedef struct
{
    GameGeneration gen;
    BattleType bType;
    unsigned int turnNo;

    // Two teams and two active pokemon go here
    // LOOTS of states will be stored in these structs
    // Two trainers as well
    // Two field "states"
        //  These include Spikes/Stealth Rock/etc.
    // Weather condition
} BattleData;

