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
	
	int num1, num2;

	printf("Introdueix el primer numero: ");
	scanf("%d", &num1);
	while(getchar() != '\n');

	printf("Introdueix el segon numero: ");
	scanf("%d", &num2);
	while(getchar() != '\n');

	if(num1 > num2)
	{
		printf("El valor maxim es %d\n", num1);
	}
	else if(num2 > num1)
	{
		printf("El valor maxim es %d\n", num2);
	}
	else
	{
		printf("Els dos numeros son iguals: %d\n", num1);
	}
	acabament();
	return 0;
}
