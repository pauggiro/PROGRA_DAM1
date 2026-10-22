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

    bool trobatA = false;
    bool trobatE = false;
    bool trobatI = false;
    bool trobatO = false;
    bool trobatU = false;
    int vocalsTrobades = 0;
    char car = ' ';

    while (vocalsTrobades < 5 && car != '.') {
        printf("Introdueix un caracter: ");
        scanf(" %c", &car);

        if (car == '.') {
            break;
        }

        if ((car == 'a' || car == 'A') && !trobatA) {
            trobatA = true;
            vocalsTrobades++;
        } else if ((car == 'e' || car == 'E') && !trobatE) {
            trobatE = true;
            vocalsTrobades++;
        } else if ((car == 'i' || car == 'I') && !trobatI) {
            trobatI = true;
            vocalsTrobades++;
        } else if ((car == 'o' || car == 'O') && !trobatO) {
            trobatO = true;
            vocalsTrobades++;
        } else if ((car == 'u' || car == 'U') && !trobatU) {
            trobatU = true;
            vocalsTrobades++;
        }
    }

    if (vocalsTrobades == 5) {
        printf("S'ha trobat les 5 vocals\n");
    } else {
        printf("No s'ha trobat les 5 vocals\n");
    }

    acabament();
    return 0;
}
