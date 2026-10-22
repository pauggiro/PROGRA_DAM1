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

    int f_ant2 = 0;
    int f_ant1 = 1;
    int f_act;

    printf("[0]:%d\n", f_ant2);
    printf("[1]:%d\n", f_ant1);

    for (int i = 2; i <= 7; i++) {
        f_act = f_ant1 + f_ant2;
        printf("[%d]:%d\n", i, f_act);
        f_ant2 = f_ant1;
        f_ant1 = f_act;
    }

    acabament();
    return 0;
}
