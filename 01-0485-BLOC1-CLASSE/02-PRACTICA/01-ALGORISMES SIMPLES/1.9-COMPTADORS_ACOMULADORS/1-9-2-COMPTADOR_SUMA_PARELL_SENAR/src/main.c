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

    int totalParells = 0;
    int sumaParells = 0;
    int totalSenars = 0;
    int sumaSenars = 0;
    int num;

    for (int i = 1; i <= 10; i++) {
        printf("Introdueix el numero (%d):", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            totalParells++;
            sumaParells += num;
        } else {
            totalSenars++;
            sumaSenars += num;
        }
    }

    printf("Total de numeros parells %d\n", totalParells);
    printf("Suma dels numeros parells %d\n", sumaParells);
    printf("Total de numeros senars %d\n", totalSenars);
    printf("Suma de numeros senars %d\n", sumaSenars);

    acabament();
    return 0;
}
