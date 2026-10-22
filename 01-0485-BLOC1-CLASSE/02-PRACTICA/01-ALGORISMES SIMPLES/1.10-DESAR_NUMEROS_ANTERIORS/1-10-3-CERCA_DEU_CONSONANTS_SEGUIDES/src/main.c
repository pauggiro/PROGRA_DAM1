#include <stdio.h>
#include <stdlib.h>
#include <time.h>  
#include <windows.h>
#include <string.h>
#include <stdbool.h>
#include "rlutil.h"
#include "llibreriaPropia.h"
#include "llibreriaExercici.h"

bool esVocal(char c) {
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    srand(time(NULL));

    char car;
    int color, ultimColor = -1;
    int consonantsSeguides = 0;

    while (consonantsSeguides < 10) {
        car = 65 + rand() % (90 - 65 + 1);

        do {
            color = 1 + rand() % 15;
        } while (color == ultimColor);
        ultimColor = color;

        setColor(color);
        printf("%c", car);

        if (!esVocal(car)) {
            consonantsSeguides++;
        } else {
            consonantsSeguides = 0;
        }
    }

    setColor(WHITE);
    printf("\n");

    acabament();
    return 0;
}
