/* team.h */

#pragma once
#include "pokemonInfo.h"

/// CONTAINERS ///

typedef struct Team
{
    Pokemon teamMembers[6];
    int trainerID;
    // GameGeneration of team
} Team;

/// FUNCTIONS ///

Team *LoadTeamFromFile(int trainer);
void SaveTeamToFile(Team *team);
Team *CreateNewTeam(Pokemon pokemonArray[], int trainer);

