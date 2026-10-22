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
	
	int producto;
	const float precio_lavadora = 59.99;
	const float precio_spray = 17.99;
	const float precio_iphone = 1299.99;
	float precio_actual = 0.00;
	float dinero_entregado = 0.00;
	float falta = 0.00;
	float cambio = 0.00;

	printf("\n------------------------------------------------------\n");
	printf("				BIENVENIDO/A A MI TIENDA				\n");
	printf("\n------------------------------------------------------\n");
	printf("Escoje un producto (Labadora(1), spray(2), iphone(3)): ");
	scanf("%d", &producto);

	switch (producto)
	{
	case 1:
		precio_actual = precio_lavadora;
		printf("\n Has elegido la lavadora.\n");
		break;
	case 2:
		precio_actual = precio_spray;
		printf("\n Has elegido el spray.\n");
		break;
	case 3:
		precio_actual = precio_iphone;
		printf("\n Has elegido el iphone.\n");
		break;
	
	default:
		printf("\nEl producto seleccionado no es válido!\n");

		acabament();
		return 0;
		break;
	}

	falta = precio_actual;

	while (falta > 0.001)

	acabament();
	return 0;
}
