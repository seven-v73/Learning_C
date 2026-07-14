#include <stdio.h>
#include <stdlib.h>

int main(){
    //  Declaration des variables
    char prenom[50];
    int age;
    float taille;

    printf("Salut, ce programme permet de presenter l'utilisateur");

    // Recupération du prenom de l'utilisateur
    printf("Veuillez entrez votre Prénom SVP ? :");
    scanf("%49s", prenom);

    // Recupération de l'âge de l'utilisateur
    printf("Veuillez saisir votre âge : ");
    scanf("%d", &age);

    //  Recupération de la taille de l'utilisateur
    printf("Veuillez entrez votre taille :");
    scanf("%f", &taille);

    // Affichage des elements entrer

    printf("Vous avez entré ces informations: %s  est âge de %d ans et fait %.2f mettres\n", prenom, age, taille);

    //  Libération de la memoire

    return EXIT_SUCCESS;

}
