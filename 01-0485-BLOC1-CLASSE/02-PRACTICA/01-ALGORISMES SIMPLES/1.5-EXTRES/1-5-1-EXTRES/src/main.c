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

    char torn;
    int seccio;
    float sou;

    printf("Introdueix el torn: ");
    scanf(" %c", &torn);

    printf("Introdueix la secció: ");
    scanf("%d", &seccio);

    printf("Introdueix el sou: ");
    scanf("%f", &sou);

    if ((torn != 'M' && torn != 'm' && torn != 'T' && torn != 't' && torn != 'N' && torn != 'n') ||
        (seccio < 1 || seccio > 3) || (sou < 0)) {
        printf("Dades incorrectes\n");
    } else {
        if (torn == 'M' || torn == 'm' || (seccio == 1 && sou < 700)) {
            printf("El treballador es promou a la nova secció\n");
        } else {
            printf("El treballador no es promou a la nova secció\n");
        }
    }

    acabament();
    return 0;
}
