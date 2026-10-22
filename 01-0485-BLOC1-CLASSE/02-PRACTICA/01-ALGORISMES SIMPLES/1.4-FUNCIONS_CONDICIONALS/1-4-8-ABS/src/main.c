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

	int numero;

	printf("Introdueix un nombre enter: ");
	scanf("%d", &numero);

	printf("El valor absolut del nombre %d es %d\n", numero, valorAbsolut(numero));

	acabament();
	return 0;
}
