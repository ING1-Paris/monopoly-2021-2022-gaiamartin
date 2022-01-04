#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "bibli_Monopoly.h"
#define MAX_LENGTH 20

int case1(){

printf("**************************************************** NOUVELLE PARTIE ***************************************************\n\n");

            //// initialisation du nombre de joueurs /////////////////////////////////////////////////////////////////////////////
                int nbJoueurs = 0;
                printf("***************************** nombre de joueurs ************************************************************************\n\n");
                printf("    VEUILLEZ SAISIR LE NOMBRE DE JOUEURS PARMI LES PROPOSITIONS SUIVANTES : \n\n");
                printf("/   \t2\t/\t3\t/\t4\t/\t5\t/\t6\t/\n\n");
                fflush(stdin);
                scanf("%d", &nbJoueurs);
                while((nbJoueurs!=2)&(nbJoueurs!=3)&(nbJoueurs!=4)&(nbJoueurs!=5)&(nbJoueurs!=6)){
                    printf("    OUPS!\n     vous ne pouvez pas selectionner ce nombre de joueurs...\n");
                    printf("    veuillez saisir le nombre de joueurs parmi les propositions suivantes : \n\n");
                    printf("/   \t2\t/\t3\t/\t4\t/\t5\t/\t6\t/\n\n");
                    fflush(stdin);
                    scanf("%d", &nbJoueurs);
                }
            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

            //// initialisation des noms des joueurs /////////////////////////////////////////////////////////////////////////////
                typedef struct joueur{
                char nom[14];
                int argent;
                int casesBleues;
                int casesRouges;
                int casesJaunes;
                int casesVertes;
                int maisons;
                int hotels;
                int gares;
                int position;
                }joueur;

                struct joueur j1, j2, j3, j4, j5, j6;
                printf("***************************** noms des joueurs ************************************************************************\n\n");
                printf("    VEUILLEZ SAISIR LES NOMS DES JOUEURS  : \n");

                int i=1;
                ////joueur 1//////////////////////////////////////////////////////////
                printf("\n      Nom du joueur %d :    ",i);
                fflush(stdin);
                scanf("%s", &j1.nom);
                strncpy(j1.nom, j1.nom, 13);
                i++;

                ////joueur 2//////////////////////////////////////////////////////////
                printf("\n      Nom du joueur %d :    ",i);
                scanf("%s", &j2.nom);
                while(strcmp(j1.nom,j2.nom) == 0){
                    printf("    \n      OUPS!\n      Ce nom est deja pris...\n\n");
                    printf("\n      Nom du joueur %d :    ", i);
                    fflush(stdin);
                    scanf("%s",&j2.nom);
                     strncpy(j2.nom, j2.nom, 13);
                }
                i++;

                ////joueur 3//////////////////////////////////////////////////////////
                if(i<=nbJoueurs){
                    printf("\n      Nom du joueur %d :    ",i);
                    scanf("%s", &j3.nom);
                    while((strcmp(j1.nom,j3.nom) == 0)||(strcmp(j2.nom,j3.nom) == 0)){
                        printf("    \n      OUPS!\n      Ce nom est deja pris...\n\n");
                        printf("\n      Nom du joueur %d :    ", i);
                        fflush(stdin);
                        scanf("%s",&j3.nom);
                        strncpy(j3.nom, j3.nom, 13);
                    }
                }
                i++;

                ////joueur 4//////////////////////////////////////////////////////////
                if(i<=nbJoueurs){
                    printf("\n      Nom du joueur %d :    ",i);
                    scanf("%s", &j4.nom);
                    while((strcmp(j1.nom,j4.nom) == 0)||(strcmp(j2.nom,j4.nom) == 0)||(strcmp(j3.nom,j4.nom) == 0)){
                        printf("    \n      OUPS!\n      Ce nom est deja pris...\n\n");
                        printf("\n      Nom du joueur %d :    ", i);
                        fflush(stdin);
                        scanf("%s",&j4.nom);
                        strncpy(j4.nom, j4.nom, 13);
                    }
                }
                i++;

                ////joueur 5//////////////////////////////////////////////////////////
                if(i<=nbJoueurs){
                    printf("\n      Nom du joueur %d :    ",i);
                    scanf("%s", &j5.nom);
                    while((strcmp(j1.nom,j5.nom) == 0)||(strcmp(j2.nom,j5.nom) == 0)||(strcmp(j3.nom,j5.nom) == 0)||(strcmp(j4.nom,j5.nom) == 0)){
                        printf("    \n      OUPS!\n      Ce nom est deja pris...\n\n");
                        printf("\n      Nom du joueur %d :    ", i);
                        fflush(stdin);
                        scanf("%s",&j5.nom);
                         strncpy(j5.nom, j5.nom, 13);
                    }
                }
                i++;

                ////joueur 6//////////////////////////////////////////////////////////
                if(i<=nbJoueurs){
                    printf("\n      Nom du joueur %d :    ",i);
                    scanf("%s", &j6.nom);
                    while((strcmp(j1.nom,j6.nom) == 0)||(strcmp(j2.nom,j6.nom) == 0)||(strcmp(j3.nom,j6.nom) == 0)||(strcmp(j4.nom,j6.nom) == 0)||(strcmp(j5.nom,j6.nom) == 0)){
                        printf("    \n      OUPS!\n       Ce nom est deja pris...\n\n");
                        printf("\n      Nom du joueur %d :    ", i);
                        fflush(stdin);
                        scanf("%s",&j6.nom);
                        strncpy(j6.nom, j6.nom, 13);
                    }
                }

            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

            //// qui commence ? //////////////////////////////////////////////////////////////////////////////////////////////////


                srand(time(NULL));
                int startPlayer = rand()%nbJoueurs+1;

                if (startPlayer == 1){
                    printf("\n\n    %s ! A vous de commencer !\n\n", j1.nom);
                }
                if (startPlayer == 2){
                    printf("\n\n    %s ! A vous de commencer !\n\n", j2.nom);
                }
                if (startPlayer == 3){
                    printf("\n\n    %s ! A vous de commencer !\n\n", j3.nom);
                }
                if (startPlayer == 4){
                    printf("\n\n    %s ! A vous de commencer !\n\n", j4.nom);
                }
                if (startPlayer == 5){
                    printf("\n\n    %s ! A vous de commencer !\n\n", j5.nom);
                }
                if (startPlayer == 6){
                    printf("\n\n    %s ! A vous de commencer !\n\n", j6.nom);
                }
            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

            //// distribution somme initiale /////////////////////////////////////////////////////////////////////////////////////

                printf("    Chaque joueur recoit la somme initiale de 1 500 euros\n\n");

                j1.argent == 1500;
                i++;
                j2.argent == 1500;
                i++;
                if(i<=nbJoueurs){
                    j3.argent == 1500;
                }
                i++;
                if(i<=nbJoueurs){
                    j4.argent == 1500;
                }
                i++;
                if(i<=nbJoueurs){
                    j5.argent == 1500;
                }
                i++;
                if(i<=nbJoueurs){
                    j6.argent == 1500;
                }
            /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

            //// lancer les des /////////////////////////////////////////////////////////////////////////////////////////////////
                int dd;
               /* printf("    Appuyez sur le zero pour lancer les des !\n");
                scanf("%d", &dd);
                if (dd == 0){*/
                int d1= 0;
                int d2= 0;
                int doublee=0;
                int resultat;
                d1=1+rand()%6;
                d2=1+rand()%6;
                resultat=d1+d2;
                if (d1 == 1){
                    printf("    *************\n");
                    printf("    *           *\n");
                    printf("    *           *\n");
                    printf("    *     *     *\n");
                    printf("    *           *\n");
                    printf("    *           *\n");
                    printf("    *************\n");

                }
                if (d1 == 2){
                    printf("    *************\n");
                    printf("    *           *\n");
                    printf("    *   *       *\n");
                    printf("    *           *\n");
                    printf("    *       *   *\n");
                    printf("    *           *\n");
                    printf("    *************\n");
                }
                if (d1 == 3){
                    printf("    *************\n");
                    printf("    *           *\n");
                    printf("    *   *       *\n");
                    printf("    *     *     *\n");
                    printf("    *       *   *\n");
                    printf("    *           *\n");
                    printf("    *************\n");
                }
                if (d1 == 4){
                    printf("    *************\n");
                    printf("    *           *\n");
                    printf("    *   *   *   *\n");
                    printf("    *           *\n");
                    printf("    *   *   *   *\n");
                    printf("    *           *\n");
                    printf("    *************\n");
                }
                if (d1 == 5){
                    printf("    *************\n");
                    printf("    *           *\n");
                    printf("    *   *   *   *\n");
                    printf("    *     *     *\n");
                    printf("    *   *   *   *\n");
                    printf("    *           *\n");
                    printf("    *************\n");
                }
                if (d1 == 6){
                    printf("\n    *************\n");
                    printf("    *           *\n");
                    printf("    *   * * *   *\n");
                    printf("    *   * * *   *\n");
                    printf("    *   * * *   *\n");
                    printf("    *           *\n");
                    printf("    *************\n\n");
                }
                if (d2 == 1){
                    printf("\n    *************\n");
                    printf("    *           *\n");
                    printf("    *           *\n");
                    printf("    *     *     *\n");
                    printf("    *           *\n");
                    printf("    *           *\n");
                    printf("    *************\n\n");

                }
                if (d2 == 2){
                    printf("\n    *************\n");
                    printf("    *           *\n");
                    printf("    *   *       *\n");
                    printf("    *           *\n");
                    printf("    *       *   *\n");
                    printf("    *           *\n");
                    printf("    *************\n\n");

                }
                if (d2 == 3){
                    printf("\n    *************\n");
                    printf("    *           *\n");
                    printf("    *   *       *\n");
                    printf("    *     *     *\n");
                    printf("    *       *   *\n");
                    printf("    *           *\n");
                    printf("    *************\n\n");

                }
                if (d2 == 4){
                    printf("\n    *************\n");
                    printf("    *           *\n");
                    printf("    *   *   *   *\n");
                    printf("    *           *\n");
                    printf("    *   *   *   *\n");
                    printf("    *           *\n");
                    printf("    *************\n\n");
                }
                if (d2 == 5){
                    printf("\n    *************\n");
                    printf("    *           *\n");
                    printf("    *   *   *   *\n");
                    printf("    *     *     *\n");
                    printf("    *   *   *   *\n");
                    printf("    *           *\n");
                    printf("    *************\n\n");
                }
                if (d2 == 6){
                    printf("\n    *************\n");
                    printf("    *           *\n");
                    printf("    *   * * *   *\n");
                    printf("    *   * * *   *\n");
                    printf("    *   * * *   *\n");
                    printf("    *           *\n");
                    printf("    *************\n\n");

                }
                if (d1==d2){
                    printf("    DOUBLE !\n");
                    doublee=+1;
                    if (doublee = 3)
                        printf("    PRISON !");
                    }
                    else{
                        printf("    VOUS AVANCEZ DE %d CASES\n\n", resultat);
                        return resultat;
                    }
            /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

            //// carte chance ///////////////////////////////////////////////////////////////////////////////////////////////////


                printf("salut");

               // int carteC = 0;
                /*srand(time(NULL));
                startPlayer = rand()%nbJoueurs+1;*/

               // if (startPlayer == 1){
                //carteChance(j1.argent, j1.position, nbJoueurs);
                /*}
                if (startPlayer == 2){
                    carteChance(j2.argent, j2.position, nbJoueurs);
                }
                if (startPlayer == 3){
                    carteChance(j3.argent, j3.position, nbJoueurs);
                }
                if (startPlayer == 4){
                    carteChance(j4.argent, j4.position, nbJoueurs);
                }
                if (startPlayer == 5){
                    carteChance(j5.argent, j5.position, nbJoueurs);
                }
                if (startPlayer ==6){
                    carteChance(j6.argent, j6.position, nbJoueurs);
                }*/
    return 0;

}

