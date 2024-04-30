#include "character.h"
#include "team.h"

int main() {
    srand(time(NULL));
    Team *myTeam = createTeam("Ma team à moi que j'ai");
    for (int i = 0; i < 10; i++) {
        addCharacterToTeam(myTeam, createCharacter());
    }
    displayTeam(*myTeam);
    printf("%d", getFightPowerOfTeam(*myTeam));

    return 0;
}

