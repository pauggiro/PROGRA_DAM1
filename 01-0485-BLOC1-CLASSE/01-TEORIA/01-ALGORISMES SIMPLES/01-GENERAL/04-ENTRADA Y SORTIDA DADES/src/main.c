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
	
	int edat;
	float numero;
	char homedona;

	printf("Introdueix la teva edat: ");
	scanf("%d",&edat);
	while (getchar()!='\n');
	printf("La teva edat és %d", edat);

	printf("\nIntrodueix un número decimal: ");
	scanf("%f,", &numero);
	while (getchar()!='\n');
	printf("\nLa teva edat és %d i el teu número és %.2f",edat,numero);

	printf("\nIntrodueix el teu sexe (H, D): ");
	scanf("%c", &homedona);
	while (getchar()!='\n');
	printf("\nLa teva edat és %d, el teu numero és %.2f i el teu sexe és %c",edat,numero,homedona);

	acabament();
	return 0;
}
