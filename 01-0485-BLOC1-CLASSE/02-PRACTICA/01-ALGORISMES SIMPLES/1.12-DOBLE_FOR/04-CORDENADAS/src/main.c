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
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    srand(time(NULL));
    
    int valor;

    do {
        printf("Escriu un valor entre 1 i 20: ");
        scanf("%d", &valor);

        if (valor < 1 || valor > 20) {
            printf("Valor incorrecte! Torna a intentar-ho.\n");
        }
    } while (valor < 1 || valor > 20);

    cls();

    for (int fila = 1; fila <= 20; fila++) {
        char lletra = 'a' + (fila - 1);

        if (fila % 2 != 0) {
            int inici = 1;
            if (fila == 1) {
                inici = valor;
            }

            for (int col = inici; col <= 20; col++) {
                gotoxy(col, fila);
                printf("%c", lletra);
                Sleep(50);
            }
        } else {
            for (int col = 20; col >= 1; col--) {
                gotoxy(col, fila);
                printf("%c", lletra);
                Sleep(50);
            }
        }
    }

    gotoxy(1, 22);
    acabament();
    return 0;
}