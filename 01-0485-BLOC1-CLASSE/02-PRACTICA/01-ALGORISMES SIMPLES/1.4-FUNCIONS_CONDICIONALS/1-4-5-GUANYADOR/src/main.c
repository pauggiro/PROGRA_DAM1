#include <stdio.h>
#include <stdlib.h>
#include <time.h>  
#include <windows.h>
#include <string.h>
#include <stdbool.h>
#include "rlutil.h"
#include "llibreriaPropia.h"
#include "llibreriaExercici.h"

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    srand(time(NULL));

    int golsA, golsB;

    printf("Introdueix els gols dels dos equips (ex: 4 3): ");
    scanf("%d %d", &golsA, &golsB);
    while (getchar() != '\n');

    // Validació que cap dels dos equips tingui gols negatius
    if (golsA < 0 || golsB < 0) {
        printf("Error: Els gols introduïts no són vàlids (han de ser >= 0).\n");
    } else if (golsA > golsB) {
        printf("Ha guanyat el primer equip.\n");
    } else if (golsB > golsA) {
        printf("Ha guanyat el segon equip.\n");
    } else {
        printf("Han empatat els dos equips.\n");
    }

    acabament();
    return 0;
	}