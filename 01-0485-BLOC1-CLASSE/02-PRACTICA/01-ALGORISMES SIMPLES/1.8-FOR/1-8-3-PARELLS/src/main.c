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

    int num;

    do {
        printf("Introdueix el darrer numero: ");
        scanf("%d", &num);
    } while (num < 0);

    printf("Resultat:");
    for (int i = 0; i <= num; i += 2) {
        printf(" %d", i);
    }
    printf("\n");

    acabament();
    return 0;
}
