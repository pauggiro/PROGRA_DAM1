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

    int edat, alçada, dia, opcio_menu;
    float preu_base, preu_entrada, modificador, preu_menu = 0.00f;

    printf("Introdueix la edat: ");
    scanf("%d", &edat);

    if (edat < 0 || edat > 125)
    {
        setColor(RED);
        printf("L'edat és imposible");

        setColor(WHITE);
        acabament();
        return 0;
    }

    printf("Introdueix l'alçada (cm): ");
    scanf("%d", &alçada);

    if (alçada <= 50 || alçada >= 250)
    {
        setColor(RED);
        printf("L'alçada és imposible\n");

        setColor(WHITE);
        acabament();
        return 0;
    }

    printf("Introdueix el dia de la setmana (un número de l'1 al 7, on 1 = dilluns i 7 = diumenge): ");
    scanf("%d", &dia);

    if (dia <= 0 || dia >= 8)
    {
        setColor(RED);
        printf("El dia és imposible\n");

        setColor(WHITE);
        acabament();
        return 0;
    }

    if (dia == 1)
    {
        setColor(GREEN);
        printf("Els camps son valids! Estas a dilluns i és un dia entre setmana\n");
    }
    else if (dia == 2)
    {
        setColor(GREEN);
        printf("Els camps son valids! Estas a dimarts i és un dia entre setmana\n");
    }
    else if (dia == 3)
    {
        setColor(GREEN);
        printf("Els camps son valids! Estas a dimecres i és un dia entre setmana\n");
    }
    else if (dia == 4)
    {
        setColor(GREEN);
        printf("Els camps son valids! Estas a dijous i és un dia entre setmana\n");
    }
    else if (dia == 5)
    {
        setColor(GREEN);
        printf("Els camps son valids! Estas a divendres i és un dia entre setmana\n");
    }
    else if (dia == 6)
    {
        setColor(GREEN);
        printf("Els camps son valids! Estas a dissabte i és cap de setmana\n");
    }
    else if (dia == 7)
    {
        setColor(GREEN);
        printf("Els camps son valids! Estas a diumenge i és cap de setmana\n");
    }

    if (edat <= 3)
    {
        preu_base = 0.0f;
        preu_entrada = 0.0f;
        printf("=> Entrada gratuïta (bebè). Preu entrada: %.2f EUR\n", preu_entrada);
    }
    else
    {
        if (edat >= 4 && edat <= 12)
        {
            preu_base = 8.50f;
            printf("Preu base infantil: %.2f EUR\n", preu_base);
        }
        else if (edat >= 13 && edat <= 17)
        {
            preu_base = 12.00f;
            printf("Preu base jove: %.2f EUR\n", preu_base);
        }
        else if (edat >= 18 && edat <= 64)
        {
            preu_base = 18.00f;
            printf("Preu base adult: %2.f EUR\n", preu_base);
        }
        else if (edat >= 65)
        {
            preu_base = 10.00f;
            printf("Preu base sènior: %.2f EUR\n", preu_base);
        }
    }

    if (dia == 3)
    {
        modificador = preu_base * 0.20f;
        preu_entrada = preu_base - modificador;
        printf("Dimecres descompte 20%% = -%.2f EUR\n", modificador);
    }
    else if (dia == 6 || dia == 7)
    {
        modificador = preu_base * 0.25f;
        preu_entrada = preu_base + modificador;
        printf("Cap de setmana +25%% +%.2f EUR\n", modificador);
    }
    else
    {
        preu_entrada = preu_base;
    }
    printf("=> Preu entrada: %.2f EUR\n", preu_entrada);

    // 1 La Montanya Russa -120cm
    if (alçada >= 120)
    {
        setColor(GREEN);
        printf("La Muntanya Rusa (>=120cm): Pot pujar\n");
        setColor(WHITE);
    }
    else
    {
        setcolor(RED);
        printf("La Muntanya Rusa (>=120cm): No pot pujar, alçada insuficient\n");
        setColor(WHITE);
    }

    // 2 El Tobogan Gegant -100
    if (alçada >= 100)
    {
        setColor(GREEN);
        printf("El Tobogan Gegant (>=100cm): Pot pujar\n");
        setColor(WHITE);
    }
    else
    {
        setcolor(RED);
        printf("El Tobogant Gegant (>=100cm): No pot pujar, alçada insuficient\n");
        setColor(WHITE);
    }
    // 3 El Pirata -140 +7
    if (alçada < 140 && edat < 7)
    {
        setColor(GREEN);
        printf("El Pirata (>=140cm i +7anys): No pot pujar, alçada i edat insuficient\n");
        setColor(WHITE);
    }
    else if (alçada < 140)
    {
        setcolor(RED);
        printf("El Pirata (>=140cm i +7anys): No pot pujar, alçada insuficient\n");
        setColor(WHITE);
    }
    else if (edat < 7)
    {
        setcolor(RED);
        printf("El Pirata (>=140cm i +7anys): No pot pujar, edat insuficient\n");
        setColor(WHITE);
    }
    else
    {
        Setcolor(GREEN);
        printf("El Pirata (>=140cm i +7anys): Pot pujar\n");
        Setcolor(WHITE);
    }
    // 4 La Caiguda Lliure - 150cm +14
    if (alçada < 150 && edat < 14)
    {
        setColor(GREEN);
        printf("La Caiguda Lliure (>=150cm i >14anys): No pot pujar, alçada i edat insuficient\n");
        setColor(WHITE);
    }
    else if (alçada < 140)
    {
        setcolor(RED);
        printf("La Caiguda Lliure (>=150cm i >14anys): No pot pujar, alçada insuficient\n");
        setColor(WHITE);
    }
    else if (edat < 7)
    {
        setcolor(RED);
        printf("La Caiguda Lliure (>=150cm i >14anys): No pot pujar, edat insuficient\n");
        setColor(WHITE);
    }
    else
    {
        Setcolor(GREEN);
        printf("La Caiguda Lliure (>=150cm i >14anys): Pot pujar\n");
        Setcolor(WHITE);
    }

    printf("\n===Esull el menú===\n");
    printf("1. Menú Infantil (6.50 EUR)\n");
    printf("2. Menú Clàssic (10.00 EUR)\n");
    printf("3. Menú Premium (14.00 EUR)\n");
    printf("4. Sense menjar (0.00 EUR)\n");
    printf("Tria una opció  (1-4): ");
    scanf("%d", &opcio_menu);

    if (opcio_menu < 1 || opcio_menu > 4)
    {
        printf("Opció de menú invalida. Fi del programa\n");

        acabament;
        return 0;
    }

    if (edat <= 3)
    {
        preu_menu = 0.0f;
        printf("Bebè: menjar gratuid. Preu menú: %.2f EUR\n", preu_menu);
    }
    else
    {
        if (opcio_menu == 1)
        {
            preu_menu = 8.50f;
            printf("Menú Infantil: %.2f EUR\n", preu_menu);
        }
        else if (opcio_menu == 2)
        {
            preu_menu = 10.00f;
            printf("Menú Classic: %.2f EUR\n", preu_menu);
        }
        else if (opcio_menu == 3)
        {
            preu_menu = 14.00f;
            printf("Menú Premium: %.2f EUR\n", preu_menu);
        }
        else if (opcio_menu == 4)
        {
            preu_menu = 0.00f;
            printf("Sense menjar: %.2f EUR\n", preu_menu);
        }
    }

    float total = preu_entrada + preu_menu;
    float import_pagat = 0.0f, canvi = 0.0f;

    printf("\nEl total a pagar és: %2.f EUR\n", total);
    printf("Introdueix l'import pagat pel client: ");
    scanf("%f", &import_pagat);
