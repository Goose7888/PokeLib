/* teamwizard.h */
#pragma once
#include "pokelib.h"

// Team Functions
Team *TeamWizard();
Team *InteractiveLoadTeam();
void InteractiveSaveTeam();
void PrintTeams();

// Pokemon Functions
Pokemon *InteractiveCreatePokemon();
Pokemon *InteractiveLoadPokemon();
void InteractiveSavePokemon();

