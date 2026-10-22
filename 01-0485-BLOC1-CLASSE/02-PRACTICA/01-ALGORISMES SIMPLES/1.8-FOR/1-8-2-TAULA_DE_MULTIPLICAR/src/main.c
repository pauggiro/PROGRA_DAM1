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

    int taula;

    printf("Introdueix la taula: ");
    scanf("%d", &taula);

    for (int i = 0; i <= 10; i++) {
        printf("%d X %d = %2d\n", taula, i, taula * i);
    }

    acabament();
    return 0;
}
