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

    float amplada, llargaria;

    printf("Introdueix l’amplada: ");
    scanf("%f", &amplada);

    printf("Introdueix la llargària: ");
    scanf("%f", &llargaria);

    float perimetre = 2 * (amplada + llargaria);
    float area = amplada * llargaria;

    printf("El seu perímetre és: %.1f\n", perimetre);
    printf("La seva àrea és: %.2f\n", area);

    acabament();
    return 0;
}