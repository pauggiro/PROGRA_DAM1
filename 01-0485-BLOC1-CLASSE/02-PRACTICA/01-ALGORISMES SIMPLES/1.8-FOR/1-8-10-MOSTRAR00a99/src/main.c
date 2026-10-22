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

    for (int i = 0; i < 100; i++) {
        printf("%2d", i);
        if (i % 10 == 9) {
            printf("\n");
        } else {
            printf(",");
        }
    }

    acabament();
    return 0;
}
