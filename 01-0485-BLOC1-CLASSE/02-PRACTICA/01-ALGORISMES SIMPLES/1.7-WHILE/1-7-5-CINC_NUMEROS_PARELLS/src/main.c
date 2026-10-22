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

    int numParells = 0;
    int num;

    while (numParells < 5) {
        printf("Introdueix un numero: ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            numParells++;
            switch (numParells) {
                case 1:
                    printf("Primer numero parell introduit: %d\n", num);
                    break;
                case 2:
                    printf("Segon numero parell introduit: %d\n", num);
                    break;
                case 3:
                    printf("Tercer numero parell introduit: %d\n", num);
                    break;
                case 4:
                    printf("Quart numero parell introduit: %d\n", num);
                    break;
                case 5:
                    printf("Cinque numero parell introduit: %d\n", num);
                    break;
            }
        }
    }

    printf("S’han introduit els cinc números parells\n");

    acabament();
    return 0;
}
