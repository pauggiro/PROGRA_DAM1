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

    char c;

    printf("Introdueix un caràcter: ");
    scanf("%c", &c);
    while (getchar() != '\n');

    // Comprovació amb els codis ASCII numèrics indicats
    if (c >= 65 && c <= 90) {
        printf("El caràcter %c és una lletra majúscula\n", c);
    } else if (c >= 97 && c <= 122) {
        printf("El caràcter %c és una lletra minúscula\n", c);
    } else if (c >= 48 && c <= 57) {
        printf("El caràcter %c és un dígit\n", c);
    } else {
        printf("El caràcter %c no és ni majúscula, ni minúscula ni dígit\n", c);
    }

    acabament();
    return 0;
}
