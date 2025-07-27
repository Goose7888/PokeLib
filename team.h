/* team.h */

#pragma once
#include "pokemonInfo.h"

/// CONTAINERS ///

typedef struct Team
{
    Pokemon teamMembers[6];
    // GameGeneration of team
} Team;

/// FUNCTIONS ///

Team *LoadTeamFromFile(/*, filePath */);
void SaveTeamToFile(Team *team);
Team *CreateNewTeam(Pokemon pokemonArray[]);

void PrintTeam(Team *team);
