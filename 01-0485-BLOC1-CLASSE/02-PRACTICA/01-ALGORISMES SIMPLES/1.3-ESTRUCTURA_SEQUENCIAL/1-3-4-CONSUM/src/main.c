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

    float km, litres;
    float consum;

    printf("Kilòmetres recorreguts: ");
    scanf("%f", &km);
    while (getchar() != '\n');

    printf("Litres de combustible gastats: ");
    scanf("%f", &litres);
    while (getchar() != '\n');

    consum = litres / km;

    printf("El consum per kilòmetre és de %.3f\n", consum);

    acabament();
    return 0;
}