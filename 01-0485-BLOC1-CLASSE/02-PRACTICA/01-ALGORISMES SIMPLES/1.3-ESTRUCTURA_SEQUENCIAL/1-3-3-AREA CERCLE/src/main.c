#include <stdio.h>
#include <stdlib.h>
#include <time.h>  
#include <windows.h>
#include <string.h>
#include <stdbool.h>

#define _USE_MATH_DEFINES
#include <math.h>

#include "rlutil.h"
#include "llibreriaPropia.h"
#include "llibreriaExercici.h"

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    srand(time(NULL));
    
    float radi, area;

    printf("Introdueix el radi del cercle: ");
    scanf("%f", &radi);
    while (getchar() != '\n');

    area = M_PI * radi * radi;

    printf("L'area del cercle és: %.2f\n", area);

    acabament();
    return 0;
}