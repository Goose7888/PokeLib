#include "pokelib.h"

int main()
{
    Initialize(GEN_1, SINGLE);
    return 0;
}

void Initialize(GameGeneration gen, BattleType bType)
{
    printf("Hello!\n");
    printf("Generation: %d\n", gen);
    printf("Battle Type: %d\n", bType);
}

