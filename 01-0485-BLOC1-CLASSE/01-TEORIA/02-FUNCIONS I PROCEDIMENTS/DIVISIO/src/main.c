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
	
	float a, b, divisio;

    printf("Introdueix el numerador: ");
    scanf("%f", &a);
    while (getchar() != '\n');

    printf("Introdueix el divisor: ");
    scanf("%f", &b);
    while (getchar() != '\n');

    if (b == 0)
    {
        printf("\nEl valor del divisor no pot ser zero");
    }
    else
    {
        divisio = a / b;
        printf("\nEl resultat de la divisio es %.2f", divisio);
    }

    acabament();
    return 0;
}
