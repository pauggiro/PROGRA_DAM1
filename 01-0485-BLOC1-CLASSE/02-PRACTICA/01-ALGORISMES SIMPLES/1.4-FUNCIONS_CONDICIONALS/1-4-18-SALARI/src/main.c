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

    int hores;
    float preuHora;

    printf("Introdueix les hores treballades: ");
    scanf("%d", &hores);

    printf("Introdueix el preu per hora: ");
    scanf("%f", &preuHora);

    if (hores < 0 || preuHora < 0) {
        printf("Dades inicials incorrectes\n");
        acabament();
        return 0;
    }

    int horesNormals = 0;
    int horesExtres = 0;

    if (hores < 35) {
        horesNormals = hores;
        horesExtres = 0;
    } else {
        horesNormals = 34;
        horesExtres = hores - 34;
    }

    float importNormal = horesNormals * preuHora;
    float importExtres = horesExtres * (preuHora * 1.5f);
    float souBrut = importNormal + importExtres;

    float deduccio = 0.0f;
    if (souBrut <= 120.0f) {
        deduccio = 0.0f;
    } else if (souBrut < 1020.0f) {
        deduccio = souBrut * 0.20f;
    } else {
        deduccio = souBrut * 0.30f;
    }

    float souNet = souBrut - deduccio;

    if (souNet == (int)souNet) {
        printf("Resultat: El sou final es de %.0f\n", souNet);
    } else {
        printf("Resultat: El sou final es de %.2f\n", souNet);
    }

    acabament();
    return 0;
}
