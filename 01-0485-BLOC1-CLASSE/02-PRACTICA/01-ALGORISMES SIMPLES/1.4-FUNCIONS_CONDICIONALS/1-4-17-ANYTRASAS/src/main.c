#include <stdio.h>
#include <stdlib.h>
#include <time.h>  
#include <windows.h>
#include <string.h>
#include <stdbool.h>
#include "rlutil.h"
#include "llibreriaPropia.h"
#include "llibreriaExercici.h"

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    srand(time(NULL));

    int any;
    bool esTraspas = false;

    printf("Introdueix un any: ");
    scanf("%d", &any);
    while (getchar() != '\n');

    // Comprovació seguint les passes de l'enunciat
    if (any % 4 == 0) {
        if (any % 100 == 0) {
            // És final de segle: comprovem si les dues primeres xifres són divisibles entre 4
            int primeresXifres = any / 100;
            if (primeresXifres % 4 == 0) {
                esTraspas = true;
            } else {
                esTraspas = false;
            }
        } else {
            // Divisible entre 4 i no és final de segle
            esTraspas = true;
        }
    } else {
        esTraspas = false;
    }

    // Mostrem el resultat
    if (esTraspas) {
        printf("L'any %d ÉS de traspàs.\n", any);
    } else {
        printf("L'any %d NO és de traspàs.\n", any);
    }

    acabament();
    return 0;
}