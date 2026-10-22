#include <stdio.h>
#include <stdlib.h>
#include <time.h>  
#include <windows.h>
#include <string.h>
#include <stdbool.h>
#include "rlutil.h"
#include "llibreriaPropia.h"
#include "llibreriaExercici.h"

int valorAbsolut(int numero)
{
    if (numero < 0)
    {
        return -numero;
    }
    return numero;
}

