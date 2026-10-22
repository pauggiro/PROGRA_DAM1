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
	
	int mes;
	int dia;

	printf("Introdueix un mes:");
	scanf("%d", &mes);
	while (getchar()!='\n');

	if (mes < 1 || mes > 12)
	{
		printf("Mes no valid");
	}
	else
	{
		printf("Ara el dia:");
		scanf("%d", &dia);
		while (getchar()!='\n');

		if (dia > 31 || dia < 1)
		{
			printf("Aquest dia no es valid");
		}
		else if (mes == 4 || mes == 6 || mes == 9 || mes == 11 && dia >= 31)
		{
			printf("No es posible");
		}
		else if (mes == 2 && dia >= 29)
		{
			printf("No es posible");
		}
		else
		{
			if (mes <= 3 && dia <= 20)
			{
				printf("Es ivern");
			}
			else if (mes <= 6 && dia <= 20)
			{
				printf("Es primavera");
			}
			else if (mes <= 9 && dia <= 20)
			{
				printf("Es histiu");
			}
			else if (mes <= 12 && dia <= 20)
			{
				printf("Es tardó");
			}
			else
			{
				printf("Es ivern");
			}
		}
	}
	acabament();
	return 0;
}