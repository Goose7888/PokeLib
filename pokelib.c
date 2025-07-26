#include "pokelib.h"

void Initialize(GameGeneration gen, BattleType bType)
{
    printf("Hello!\n");
    printf("Generation: %d\n", gen);
    printf("Battle Type: %d\n", bType);
}

int main()
{
    Initialize(GEN_1, SINGLE);
    return 0;
}
