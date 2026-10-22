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

    int mes;

    printf("Introdueix el mes (1-12): ");
    scanf("%d", &mes);

    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Resultat 31 dies\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Resultat 30 dies\n");
            break;
        case 2:
            printf("Resultat 28 dies\n");
            break;
        default:
            printf("Mes no vàlid\n");
            break;
    }

    acabament();
    return 0;
}
