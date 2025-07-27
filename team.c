/* team.c */

#include "team.h"

Team *LoadTeamFromFile()
{
    Team *newTeam = NULL;
    return newTeam;
}

void SaveTeamToFile(Team *team)
{
    printf("Saving team to file!\n");
    PrintTeam(team);
}

Team *CreateNewTeam(Pokemon pokemonArray[], unsigned int memberCount)
{
    // Sanity checks
    if (memberCount > 6)
    {
        fprintf(stderr, "Number of team members cannot exceed 6!\n");
        return NULL;
    }
    if (memberCount == 0)
    {
        fprintf(stderr, "Team cannot be empty!\n");
        return NULL;
    }

    Team *newTeam = (Team *)malloc(memberCount);
    newTeam->memberCount = memberCount;

    for (unsigned int i = 0; i < memberCount; i++)
    {
        newTeam->teamMembers[i] = pokemonArray[i];
    }

    return newTeam;
}

void PrintTeam(Team *team)
{
    for (unsigned int i = 0; i < team->memberCount; i++)
    {
        printf("Slot %d: \n", i);
        PrintPokemon(&team->teamMembers[i]);
        printf("\n");
    }
}

void FreeTeam(Team *team)
{
    for (unsigned int i = 0; i < team->memberCount; i++)
    {
        FreePokemon(&team->teamMembers[i]);
    }
    free(team);
}
