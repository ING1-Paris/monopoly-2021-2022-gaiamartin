#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include "bibi_Monopoly.h"


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
                char nom[7];
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

                struct joueur j1, j2, j3, j4, j5, j6, J, startPlayer, s2, s3, s4, s5, s6;
                char tailleLimite[7];
                strcpy(tailleLimite, "aaaaaaaa");
                system("cls");
                printf("\n\n\n");
                printf("***************************** noms des joueurs ************************************************************************\n\n");
                printf("    VEUILLEZ SAISIR LES NOMS DES JOUEURS (max 8 caracteres) : \n");

                int i=1;

                ////joueur 1//////////////////////////////////////////////////////////
                printf("\n      Nom du joueur %d :    ",i);
                fflush(stdin);
                scanf("%[^\n]s", &j1.nom);
                strncpy(j1.nom, j1.nom, 8);
                i = fctnBlindageNoms(j1.nom, i);

                ////joueur 2//////////////////////////////////////////////////////////
                printf("\n      Nom du joueur %d :    ",i);
                fflush(stdin);
                scanf("%[^\n]s", &j2.nom);
                i = fctnBlindageNoms(j2.nom, i);
                while(strcmp(j1.nom,j2.nom) == 0){
                    printf("    \n      OUPS!\n      Ce nom est deja pris...\n\n");
                    printf("\n      Nom du joueur %d :    ", i);
                    fflush(stdin);
                    scanf("%[^\n]s", &j2.nom);
                    strncpy(j2.nom, j2.nom, 8);
                }

                ////joueur 3//////////////////////////////////////////////////////////
                if(i<=nbJoueurs){
                    printf("\n      Nom du joueur %d :    ",i);
                    fflush(stdin);
                    scanf("%[^\n]s", &j3.nom);
                    while((strcmp(j1.nom,j3.nom) == 0)||(strcmp(j2.nom,j3.nom) == 0)){
                        printf("    \n      OUPS!\n      Ce nom est deja pris...\n\n");
                        printf("\n      Nom du joueur %d :    ", i);
                        fflush(stdin);
                        scanf("%[^\n]s", &j3.nom);
                        strncpy(j3.nom, j3.nom, 8);
                    }
                    i = fctnBlindageNoms(j3.nom, i);
                }


                ////joueur 4//////////////////////////////////////////////////////////
                if(i<=nbJoueurs){
                    printf("\n      Nom du joueur %d :    ",i);
                    fflush(stdin);
                    scanf("%[^\n]s", &j4.nom);
                    while((strcmp(j1.nom,j4.nom) == 0)||(strcmp(j2.nom,j4.nom) == 0)||(strcmp(j3.nom,j4.nom) == 0)){
                        printf("    \n      OUPS!\n      Ce nom est deja pris...\n\n");
                        printf("\n      Nom du joueur %d :    ", i);
                        fflush(stdin);
                        scanf("%[^\n]s",&j4.nom);
                        strncpy(j4.nom, j4.nom, 8);
                    }
                }
                i = fctnBlindageNoms(j4.nom, i);

                ////joueur 5//////////////////////////////////////////////////////////
                if(i<=nbJoueurs){
                    printf("\n      Nom du joueur %d :    ",i);
                    fflush(stdin);
                    scanf("%[^\n]s", &j5.nom);
                    while((strcmp(j1.nom,j5.nom) == 0)||(strcmp(j2.nom,j5.nom) == 0)||(strcmp(j3.nom,j5.nom) == 0)||(strcmp(j4.nom,j5.nom) == 0)){
                        printf("    \n      OUPS!\n      Ce nom est deja pris...\n\n");
                        printf("\n      Nom du joueur %d :    ", i);
                        fflush(stdin);
                        scanf("%[^\n]s",&j5.nom);
                         strncpy(j5.nom, j5.nom, 8);
                    }
                }
                i = fctnBlindageNoms(j5.nom, i);

                ////joueur 6//////////////////////////////////////////////////////////
                if(i<=nbJoueurs){
                    printf("\n      Nom du joueur %d :    ",i);
                    fflush(stdin);
                    scanf("%[^\n]s", &j6.nom);
                    while((strcmp(j1.nom,j6.nom) == 0)||(strcmp(j2.nom,j6.nom) == 0)||(strcmp(j3.nom,j6.nom) == 0)||(strcmp(j4.nom,j6.nom) == 0)||(strcmp(j5.nom,j6.nom) == 0)){
                        printf("    \n      OUPS!\n       Ce nom est deja pris...\n\n");
                        printf("\n      Nom du joueur %d :    ", i);
                        fflush(stdin);
                        scanf("%[^\n]s",&j6.nom);
                        strncpy(j6.nom, j6.nom, 8);
                    }
                     fctnBlindageNoms(j6.nom, i);
                }

            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

            //// qui commence ? //////////////////////////////////////////////////////////////////////////////////////////////////


                srand(time(NULL));
                int quiCommence = rand()%nbJoueurs+1;
                int jsuivant, quiFinit;


                if (quiCommence== 1){
                    printf("\n\n    %s ! A vous de commencer !\n\n", j1.nom);
                    startPlayer= j1;
                    s2 = j2;
                    if(nbJoueurs >2)
                        s3 = j3;
                    if(nbJoueurs >= 4)
                        s4 = j4;
                    if(nbJoueurs >= 5)
                        s5 = j5;
                    if(nbJoueurs >= 6)
                        s6 = j6;
                }
                if (quiCommence == 2){
                    printf("\n\n    %s ! A vous de commencer !\n\n", j2.nom);
                    startPlayer = j2;
                    if(nbJoueurs >2)
                        s2 = j3;
                    if(nbJoueurs >= 3)
                        s3 = j4;
                    if(nbJoueurs >= 4)
                        s4 = j5;
                    if(nbJoueurs >= 5)
                        s5 = j6;
                    if(nbJoueurs >= 6)
                        s6 = j1;
                }
                if (quiCommence == 3){
                    printf("\n\n    %s ! A vous de commencer !\n\n", j3.nom);
                    startPlayer = j3;
                    if(nbJoueurs >3)
                        s2 = j4;
                    if(nbJoueurs >= 4)
                        s3 = j5;
                    if(nbJoueurs >= 5)
                        s4 = j6;
                    if(nbJoueurs >= 6){
                        s5 = j1;
                        s6 = j2;
                    }
                }
                if (quiCommence == 4){
                    printf("\n\n    %s ! A vous de commencer !\n\n", j4.nom);
                    startPlayer = j4;
                    if(nbJoueurs > 4)
                        s2 = j5;
                    if(nbJoueurs >=5)
                        s3 = j6;
                    if(nbJoueurs >= 6)
                        s4 = j1;
                        s5 = j2;
                        s6 = j3;
                }
                if (quiCommence == 5){
                    printf("\n\n    %s ! A vous de commencer !\n\n", j5.nom);
                    startPlayer = j5;
                    if(nbJoueurs > 5)
                        s2 = j6;
                    if(nbJoueurs >=6)
                        s3 = j1;
                        s4 = j2;
                        s5 = j3;
                        s6 = j4;
                }
                if (quiCommence == 6){
                    printf("\n\n    %s ! A vous de commencer !\n\n", j6.nom);
                    startPlayer = j6;
                    s2 = j1;
                    s3 = j2;
                    s4 = j3;
                    s5 = j4;
                    s6 = j5;
                }
            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

            //// initialisation structures joueurs ///////////////////////////////////////////////////////////////////////////////

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

            //// jeu ////////////////////////////////////////////////////////////////////////////////////////////////////////////

            //premier tour

            premierTour( startPlayer.nom, startPlayer.position, startPlayer.argent, nbJoueurs);
            optionCase( startPlayer.nom, startPlayer.position, startPlayer.argent, s2.nom, s3.nom, s4.nom, s5.nom, s6.nom);
            premierTour( s2.nom, s2.position, s2.argent, nbJoueurs);
            optionCase( s2.nom, s2.position, s2.argent, startPlayer.nom, s3.nom, s4.nom, s5.nom, s6.nom);
            if (nbJoueurs > 2){
                premierTour(s3.nom, s3.position, s3.argent, nbJoueurs);
                optionCase( s3.nom, s3.position, s3.argent, startPlayer.nom, s2.nom, s4.nom, s5.nom, s6.nom);
                if (nbJoueurs > 3)
                    premierTour(s4.nom, s4.position, s4.argent, nbJoueurs);
                    optionCase( s4.nom, s4.position, s4.argent, startPlayer.nom, s2.nom, s3.nom, s5.nom, s6.nom);
                    if (nbJoueurs > 4)
                        premierTour(s5.nom, s5.position, s5.argent, nbJoueurs);
                        optionCase( s5.nom, s5.position, s5.argent, startPlayer.nom, s2.nom, s3.nom, s4.nom, s6.nom);
                        if (nbJoueurs > 5)
                            premierTour(s6.nom, s6.position, s6.argent, nbJoueurs);
                            optionCase( s6.nom, s6.position, s6.argent, startPlayer.nom, s2.nom, s3.nom, s4.nom, s5.nom);
            }
            while (nbJoueurs != 1){
                fctnJeu( startPlayer.nom, startPlayer.position, startPlayer.argent, nbJoueurs);
                fctnJeu( s2.nom, s2.position, s2.argent, nbJoueurs);
                if (nbJoueurs > 2)
                    fctnJeu(s3.nom, s3.position, s3.argent, nbJoueurs);
                    if (nbJoueurs > 3)
                        fctnJeu(s4.nom, s4.position, s4.argent, nbJoueurs);
                        if (nbJoueurs > 4)
                            fctnJeu(s5.nom, s5.position, s5.argent, nbJoueurs);
                            if (nbJoueurs > 5)
                                fctnJeu(s6.nom, s6.position, s6.argent, nbJoueurs);
                }

            //// carte chance ///////////////////////////////////////////////////////////////////////////////////////////////////


                return 0;
            }
