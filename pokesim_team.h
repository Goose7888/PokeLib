/* pokelib_team.h */

#pragma once
#include "pokesim_pokemon.h"
#include <stdio.h>
#include <stdlib.h>

/// CONTAINERS ///

typedef struct Team
{
    Pokemon teamMembers[6];
    unsigned int memberCount;
    // GameGeneration of team
} Team;

/// FUNCTIONS ///

Team *LoadTeamFromFile(/*, filePath */);
void SaveTeamToFile(Team *team);
Team *CreateNewTeam(Pokemon pokemonArray[], unsigned int memberCount);

void PrintTeam(Team *team);
void FreeTeam(Team *team);
