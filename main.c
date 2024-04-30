#include "character.h"

int main() {
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        displayCharacter(*createCharacter());
    }
    return 0;
}
