/* team.c */

#include "team.h"
#include <stdio.h>

Team *LoadTeamFromFile()
{
    Team *newTeam = NULL;
    return newTeam;
}

void SaveTeamToFile(Team *team)
{
}

Team *CreateNewTeam(Pokemon pokemonArray[])
{
    Team *newTeam = 0;
    return newTeam;
}

void PrintTeam(Team *team)
{
    for (unsigned int i = 0; i < 6; i++)
    {
        printf("Slot %d: \n", i);
        PrintPokemon(&team->teamMembers[i]);
    }
}
