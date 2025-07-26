/* PokeLib.h */

// Defines generation of game to simulate
typedef enum 
{
    GEN_1,
    GEN_2,
    GEN_3,
    GEN_4,
    GEN_5,
    GEN_6,
    GEN_7,
    GEN_8,
    GEN_9
} Generation;

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
    Generation gen;
    BattleType bType;
} Config;

