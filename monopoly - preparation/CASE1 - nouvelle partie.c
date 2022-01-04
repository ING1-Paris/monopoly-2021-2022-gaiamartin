#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include "bibli_Monopoly.h"
#define MAX_LENGTH 20


int case1(){
system("cls");
printf("\n\n\n**************************************************** NOUVELLE PARTIE ***************************************************\n\n");

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

                struct joueur j1, j2, j3, j4, j5, j6, startPlayer;
                system("cls");
                printf("\n\n\n");
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
                int quiCommence = rand()%nbJoueurs+1;
                int jsuivant;

                if (quiCommence== 1){
                    printf("\n\n    %s ! A vous de commencer !\n\n", j1.nom);
                    startPlayer.nom == j1.nom;
                    startPlayer.position == j1.position;
                    jsuivant = j2.nom;
                }
                if (quiCommence == 2){
                    printf("\n\n    %s ! A vous de commencer !\n\n", j2.nom);
                    startPlayer.nom == j2.nom;
                    startPlayer.position == j2.position;
                    jsuivant = j3.nom;
                }
                if (quiCommence == 3){
                    printf("\n\n    %s ! A vous de commencer !\n\n", j3.nom);
                    startPlayer.nom == j3.nom;
                    startPlayer.position == j3.position;
                    jsuivant = j4.nom;
                }
                if (quiCommence == 4){
                    printf("\n\n    %s ! A vous de commencer !\n\n", j4.nom);
                    startPlayer.nom == j4.nom;
                    startPlayer.position == j4.position;
                    jsuivant = j5.nom;
                }
                if (quiCommence == 5){
                    printf("\n\n    %s ! A vous de commencer !\n\n", j5.nom);
                    startPlayer.nom == j5.nom;
                    startPlayer.position == j5.position;
                    jsuivant = j6.nom;
                }
                if (quiCommence == 6){
                    printf("\n\n    %s ! A vous de commencer !\n\n", j6.nom);
                    startPlayer.nom == j6.nom;
                    startPlayer.position == j6.position;
                    jsuivant = j1.nom;
                }
            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

            //// distribution somme initiale /////////////////////////////////////////////////////////////////////////////////////

                printf("    Chaque joueur recoit la somme initiale de 1 500 euros\n\n");

                j1.argent = 1500;
                j1.position = 1;
                i++;
                j2.argent = 1500;
                j2.position = 1;
                i++;
                if(i<=nbJoueurs){
                    j3.argent = 1500;
                    j3.position = 1;
                }
                i++;
                if(i<=nbJoueurs){
                    j4.argent = 1500;
                    j4.position = 1;
                }
                i++;
                if(i<=nbJoueurs){
                    j5.argent = 1500;
                    j5.position = 1;
                }
                i++;
                if(i<=nbJoueurs){
                    j6.argent = 1500;
                    j6.position = 1;
                }
            /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

            //// affichage plateau /////////////////////////////////////////////////////////////////////////////////////////////////
            Sleep(2000);
            system("cls");
            grille();

            /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


            //// lancer les des /////////////////////////////////////////////////////////////////////////////////////////////////
               // fctnDD();
            /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

            //// jeu ////////////////////////////////////////////////////////////////////////////////////////////////////////////
            while (nbJoueurs != 1){
                int nbCasesAvancees = fctnDD();
                startPlayer.position = startPlayer.position + nbCasesAvancees;
                printf(" \nposition : %d", startPlayer.position);

            }

            //// carte chance ///////////////////////////////////////////////////////////////////////////////////////////////////

                int carteC = 0;
                srand(time(NULL));
                quiCommence = rand()%nbJoueurs+1;

                if (quiCommence == 1){
                carteChance(j1.argent, j1.position, nbJoueurs);
                }
                if (quiCommence == 2){
                    carteChance(j2.argent, j2.position, nbJoueurs);
                }
                if (quiCommence == 3){
                    carteChance(j3.argent, j3.position, nbJoueurs);
                }
                if (quiCommence == 4){
                    carteChance(j4.argent, j4.position, nbJoueurs);
                }
                if (quiCommence == 5){
                    carteChance(j5.argent, j5.position, nbJoueurs);
                }
                if (quiCommence ==6){
                    carteChance(j6.argent, j6.position, nbJoueurs);
                }
    return 0;

}

