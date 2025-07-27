#include "pokelib.h"
#include <stdio.h>

Team *InteractiveCreateTeam();
Team *InteractiveLoadTeam();
void InteractiveSaveTeam();
void PrintTeams();
void PrepareBattle();

void Cleanup();

enum menuChoice
{
    CREATE_TEAM,
    LOAD_TEAM,
    SAVE_TEAM,
    PRINT_TEAMS,
    PREPARE_BATTLE,
    EXIT_MENU
};

int main()
{
    printf("Beginning the program...\n");

    bool doMenu = true;
    do
    {

        printf("What would you like to do?\n"
                "\t0) Create a new team\n"
                "\t1) Load a team from a file\n"
                "\t2) Save a loaded team to a file\n"
                "\t3) Print currently loaded teams\n"
                "\t4) Prepare for a battle\n"
                "\t5) Exit Program\n");

        char buffer[50];
        if (fgets(buffer, sizeof(buffer), stdin) == NULL)
        {
            fprintf(stderr, "Error reading input!\n");
            return 1;
        }

        enum menuChoice choice = buffer[0] - '0';

        switch (choice)
        {
            case CREATE_TEAM:
                InteractiveCreateTeam();
                break;
            case LOAD_TEAM:
                InteractiveLoadTeam();
                break;
            case SAVE_TEAM:
                InteractiveSaveTeam();
                break;
            case PRINT_TEAMS:
                PrintTeams();
                break;
            case PREPARE_BATTLE:
                PrepareBattle();
                break;
            case EXIT_MENU:
                doMenu = false;
                break;
        }
    } while (doMenu == true);

    printf("Exitting Program!");

    Cleanup();

    return 0;
}

Team *InteractiveCreateTeam()
{
    printf("Placeholder Team Creation Text\n");
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

void PrepareBattle()
{
    printf("Preparing for battle!\n");
}

void Cleanup()
{
    printf("Cleaning up!\n");
}
