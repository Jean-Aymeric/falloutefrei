//
// Created by jeana on 30/04/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifndef FALLOUTEFREI_CHARACTER_H
#define FALLOUTEFREI_CHARACTER_H

#define MAX_INITIAL_CHARACTERISTICS_SUM 20

typedef struct Character {
    int s;
    int p;
    int e;
    int c;
    int i;
    int a;
    int l;
} Character;

Character *createCharacter();

void displayCharacter(Character character);

#endif //FALLOUTEFREI_CHARACTER_H
