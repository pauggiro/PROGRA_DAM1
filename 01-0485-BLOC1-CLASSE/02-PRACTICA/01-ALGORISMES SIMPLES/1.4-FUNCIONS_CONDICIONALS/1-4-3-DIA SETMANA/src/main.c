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
	
	if (dia == 1)
	{
		printf("El dia %d és Dilluns\n", dia);
	}
	else if (dia == 2)
	{
		printf("El dia %d és Dimarts\n", dia);
	}
	else if (dia == 3)
	{
		printf("El dia %d és Dimecres\n", dia);
	}
	else if (dia == 4)
	{
		printf("El dia %d és Dijous\n", dia);
	}
	else if (dia == 5)
	{
		printf("El dia %d és Divendres\n", dia);
	}
	else if (dia == 6)
	{
		printf("El dia %d és Disabte\n", dia);
	}
	else if (dia == 7)
	{
		printf("El dia %d és Diumnege\n", dia);
	}
	else
	{
		printf("Aquest dia no és de la setmana");
	}
	acabament();
	return 0;
}