#include "pokelib.h"
#include "teamWizard.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct TeamData {
    Team **teamArr;
    unsigned int teamCount;
    unsigned int arrSize;
} TeamData;

void PrepareBattle();
void PrintAllTeams(TeamData* teamData);
void AddTeam(Team *newTeam, TeamData* teamData);
void RemoveTeam(TeamData *teamData);
void ResizeTeamArr(TeamData* teamData);
void Cleanup(TeamData* teamData);

int main()
{
    printf("Beginning the program...\n");

    enum menuChoice
    {
        PRINT_TEAMS,
        TEAM_WIZARD,
        REMOVE_TEAM,
        PREPARE_BATTLE,
        EXIT_MENU
    };

    TeamData teamData;
    teamData.arrSize = 1;
    teamData.teamArr = (Team **)malloc(teamData.arrSize);
    teamData.teamCount = 0;

    bool doMenu = true;
    do
    {
        printf("What would you like to do?\n"
                "\t0) Print Teams\n"
                "\t1) Team Wizard\n"
                "\t2) Remove Team\n"
                "\t3) Prepare for a battle\n"
                "\t4) Exit Program\n");

        char buffer[50];
        if (fgets(buffer, sizeof(buffer), stdin) == NULL)
        {
            fprintf(stderr, "Error reading input!\n");
            return 1;
        }
        enum menuChoice choice = buffer[0] - '0';
        Team *newTeam;
        switch (choice)
        {
            case PRINT_TEAMS:
                break;
            case TEAM_WIZARD:
                newTeam = TeamWizard();
                if (newTeam)
                {
                    AddTeam(newTeam, &teamData);
                }
                else
                {
                    printf("Team Not Registered!\n");
                }
                break;
            case REMOVE_TEAM:
                RemoveTeam(&teamData);
                break;
            case PREPARE_BATTLE:
                PrepareBattle();
                break;
            case EXIT_MENU:
                doMenu = false;
                break;
        }
    } while (doMenu == true);

    printf("Exitting Program!\n");

    Cleanup(&teamData);

    return 0;
}

void PrepareBattle()
{
    printf("Preparing for battle!\n");
}

void PrintAllTeams(TeamData *teamData)
{
    if (teamData->teamCount == 0)
        printf("No teams registered!\n");
    for (unsigned int i = 0; i < teamData->teamCount; i++)
    {
        PrintTeam(teamData->teamArr[i]);
    }
}

void AddTeam(Team *newTeam, TeamData *teamData)
{
    printf("Registering team!\n");

    if (teamData->teamCount == teamData->arrSize)
        ResizeTeamArr(teamData);

    teamData->teamArr[teamData->teamCount] = newTeam;
    (teamData->teamCount)++;
}

void RemoveTeam(TeamData *teamData)
{
    if (teamData->teamCount == 0)
    {
        printf("No teams to remove!\n");
        return;
    }

    
}

void ResizeTeamArr(TeamData *teamData)
{
    printf("Resizing team array!\n");

    Team **newTeamArr = (Team**)malloc(teamData->arrSize * 2);
    for (unsigned int i = 0; i < teamData->arrSize; i++)
    {
        newTeamArr[i] = teamData->teamArr[i];
    }
    teamData->arrSize *= 2;
    free(teamData->teamArr);
    teamData->teamArr = newTeamArr;
}

void Cleanup(TeamData *teamData)
{
    printf("Cleaning up!\n");
    
    for (unsigned int i = 0; i < teamData->teamCount; i++)
    {
        free(teamData->teamArr[i]);
    }
    free(teamData->teamArr);
}
