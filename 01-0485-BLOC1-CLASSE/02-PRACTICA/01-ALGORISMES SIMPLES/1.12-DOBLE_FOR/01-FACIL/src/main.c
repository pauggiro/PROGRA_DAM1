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

	
	for (int i = 0; i <3; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			printf("%d", j);
		}
	printf("\n");
	}
	
	

	acabament();
	return 0;
}
