/* pokemonWizard.c */
#include "pokemonWizard.h"

// Pokemon Functions

Pokemon *PokemonWizard()
{
    enum MenuChoice
    {
        CHANGE_GENERATION,
        PRINT_POKEMON,
        LOAD_POKEMON,
        SAVE_POKEMON,
        VALIDATE_EXIT,
        DISCARD_EXIT
    };

    bool doMenu = true;
    Pokemon *newPokemon = NULL;

    do
    {
        char buffer[50];

        if (fgets(buffer, sizeof(buffer), stdin) == NULL)
        {
            fprintf(stderr, "Error reading input!\n");
            return NULL;
        }

        switch (buffer[0] -'0')
        {
            case CHANGE_GENERATION:
                break;
            case PRINT_POKEMON:
                break;
            case LOAD_POKEMON:
                break;
            case SAVE_POKEMON:
                break;
            case VALIDATE_EXIT:
                break;
            case DISCARD_EXIT:
                return NULL;
                break;
        }

    } while (doMenu == true);


    return newPokemon;
}



Pokemon *InteractiveLoadPokemon()
{
    return NULL;
}

void InteractiveSavePokemon()
{

}
