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

    int minuts;

    printf("Quants minuts vols visualitzar? ");
    scanf("%d", &minuts);

    for (int m = 0; m <= minuts; m++) {
        for (int s = 0; s < 60; s++) {
            cls();
            printf("%d:%d\n", m, s);
            if (m == minuts && s == 0) {
                break;
            }
            Sleep(1000);
            if (m == minuts) {
                break;
            }
        }
    }

    acabament();
    return 0;
}
