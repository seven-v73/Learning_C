#include <stdio.h>
#include <stdlib.h>

int main(void)
{

   int entier;
   int carreEntier;

   printf("Bonjour, Ce programme calcule le carré d'un nombre entier. \n");
   printf("veuillez entrez un nombre entier : ");
   scanf("%d", &entier);
   printf("Vous avez entrez le nombré %d\n", entier);
   carreEntier = entier * entier;
   printf("Le carré de %d est %d\n", entier, carreEntier);


   return EXIT_SUCCESS;

}