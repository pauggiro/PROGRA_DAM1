#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#include <stdbool.h>
#include "rlutil.h"
#include "llibreriaPropia.h"
#include "llibreriaExercici.h"

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	srand(time(NULL));

	char altreSoci;

	do
	{
		cls();

		int edat, pes, minutsEscalfament, repeticions;
		int numSerieActual = 1, seriesValides = 0, totalRepeticions = 0;
		int maxRep = 0, minRep = 0, errorsConsecutius = 0;
		char nivell;
		float factorNivell, factorCalories, mitjanaRep = 0.0, calories = 0.0;

		printf("CONFIGURACIO EDAT PES NIVELL ENTRENAMENT\n");

		do
		{
			printf("Introdueix la teva edat [16..80]: ");
			scanf("%d", &edat);

			if (edat < 16 || edat > 80)
			{
				setColor(RED);
				printf("Error: l'edat ha de ser entre 16 i 80 anys.\n");
				setColor(GREY);
			}
		} while (edat < 16 || edat > 80);

		setColor(GREEN);
		printf("--> Edat acceptada\n");
		setColor(GREY);

		do
		{
			printf("Introdueix el teu pes [30..200]: ");
			scanf("%d", &pes);

			if (pes < 30 || pes > 200)
			{
				setColor(RED);
				printf("Error: el pes ha de ser entre 30 i 200 pes.\n");
				setColor(GREY);
			}
		} while (pes < 30 || pes > 200);

		setColor(GREEN);
		printf("--> Pes acceptat\n");
		setColor(GREY);

		do
		{
			printf("Introdueix el nivell d'entrenament: B (Basic), M (Mitja) o A (Avançat): ");
			scanf(" %c", &nivell);

			if (nivell == 'b')
				nivell = 'B';
			if (nivell == 'm')
				nivell = 'M';
			if (nivell == 'a')
				nivell = 'A';

			if (nivell != 'B' && nivell != 'M' && nivell != 'A')
			{
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
		printf("\n\n");

		if (nivell == 'B')
		{
			minutsEscalfament = 5;
			factorNivell = 0.60;
			factorCalories = pes * 0.05;
		}
		else if (nivell == 'M')
		{
			minutsEscalfament = 8;
			factorNivell = 0.75;
			factorCalories = pes * 0.08;
		}
		else
		{
			minutsEscalfament = 12;
			factorNivell = 0.90;
			factorCalories = pes * 0.12;
		}

		printf("PROCES D'ESCALFAMENT:\n");
		for (int i = minutsEscalfament; i >= 1; i--)
		{
			printf("%d", i);
			if (i > 1)
			{
				printf("-");
			}
			fflush(stdout);
			Sleep(1000);
		}

		setColor(GREEN);
		printf("\n--> Escalfament completat!\n");
		setColor(GREY);

		printf("\nPrem una tecla per continuar");
		getch();
		printf("\n\n");

		printf("PULSACIONS PER A CADA MINUT\n");
		for (int minutActual = 1; minutActual <= minutsEscalfament; minutActual++)
		{
			float pulsacionsMax = (220.0 - edat) * factorNivell / (minutsEscalfament - minutActual + 1.0);
			printf("Minut %02d: pulsacions max=(220-%d)*%.2f/(%d-%d+1) = %.2f ppm\n", minutActual, edat, factorNivell, minutsEscalfament, minutActual, pulsacionsMax);
		}

		printf("\nPrem una tecla per continuar");
		getch();
		printf("\n\n");

		printf("SERIES D'ENTRENAMENT:\n");
		printf("Series d'entrenament (0 per acabar):\n");

		do
		{
			printf("Repeticions serie %d: ", numSerieActual);
			scanf("%d", &repeticions);

			if (repeticions == 0)
			{
				printf("--> Fi del registre\n");
				break;
			}

			if (repeticions < 0)
			{
				errorsConsecutius++;
				setColor(RED);
				printf("=> Error: valor no valid. No comptada. (%d invalida consec.)\n", errorsConsecutius);
				setColor(GREY);
			}
			else if (repeticions > 50)
			{
				errorsConsecutius++;
				setColor(RED);
				printf("=> Error: maxim. No comptada. (%d invalida consec.)\n", errorsConsecutius);
				setColor(GREY);
			}
			else
			{
				seriesValides++;
				totalRepeticions += repeticions;

				if (seriesValides == 1)
				{
					maxRep = repeticions;
					minRep = repeticions;
					setColor(GREEN);
					printf("=> Serie valida\n");
					setColor(GREY);
				}
				else
				{
					if (repeticions > maxRep)
						maxRep = repeticions;
					if (repeticions < minRep)
						minRep = repeticions;

					if (errorsConsecutius > 0)
					{
						setColor(GREEN);
						printf("=> Serie valida. Reset comptador invalidades\n");
						setColor(GREY);
					}
					else
					{
						setColor(GREEN);
						printf("=> Serie valida\n");
						setColor(GREY);
					}
				}

				errorsConsecutius = 0;
				numSerieActual++;
			}

			if (errorsConsecutius == 3)
			{
				setColor(RED);
				printf("Massa errors consecutius. Fi del registre\n");
				setColor(GREY);
				break;
			}

		} while (1);

		printf("\nPrem una tecla per continuar");
		getch();
		printf("\n\n");

		printf("RESUM ENTRENAMENT:\n");
		if (seriesValides == 0)
		{
			printf("Series valides 0 | Total repeticions: 0\n\n");
		}
		else
		{
			printf("Series valides %d | Total repeticions: %d\n", seriesValides, totalRepeticions);
			printf("Maxim d'una serie: %d rep | Minim d'una serie: %d rep\n\n", maxRep, minRep);
		}

		printf("ESTADISTIQUES:\n");
		if (seriesValides == 0)
		{
			printf("Cap sèrie registrada. Torna demà amb més energia!\n\n");
		}
		else
		{
			mitjanaRep = (float)totalRepeticions / seriesValides;
			calories = totalRepeticions * factorCalories;

			printf("Mitjana: %.2f rep/serie\n", mitjanaRep);
			printf("Calories: %.2f kcal\n", calories);
			printf("Diferencia max-min: %d - %d = %d rep\n", maxRep, minRep, maxRep - minRep);

			if (seriesValides == 1 || seriesValides == 2)
			{
				printf("Sessió curta. Intenta fer almenys 3 series la propera vegada.\n");
			}
			else if (seriesValides >= 3 && seriesValides <= 5)
			{
				printf("Bona sessió! Segueix així.\n");
			}
			else
			{
				printf("Sessió excel·lent! Rendiment molt alt.\n");
			}

			printf("\nCALORIES CREMADES ACUMULADES EN CADA UNA DE LES SERIES:\n");
			for (int s = 1; s <= seriesValides; s++)
			{
				float calAcum = s * mitjanaRep * factorCalories;
				printf("Serie %d: %d*%.2f*%.2f = %.2f kcal acumulades\n", s, s, mitjanaRep, factorCalories, calAcum);
			}
			printf("\n");
		}

		do
		{
			printf("Hi ha un altre soci? (S/N): ");
			scanf(" %c", &altreSoci);

			if (altreSoci == 's')
				altreSoci = 'S';
			if (altreSoci == 'n')
				altreSoci = 'N';

			if (altreSoci != 'S' && altreSoci != 'N')
			{
				setColor(RED);
				printf("--> Resposta no valida.\n");
				setColor(GREY);
			}
		} while (altreSoci != 'S' && altreSoci != 'N');

	} while (altreSoci == 'S');

	printf("\nFi de la sessió. Fins aviat\n");

	acabament();
	return 0;
}