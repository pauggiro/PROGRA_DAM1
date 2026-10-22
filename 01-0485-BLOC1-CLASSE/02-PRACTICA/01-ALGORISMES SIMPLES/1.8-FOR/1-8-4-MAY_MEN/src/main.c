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

    char op;
    int num1, num2;

    printf("Caràcter: ");
    scanf(" %c", &op);

    printf("Primer número: ");
    scanf("%d", &num1);

    printf("Segon Número: ");
    scanf("%d", &num2);

    int min = (num1 < num2) ? num1 : num2;
    int max = (num1 > num2) ? num1 : num2;

    if (op == '>') {
        printf("Resultat:");
        for (int i = min; i <= max; i++) {
            printf(" %d", i);
        }
        printf("\n");
    } else if (op == '<') {
        printf("Resultat:");
        for (int i = max; i >= min; i--) {
            printf(" %d", i);
        }
        printf("\n");
    } else {
        printf("Caràcter incorrecte\n");
    }

    acabament();
    return 0;
}
