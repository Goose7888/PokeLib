/* battleData.h */
#pragma once

#include "pokemonInfo.h"
#include "globals.h"

// Data for each instanced battle


enum BattleType
{
    SINGLE,
    DOUBLE,
    //MULTI,
    TRIPLE,
    ROTATION,
    INVERSE
};



typedef struct
{
    enum GameGeneration gen;
    enum BattleType bType;
    unsigned int turnNo;

    // Two teams and two active pokemon go here
    // LOOTS of states will be stored in these structs
    // Two trainers as well
    // Two field "states"
        //  These include Spikes/Stealth Rock/etc.
    // Weather condition
} BattleData;

