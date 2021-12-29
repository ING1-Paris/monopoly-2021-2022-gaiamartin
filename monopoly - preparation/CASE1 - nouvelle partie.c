#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bibli_Monopoly.h"

int case1(){

printf("**************************************************** NOUVELLE PARTIE ***************************************************\n\n");

            //// initialisation du nombre de joueurs /////////////////////////////////////////////////////////////////////////////
                int nbJoueurs = 0;
                printf("    veuillez saisir le nombre de joueurs parmi les propositions suivantes: \n\n");
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
                char nom[20];
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

                int i = 1;
                printf("    veuillez saisir les noms des joueurs ( 20 caracteres max ) : \n");

                printf("\nNom du joueur %d :    ",i);
                fflush(stdin);
                scanf("%c",&j1.nom);
                if (scanf("%19s", j1.nom) != 1){
                    printf("    \nOUPS!\n     ce nom est trop long...\n\n");
                    printf("\nNom du joueur %d :    ",i);
                    fflush(stdin);
                    scanf("%c",&j1.nom);
                }
                i++;
                printf("\nNom du joueur %d :    ",i);
                scanf("%s", &j2.nom);
                if (scanf("%19s", j2.nom) != 1){
                    printf("    \nOUPS!\n     ce nom est trop long...\n\n");
                    printf("\nNom du joueur %d :    ",i);
                    scanf("%s",&j2.nom);
                }
                i++;
                if(i<=nbJoueurs){
                    printf("\nNom du joueur %d :    ",i);
                    scanf("%s", &j3.nom);
                    if(j3.nom>20){
                    printf("    \nOUPS!\n     ce nom est trop long...\n\n");
                    printf("\nNom du joueur %d :    ",i);
                    scanf("%s",&j3.nom);
                }
                }
                i++;
                if(i<=nbJoueurs){
                    printf("\nNom du joueur %d :    ",i);
                    scanf("%s", &j4.nom);
                    if(j4.nom>20){
                    printf("    \nOUPS!\n     ce nom est trop long...\n\n");
                    printf("\nNom du joueur %d :    ",i);
                    scanf("%s",&j4.nom);
                }
                }
                i++;
                if(i<=nbJoueurs){
                    printf("\nNom du joueur %d :    ",i);
                    scanf("%s", &j5.nom);
                    if(j5.nom>20){
                    printf("    \nOUPS!\n     ce nom est trop long...\n\n");
                    printf("\nNom du joueur %d :    ",i);
                    scanf("%s",&j5.nom);
                }
                }
                i++;
                if(i<=nbJoueurs){
                    printf("\nNom du joueur %d :    ",i);
                    scanf("%s", &j6.nom);
                    if(j6.nom>20){
                    printf("    \nOUPS!\n     ce nom est trop long...\n\n");
                    printf("\nNom du joueur %d :    ",i);
                    scanf("%s",&j6.nom);
                }
                }


            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

            //// qui commence ? //////////////////////////////////////////////////////////////////////////////////////////////////

                srand(time(NULL));
                int startPlayer = rand()%nbJoueurs+1;

                if (startPlayer == 1){
                    printf("\n\n          ***** %s ! A toi de commencer ! *****\n\n", j1.nom);
                }
                if (startPlayer == 2){
                    printf("\n\n          ***** %s ! A toi de commencer ! *****\n\n", j2.nom);
                }
                if (startPlayer == 3){
                    printf("\n_n          ***** %s ! A toi de commencer ! *****\n\n", j3.nom);
                }
                if (startPlayer == 4){
                    printf("\n\n          ***** %s ! A toi de commencer ! *****\n\n", j4.nom);
                }
                if (startPlayer == 5){
                    printf("\n\n          ***** %s ! A toi de commencer ! *****\n\n", j5.nom);
                }
                if (startPlayer == 6){
                    printf("\n\n          ***** %s ! A toi de commencer ! *****\n\n", j6.nom);
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
}

