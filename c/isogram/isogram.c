#include "isogram.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

bool is_isogram(const char phrase[]){
    if (phrase == NULL) {
        return false;
    }

    int phraseLen = strlen(phrase);
    bool *characterAlreadyUsed = (bool *)malloc(('z' - 'a' + 1) * sizeof(int));
    for(int i=0; i < phraseLen; i++) {
        int currentCharacter = tolower(phrase[i]);
        if(currentCharacter < 'a' || currentCharacter > 'z') {
            continue;
        }

        int currentCharacterIndex = currentCharacter - 'a';
        if(!characterAlreadyUsed[currentCharacterIndex]) {
            characterAlreadyUsed[currentCharacterIndex] = true;
            continue;
        }

        return false;
    }

    return true;
}
