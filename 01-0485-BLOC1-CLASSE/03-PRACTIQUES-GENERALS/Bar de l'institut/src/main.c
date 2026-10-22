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
	
	int entrepa, alumne, dia;
	float preu_entrepa;
	float preu_beguda;

	printf("Escull un entrepà (Pernil (1), Formatge (2) Truita (3) ): ");
	scanf("%d", entrepa);

	if(entrepa <1 || entrepa >3){
		setColor(RED);
		printf("Error: L'entrepà que has escollit, no és vaild.\n");
		setColor(WHITE);

		acabament;
		return 0;
	}
	else if(entrepa == 1) printf("El preu de l'entrepà de Pernil és de: %3.50f EUR\n", preu_entrepa);
	else if(entrepa == 2) printf("El preu de l'entrepà de Formatgeés de: %3.00f EUR\n", preu_entrepa);
	else if(entrepa == 3) printf("El preu de l'entrepà de Truita és de: %2.80f EUR\n", preu_entrepa);

	Printf("És alumne?(0=No | 1=Si): ");
	scanf("%d", alumne);

	if(alumne <0 || alumne >1){
		Setcolor(RED);
		printf("Error: Numero incorrecte\n");
		setColor(WHITE);

		acabament;
		return 0;
	}
	else if(alumne == 0) printf("No hi ha descompte\n");
	else if(alumne == 1) printf("S'aplica un descompte del 10% per ser estudiant!\n");

	printf("Selecciona el dia de la setmana(1=Dilluns, 2=Dimarts, 3=Dimecres, 4=Dijous...5,6,7): ");
	scanf("%d", dia);

	if(dia <1 || dia >7){
		setcolor(RED);
		printf("El dia seleccionat és incorrecte");
		setcolor(WHITE);

		acabament;
		return 0;
	}
	else if(dia == 5){
		printf("Avui és divendres i el suc està a %0.0f!", preu_beguda);
	}
	else{
		printf("Avui la beguda es cobra a %1.20f", preu_beguda);
	}

	float total = preu_beguda + preu_entrepa;


	acabament();
	return 0;
}
