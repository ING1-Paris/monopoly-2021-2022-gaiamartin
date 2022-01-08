#include <stdio.h>
#include <stdlib.h>

int fctnBlindageNoms(char nom [8], int i){

    const char tailleLimite[7] = "aaaaaaaa";
    strcpy(tailleLimite, "aaaaaaaa");

    while ((strlen(nom))>(strlen(tailleLimite))) {
        printf("    \n      OUPS!\n      ce nom est trop long, saisissez un nom de 8 caracteres maximum...\n\n");
        printf("\n      Nom du joueur %d :    ", i);
        fflush(stdin);
        scanf("%[^\n]s",nom);
        strncpy(nom, nom, 8);
    }

    i++;
    return i;
}
