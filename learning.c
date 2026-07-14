#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Déclaration des variables
    int entier;
    int carreEntier;

    // Présentation du programme
    printf("Bonjour, ce programme calcule le carré d'un nombre entier.\n");
    printf("Veuillez entrer un nombre entier : ");

    // Saisie d'un nombre entier
    scanf("%d", &entier);

    // Affichage du nombre saisi
    printf("Vous avez entré le nombre : %d\n", entier);

    // Calcul du carré
    carreEntier = entier * entier;

    // Affichage du résultat
    printf("Le carré de %d est %d\n", entier, carreEntier);

    return EXIT_SUCCESS;
}