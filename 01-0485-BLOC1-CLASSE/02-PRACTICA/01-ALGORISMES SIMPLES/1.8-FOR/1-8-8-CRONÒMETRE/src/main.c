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

    int minuts, segons;

    do {
        printf("Quants minuts vols (0-3): ");
        scanf("%d", &minuts);
    } while (minuts < 0 || minuts > 3);

    do {
        printf("Quants segons vols (0-59): ");
        scanf("%d", &segons);
    } while (segons < 0 || segons > 59);

    int totalSegons = minuts * 60 + segons;

    for (int t = totalSegons; t >= 0; t--) {
        int m = t / 60;
        int s = t % 60;
        cls();
        printf("%d:%02d\n", m, s);
        if (t > 0) {
            Sleep(1000);
        }
    }

    acabament();
    return 0;
}