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

    int edat, pes, minutsEscalfament;
    char nivell;
    float factorNivell;

    printf("CONFIGURACIO EDAT PES NIVELL ENTRENAMENT\n");

    do {
        printf("Introdueix la teva edat [16..80]: ");
        scanf("%d", &edat);

        if (edat < 16 || edat > 80) {
            setColor(RED);
            printf("Error: l'edat ha de ser entre 16 i 80 anys.\n");
            setColor(GREY);
        }
    } while (edat < 16 || edat > 80);

    setColor(GREEN);
    printf("--> Edat acceptada\n");
    setColor(GREY);

    do {
        printf("Introdueix el teu pes [30..200]: ");
        scanf("%d", &pes);

        if (pes < 30 || pes > 200) {
            setColor(RED);
            printf("Error: el pes ha de ser entre 30 i 200 pes.\n");
            setColor(GREY);
        }
    } while (pes < 30 || pes > 200);

    setColor(GREEN);
    printf("--> Pes acceptat\n");
    setColor(GREY);

    do {
        printf("Introdueix el nivell d'entrenament: B (Basic), M (Mitja) o A (Avançat): ");
        scanf(" %c", &nivell);

        if (nivell == 'b') nivell = 'B';
        if (nivell == 'm') nivell = 'M';
        if (nivell == 'a') nivell = 'A';

        if (nivell != 'B' && nivell != 'M' && nivell != 'A') {
            setColor(RED);
            printf("Error: nivell no valid.\n");
            setColor(GREY);
        }
    } while (nivell != 'B' && nivell != 'M' && nivell != 'A');

    setColor(GREEN);
    printf("--> Nivell acceptat\n");
    setColor(GREY);

    printf("\nPrem una tecla per continuar");
    getch();

    if (nivell == 'B') {
        minutsEscalfament = 5;
        factorNivell = 0.60;
    } else if (nivell == 'M') {
        minutsEscalfament = 8;
        factorNivell = 0.75;
    } else {
        minutsEscalfament = 12;
        factorNivell = 0.90;
    }

    printf("PROCES D'ESCALFAMENT:\n");
    for (int i = minutsEscalfament; i >= 1; i--) {
        printf("%d", i);
        if (i > 1) {
            printf("-");
        }
        fflush(stdout);
        Sleep(1000);
    }

    setColor(GREEN);
    printf("\n--> Escalfament completat!\n");
    setColor(GREY);

    printf("\nPrem una tecla per continuar");

    printf("PULSACIONS PER A CADA MINUT\n");
    for (int minutActual = 1; minutActual <= minutsEscalfament; minutActual++) {
        float pulsacionsMax = (220.0 - edat) * factorNivell / (minutsEscalfament - minutActual + 1.0);
        printf("Minut %02d: pulsacions max=(220-%d)*%.2f/(%d-%d+1) = %.2f ppm\n",minutActual, edat, factorNivell, minutsEscalfament, minutActual, pulsacionsMax);
    }
	
    printf("\nPrem una tecla per continuar");

	

    acabament();
    return 0;
}