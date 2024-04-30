//
// Created by jeana on 30/04/2024.
//

#include "team.h"

void displayTeamMember(TeamMember *member);

int countMembers(TeamMember *member);

Team *createTeam(char name[TEAM_NAME_SIZE]) {
    Team *newTeam = (Team *) malloc(sizeof(Team));
    strcpy(newTeam->name, name);
    newTeam->first = NULL;
}

void addCharacterToTeam(Team *team, Character *character) {
    TeamMember *newMember = (TeamMember *) malloc(sizeof(TeamMember));
    newMember->member = character;
    newMember->next = team->first;
    team->first = newMember;
}

void displayTeam(Team team) {
    printf("%s\n", team.name);
    displayTeamMember(team.first);
}

void displayTeamMember(TeamMember *member) {
    if (member != NULL) {
        printf("\t-");
        displayCharacter(*member->member);
        displayTeamMember(member->next);
    }
}

int countCharactersInTeam(Team team) {
    return countMembers(team.first);
}

int countMembers(TeamMember *member) {
    if (member == NULL) return 0;
    return 1 + countMembers(member->next);
}


int getFightPowerOfTeam(Team team) {
    TeamMember *temporaryMember = team.first;
    double sumSPEA = 0;
    double sumIL = 0;
    double nbMembers = 0;
    while (temporaryMember != NULL) {
        sumSPEA += temporaryMember->member->s
                   + temporaryMember->member->p
                   + temporaryMember->member->e
                   + temporaryMember->member->a;
        sumIL += temporaryMember->member->i
                 + temporaryMember->member->l;
        nbMembers++;
        temporaryMember = temporaryMember->next;
    }
    return (int) (sumSPEA * (sumIL / nbMembers));
}