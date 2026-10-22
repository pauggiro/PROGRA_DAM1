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

    char car = ' ';
    char carAnt = ' ';
    int comptador = 0;

    while (1) {
        printf("Introdueix un caracter: ");
        scanf(" %c", &car);

        if (car == '.') {
            break;
        }

        if ((carAnt == 'l' || carAnt == 'L') && (car == 'a' || car == 'A')) {
            comptador++;
        }

        carAnt = car;
    }

    printf("Han aparegut %d la\n", comptador);

    acabament();
    return 0;
}
