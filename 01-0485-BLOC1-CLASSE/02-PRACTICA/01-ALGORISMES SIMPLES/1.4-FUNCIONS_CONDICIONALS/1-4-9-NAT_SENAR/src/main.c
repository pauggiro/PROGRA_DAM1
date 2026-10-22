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

    int num;

    printf("Introdueix un nombre: ");
    scanf("%d", &num);
    while (getchar() != '\n');

    if (num < 0) {
        printf("Dades inicials incorrectes\n");
    } else if (num % 2 != 0) {
        printf("El número %d és senar\n", num);
    } else {
        printf("El número %d no és senar\n", num);
    }

    acabament();
    return 0;
}
