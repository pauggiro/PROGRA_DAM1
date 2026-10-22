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

    int amplada;

    do {
        printf("Introdueix l'amplada: ");
        scanf("%d", &amplada);
    } while (amplada < 1 || amplada > 19);

    int comptaLinia = 0;
    for (int i = 0; i < 100; i++) {
        printf("%2d", i);
        comptaLinia++;

        if (comptaLinia == amplada || i == 99) {
            printf("\n");
            comptaLinia = 0;
        } else {
            printf(",");
        }
    }

    acabament();
    return 0;
}
