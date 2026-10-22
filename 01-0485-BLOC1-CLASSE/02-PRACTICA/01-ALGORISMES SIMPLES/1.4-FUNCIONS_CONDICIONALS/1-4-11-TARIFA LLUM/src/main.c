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

    int hora, dia;

    printf("Introdueix l'hora (0-23): ");
    scanf("%d", &hora);
    while (getchar() != '\n');

    printf("Introdueix el dia de la setmana (1-7): ");
    scanf("%d", &dia);
    while (getchar() != '\n');

    
    if (hora < 0 || hora > 23 || dia < 1 || dia > 7) {
        printf("Dades incorrectes\n");
    } else if (dia == 6 || dia == 7) {
     
        printf("Resultat: tot el cap de setmana es Valle\n");
    } else {
  
        char nomDia[15];
        if (dia == 1) strcpy(nomDia, "dilluns");
        else if (dia == 2) strcpy(nomDia, "dimarts");
        else if (dia == 3) strcpy(nomDia, "dimecres");
        else if (dia == 4) strcpy(nomDia, "dijous");
        else strcpy(nomDia, "divendres");


        char zona[10];
        if (hora >= 0 && hora <= 7) {
            strcpy(zona, "Valle");
        } else if ((hora >= 10 && hora <= 13) || (hora >= 18 && hora <= 21)) {
            strcpy(zona, "Punta");
        } else {
            strcpy(zona, "Llano");
        }

        printf("Resultat: %s a les %d es %s\n", nomDia, hora, zona);
    }

    acabament();
    return 0;
}