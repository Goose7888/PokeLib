/* PokeLib.h */

/// LIBRARIES ///
#include <stdio.h>

/// TYPES ///

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

// Config data for initialization
typedef struct 
{
    GameGeneration gen;
    BattleType bType;
} Config;


/// FUNCTIONS ///

void Initialize(GameGeneration gen, BattleType bType);
