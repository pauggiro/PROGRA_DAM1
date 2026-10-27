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
	
	int a, b , resultado;

	for (a = 1; a < 11; a++)
        {
            printf("TAULA %d\n", a);
            for (b = 1; b < 11; b++)
            {
                resultado= a * b ;
                printf(" %2d X %2d = %2d\n",a,b,resultado);
            }
 
            getchar();
        }
	

	acabament();
	return 0;
}
