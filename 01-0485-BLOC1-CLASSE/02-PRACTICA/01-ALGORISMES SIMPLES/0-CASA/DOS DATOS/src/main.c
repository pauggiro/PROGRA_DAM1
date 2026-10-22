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
	
	int num1, num2, suma, resta, multiplicacion;



	printf("Escriu el numero 1: ");
	scanf("%d", &num1);

	printf("Escriu el numero 2: ");
	scanf("%d", &num2);

	suma = num1 + num2;
	resta = num1 - num2;
	multiplicacion = num1 * num2;

	printf("SUMA: %d, RESTA: %d, MULTIPLICACIÓN: %d.", suma, resta, multiplicacion);


	acabament();
	return 0;
}
