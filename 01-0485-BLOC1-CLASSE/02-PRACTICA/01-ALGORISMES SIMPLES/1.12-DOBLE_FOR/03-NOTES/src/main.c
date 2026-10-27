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

 float notes;
 float suma = 0;
 float mitjaSum = 0;
 float mitjana = 0;
 int aprovat = 0 ;
 int suspes = 0;

 for (int i = 1; i < 6; i++)
 {
  printf("\nAlumne %i", i);
  getchar();
  suma = 0;
  for (int x = 1; x < 4; x++)
  {
   if (x == 1)
   {
    printf("\nIntrodueix notes de progra: ");
   } else if (x == 2 ){
    printf("\nIntrodueix notes de dbb: ");
   } else {
    printf("\nIntrodueix notes de web: ");
   }
   
   
   scanf("%f", &notes);
   suma = suma + notes;

   
   
  }
  mitjana = suma / 3.0;

  mitjaSum = mitjaSum + mitjana;



  

  printf("La mitjana es %.2f", mitjana);

  if (mitjana < 5)
  {
   suspes++;
  } else{
   aprovat++;
  }
  
  printf("\n");
 }
 
 printf("Mitjana global : %.2f",mitjaSum / 5  );
 printf("\nHan aprovat %i, i suspes %i" , aprovat , suspes);


 
 



 acabament();
 return 0;
}
 