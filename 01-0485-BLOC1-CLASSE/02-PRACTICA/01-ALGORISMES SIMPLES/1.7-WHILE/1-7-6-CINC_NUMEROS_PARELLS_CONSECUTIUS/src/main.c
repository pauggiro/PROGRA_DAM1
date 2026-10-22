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

    int consecutius = 0;
    int num;

    while (consecutius < 5) {
        printf("Introdueix un numero: ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            consecutius++;
        } else {
            consecutius = 0;
        }
    }

    printf("S’han introduit els cinc números parells consecutivament\n");

    acabament();
    return 0;
}
