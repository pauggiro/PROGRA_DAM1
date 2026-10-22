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

    float fahrenheit;
    float celsius;

    printf("Introdueix la temperatura en Fahrenheit: ");
    scanf("%f", &fahrenheit);
    while (getchar() != '\n');

    celsius = (5.0f / 9.0f) * (fahrenheit - 32.0f);

    printf("La temperatura en Celsius és: %.2f\n", celsius);

    acabament();
    return 0;
}