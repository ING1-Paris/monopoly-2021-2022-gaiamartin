#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int Prison(char nom[8], int position, int argent, int nbJoueurs ){
    printf("zizi");
    int compteur=1;
    int dd;
    int cartePrison;
    int nbCasesAvancees;
    int choix;

    gotoligcol(25,100);
    printf("VOUS ETES EN PRISON!\n\n");
    printf("Vous pourrez sortir si et seulement si:\n");
    printf("- Vous lancez un double sur un de vos 3 tours suivants\n");
    printf("- Vous utilisez une carte sortir de prison gratuitement\n");
    printf("- Vous payez une amende de 50 euros\n\n");
    printf("1. Utiliser ma carte sortir de prison gratuitement\n");
    printf("2. Payer 50 euros\n");
    printf("3. Tenter ma chance aux des\n");
    fflush(stdin);
    scanf("%d", &choix);

    /*switch (choix){
        case 1 :*/
        if (choix ==1){
            printf("    Vous etes bien sorti de prison!\n");
            cartePrison--;
        }
            //break;

        //case 2 :
        if (choix ==2){
            printf("    Vous sortez de prison et depensez 50 euros\n");
            argent=argent-50;
            printf("    Vous possedez desormais %d euros\n", argent);
            nbCasesAvancees = fctnDD( nom, position, argent, nbJoueurs);
        }
            //break;

        //case 3 :
        if (choix ==1){
            printf("\n   %s ! Appuyez sur le zero pour lancer les des !\n", nom);
            fflush(stdin);
            scanf("%d", &dd);
            while (dd != 0) {
                printf("    \n      OUPS!\n      il faut saisir un zero pour jouer...\n\n");
                fflush(stdin);
                scanf("%d", &dd);
            }
            if (dd == 0){
                int d1= 0;
                int d2= 0;
                int resultat;
                d1=1+rand()%6;
                d2=1+rand()%6;
                resultat=d1+d2;
                fctnD1(d1);
                fctnD2(d2);
                if(d1==d2){
                    printf("    DOUBLE !\n");
                    printf("    VOUS POUVEZ SORTIR DE PRISON !\n");
                    printf("    VOUS AVANCEZ DE %d CASES\n\n", resultat);
                    fctnJeu( nom[8], position, argent, nbJoueurs);
                }
                else {
                    if(compteur = 1)
                        printf("    Dommage ! Vous n avez pas fait de double...\n     Reessayez au tour suivant !\n\n");
                        compteur ++;
                    }
                    if(compteur = 2){
                        printf("    Dommage ! Vous n avez pas fait de double...\n   Vous devez payer une amende de 50 euros...\n     Reessayez au tour suivant !\n\n");
                        argent=argent-50;
                        printf("Vous possedez desormais %d euros\n", argent);
                        compteur ++;
                    }
                    if(compteur = 3){
                        printf("    Dommage ! Vous n avez pas fait de double...\n   Vous devez payer une amende de 50 euros...\n\n");
                        argent=argent-50;
                        printf("Vous possedez desormais %d euros\n", argent);
                        printf("     Vous avez passe 3 tours en prison, vous pouvez donc sortir !\n");
                        printf("    VOUS AVANCEZ DE %d CASES\n\n", resultat);
                        fctnJeu( nom[8], position, argent, nbJoueurs);
                    }
                }
                //break;
        }
    }
//}
