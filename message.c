#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, cpt, entier, carreEntier;
    
    printf("Entrer le nombre de fois d'iteration que vous souhaitez : ");
    scanf("%d", &cpt);
    for( i =1; i <= cpt; i ++) {
        printf("i : %d\n", i);

    }
    printf("Ce programme permet de prendre le nombre de l'utilisateur puis retourne son carré : ");
    scanf("%d", &entier);
    printf("Vous avez entré ce nombre %d\n", entier);
    carreEntier = entier * entier;
    printf("le Carre du nombre entré est : %d\n", carreEntier);

    return EXIT_SUCCESS;

}