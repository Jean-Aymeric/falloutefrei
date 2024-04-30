//
// Created by jeana on 30/04/2024.
//

#include "character.h"
#include <string.h>

#define TEAM_NAME_SIZE 50

#ifndef FALLOUTEFREI_TEAM_H
#define FALLOUTEFREI_TEAM_H

typedef struct TeamMember {
    Character *member;
    struct TeamMember *next;
} TeamMember;

typedef struct Team {
    char name[TEAM_NAME_SIZE];
    TeamMember *first;
} Team;

Team *createTeam(char name[TEAM_NAME_SIZE]);

void addCharacterToTeam(Team *team, Character *character);

void removeCharacterFromTeam(Team *team, int index);

int countCharactersInTeam(Team team);

int getFightPowerOfTeam(Team team);

void displayTeam(Team team);

#endif //FALLOUTEFREI_TEAM_H
