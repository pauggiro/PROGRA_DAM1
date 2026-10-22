#include <stdio.h>
#include <stdlib.h>
#include <time.h>  
#include <windows.h>
#include <string.h>
#include <stdbool.h>
#include "rlutil.h"
#include "llibreriaPropia.h"
#include "llibreriaExercici.h"

int main() {
    int numero;
    int suma = 0;

    do {
        printf("Introdueix el numero: ");
        scanf("%d", &numero);
    } while (numero <= 0);
	printf("Procediment: \n");
	printf("suma = %d\n", suma);
	



    for (int i = 1; i <= numero; i++) {
        printf("i= %02d suma = %02d + %02d = %02d;\n",i, suma, i, suma + i );
		suma = suma + i;
		
    }

	acabament();
    return 0;
}