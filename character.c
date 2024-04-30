//
// Created by jeana on 30/04/2024.
//

#include "character.h"

int min(int number1, int number2);

Character *createCharacter() {
    Character *newCharacter = (Character *) malloc(sizeof(Character));
    newCharacter->s = 1;
    newCharacter->p = 1;
    newCharacter->e = 1;
    newCharacter->c = 1;
    newCharacter->i = 1;
    newCharacter->a = 1;
    newCharacter->l = 1;


    int nbAdds = rand() % (MAX_INITIAL_CHARACTERISTICS_SUM - 7);
    for (int i = 0; i < nbAdds; i++) {
        switch (rand() % 7) {
            case 0:
                newCharacter->s = min(++newCharacter->s, 10);
                break;
            case 1:
                newCharacter->p = min(++newCharacter->p, 10);
                break;
            case 2:
                newCharacter->e = min(++newCharacter->e, 10);
                break;
            case 3:
                newCharacter->c = min(++newCharacter->c, 10);
                break;
            case 4:
                newCharacter->i = min(++newCharacter->i, 10);
                break;
            case 5:
                newCharacter->a = min(++newCharacter->a, 10);
                break;
            case 6:
                newCharacter->l = min(++newCharacter->l, 10);
                break;
            default:
                break;
        }
    }
    return newCharacter;
}

int min(int number1, int number2) {
    return number1 <= number2 ? number1 : number2;
}

void displayCharacter(Character character) {
    printf("S%d:P%d:E%d:C%d:I%d:A%d:L%d\n",
           character.s,
           character.p,
           character.e,
           character.c,
           character.i,
           character.a,
           character.l);
}
