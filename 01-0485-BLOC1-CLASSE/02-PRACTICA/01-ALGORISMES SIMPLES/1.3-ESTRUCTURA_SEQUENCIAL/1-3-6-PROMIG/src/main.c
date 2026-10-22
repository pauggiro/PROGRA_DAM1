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

    float n1, n2, n3;
    float promig;

    printf("Primer número: ");
    scanf("%f", &n1);
    while (getchar() != '\n');

    printf("Segon número: ");
    scanf("%f", &n2);
    while (getchar() != '\n');

    printf("Tercer número: ");
    scanf("%f", &n3);
    while (getchar() != '\n');

    promig = (n1 + n2 + n3) / 3.0f;

    printf("El promig dels tres números es %.1f\n", promig);

    acabament();
    return 0;
}