if (import_pagat < total)
    {
        setColor(RED);
        printf("\nImport insuficient, falta: %.2f EUR\n", total - import_pagat);
        setColor(WHITE);
    }
    else if (import_pagat == total)
    {
        setColor(GREEN);
        printf("\nPagament exacte. Gracies!\n");
        setColor(WHITE);
    }
    else
    {
        setColor(GREEN);
        printf("\nCanvi a retornar: %.2f EUR\n", import_pagat - total);
        setColor(WHITE);
    }

    // 2. Impressió del tiquet
    printf("\n==================================================\n");
    printf("  PARC D'ATRACCIONS MEGAFUN\n");
    printf("  TIQUET DE VISITA\n");
    printf("==================================================\n");

    // Dia de la setmana
    printf("Dia: ");
    if (dia == 1) printf("dilluns");
    else if (dia == 2) printf("dimarts");
    else if (dia == 3) printf("dimecres");
    else if (dia == 4) printf("dijous");
    else if (dia == 5) printf("divendres");
    else if (dia == 6) printf("dissabte");
    else if (dia == 7) printf("diumenge");

    if (dia >= 1 && dia <= 5)
    {
        printf(" (laborable)\n");
    }
    else
    {
        printf(" (cap de setmana)\n");
    }

    // Dades del visitant
    printf("Visitant: ");
    if (edat <= 3) printf("Bebe");
    else if (edat <= 12) printf("Infantil");
    else if (edat <= 17) printf("Jove");
    else if (edat <= 64) printf("Adult");
    else printf("Senior");

    printf(" | Edat: %d | Alcada: %d cm\n", edat, alçada);
    printf("--------------------------------------------------\n");

    // Línia d'entrada segons el dia i descompte
    if (edat <= 3)
    {
        printf("Entrada (bebe gratis):           %6.2f EUR\n", preu_entrada);
    }
    else if (edat <= 12)
    {
        if (dia == 3) printf("Entrada (infantil, -20%% dimecres):%6.2f EUR\n", preu_entrada);
        else if (dia >= 6) printf("Entrada (infantil, cap de setmana):%4.2f EUR\n", preu_entrada);
        else printf("Entrada infantil:                %6.2f EUR\n", preu_entrada);
    }
    else if (edat <= 17)
    {
        if (dia == 3) printf("Entrada (jove, -20%% dimecres):    %6.2f EUR\n", preu_entrada);
        else if (dia >= 6) printf("Entrada (jove, cap de setmana):   %6.2f EUR\n", preu_entrada);
        else printf("Entrada jove:                    %6.2f EUR\n", preu_entrada);
    }
    else if (edat <= 64)
    {
        if (dia == 3) printf("Entrada (adult, -20%% dimecres):   %6.2f EUR\n", preu_entrada);
        else if (dia >= 6) printf("Entrada (adult, cap de setmana):  %6.2f EUR\n", preu_entrada);
        else printf("Entrada adult:                   %6.2f EUR\n", preu_entrada);
    }
    else
    {
        if (dia == 3) printf("Entrada (senior, -20%% dimecres):  %6.2f EUR\n", preu_entrada);
        else if (dia >= 6) printf("Entrada (senior, cap de setmana): %6.2f EUR\n", preu_entrada);
        else printf("Entrada senior:                  %6.2f EUR\n", preu_entrada);
    }

    // Línia del menú
    if (edat <= 3)
    {
        printf("Menu (bebe gratis):              %6.2f EUR\n", preu_menu);
    }
    else if (opcio_menu == 1)
    {
        printf("Menu Infantil:                   %6.2f EUR\n", preu_menu);
    }
    else if (opcio_menu == 2)
    {
        printf("Menu Classic:                    %6.2f EUR\n", preu_menu);
    }
    else if (opcio_menu == 3)
    {
        printf("Menu Premium:                    %6.2f EUR\n", preu_menu);
    }
    else
    {
        printf("Sense menjar:                    %6.2f EUR\n", preu_menu);
    }

    printf("--------------------------------------------------\n");
    printf("TOTAL:                           %6.2f EUR\n", total);
    printf("Import pagat:                    %6.2f EUR\n", import_pagat);

    if (import_pagat < total)
    {
        printf("Falta per pagar:                 %6.2f EUR\n", total - import_pagat);
    }
    else
    {
        printf("Canvi:                           %6.2f EUR\n", import_pagat - total);
    }
    printf("==================================================\n");

    // Resum d'atraccions disponibles
    printf("Atraccions disponibles:\n");

    // La Muntanya Russa
    if (alçada >= 120)
    {
        printf("[OK] La Muntanya Russa\n");
    }
    else
    {
        printf("[NO] La Muntanya Russa (alcada insuf.)\n");
    }

    // El Tobogan Gegant
    if (alçada >= 100)
    {
        printf("[OK] El Tobogan Gegant\n");
    }
    else
    {
        printf("[NO] El Tobogan Gegant (alcada insuf.)\n");
    }

    // El Pirata
    if (alçada >= 140 && edat >= 7)
    {
        printf("[OK] El Pirata\n");
    }
    else if (alçada < 140 && edat < 7)
    {
        printf("[NO] El Pirata (alcada i edat insuf.)\n");
    }
    else if (alçada < 140)
    {
        printf("[NO] El Pirata (alcada insuf.)\n");
    }
    else
    {
        printf("[NO] El Pirata (edat insuf.)\n");
    }

    // La Caiguda Lliure
    if (alçada >= 150 && edat >= 14)
    {
        printf("[OK] La Caiguda Lliure\n");
    }
    else if (alçada < 150 && edat < 14)
    {
        printf("[NO] La Caiguda Lliure (alcada i edat insuf.)\n");
    }
    else if (alçada < 150)
    {
        printf("[NO] La Caiguda Lliure (alcada insuf.)\n");
    }
    else
    {
        printf("[NO] La Caiguda Lliure (edat insuf.)\n");
    }

    printf("==================================================\n\n");

    setColor(WHITE);
    acabament();

    return 0;
}
