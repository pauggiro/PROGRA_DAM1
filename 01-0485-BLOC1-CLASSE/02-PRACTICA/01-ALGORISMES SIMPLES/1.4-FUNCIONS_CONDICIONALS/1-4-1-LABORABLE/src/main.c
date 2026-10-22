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
	
	int dia;

	printf("Escriu un numero que representi un dia de la setamana(1-7): ");
	scanf("%d", &dia);
	while (getchar() != '\n');
	
	if (dia > 0 && dia <=7)
	{
		if (dia >= 1 && dia <=5)
		{
			printf("El dia %d és laborable\n", dia);
		}
		else
		{
			printf("El dia %d no és laborable\n", dia);
		}
	}
	else
	{
		setColor(RED);
		printf("Aquest numero no és de la setmana");
	}
	acabament();
	return 0;
}
