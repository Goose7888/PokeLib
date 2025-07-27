#include "pokelib.h"
#include "teamWizard.h"
#include <stdio.h>
#include <stdlib.h>

Team *TeamWizard()
{
    enum menuChoice
    {
        PRINT_TEAM,
        LOAD_TEAM,
        SAVE_TEAM,
        POKEMON_WIZARD,
        REMOVE_POKEMON,
        SWAP_SLOTS,
        VALIDATE_EXIT,
        DISCARD_EXIT
    };

    Team *newTeam = (Team *)malloc(sizeof(Team));

    bool doMenu = true;
    do
    {
        printf("Team Creation Wizard:\n"
                "\t0) Print Current Team\n"
                "\t1) Load Team From File\n"
                "\t2) Save Team To File\n"
                "\t3) Enter Pokemon Wizard\n"
                "\t4) Remove Pokemon From Slot\n"
                "\t5) Swap Slots\n"
                "\t6) Validate Team and Exit\n"
                "\t7) Discard Team and Exit\n");

        char buffer[50];
        if (fgets(buffer, sizeof(buffer), stdin) == NULL)
        {
            fprintf(stderr, "Error reading input!\n");
            return NULL;
        }

        switch (buffer[0] - '0')
        {
            case PRINT_TEAM:
                break;
            case LOAD_TEAM:
                break;
            case SAVE_TEAM:
                break;
            case POKEMON_WIZARD:
                break;
            case REMOVE_POKEMON:
                break;
            case SWAP_SLOTS:
                break;
            case VALIDATE_EXIT:
                if (true) // If a validation function succeeds
                    return newTeam;
                break;
            case DISCARD_EXIT:
                return NULL;
                break;
        }
    }
    while (doMenu == true);

    return NULL;
}

Team *InteractiveLoadTeam()
{
    printf("Loading team from file!\n");
    return NULL;
}

void InteractiveSaveTeam()
{
    printf("Saving team to file!\n");
}

void PrintTeams()
{
    printf("Printing Loaded Teams!\n");
}
