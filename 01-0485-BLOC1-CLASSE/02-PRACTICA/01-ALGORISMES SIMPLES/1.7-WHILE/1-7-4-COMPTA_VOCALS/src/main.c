#include <stdio.h>
#include <stdlib.h>
#include <time.h>  
#include <windows.h>
#include <string.h>
#include <stdbool.h>
#include "rlutil.h"
#include "llibreriaPropia.h"
#include "llibreriaExercici.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    srand(time(NULL));

    int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;
    char c = ' ';

    while (c != '.') {
        printf("Introdueix un caràcter: ");
        scanf(" %c", &c);

        if (c == 'a' || c == 'A') {
            countA++;
        } else if (c == 'e' || c == 'E') {
            countE++;
        } else if (c == 'i' || c == 'I') {
            countI++;
        } else if (c == 'o' || c == 'O') {
            countO++;
        } else if (c == 'u' || c == 'U') {
            countU++;
        }
    }

    printf("S’han introduït : a:%d e:%d i:%d o:%d u:%d\n", countA, countE, countI, countO, countU);

    acabament();
    return 0;
}
