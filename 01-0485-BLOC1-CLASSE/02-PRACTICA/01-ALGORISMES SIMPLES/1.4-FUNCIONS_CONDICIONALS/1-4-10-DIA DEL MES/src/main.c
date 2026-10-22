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

    int mes;

    printf("Introdueix el número de mes (1-12): ");
    scanf("%d", &mes);
    while (getchar() != '\n');

    if (mes < 1 || mes > 12) {
        printf("Mes incorrecte\n");
    } else if (mes == 2) {
        printf("Resultat 28 dies\n");
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        printf("Resultat 30 dies\n");
    } else {
        printf("Resultat 31 dies\n");
    }

    acabament();
    return 0;
}