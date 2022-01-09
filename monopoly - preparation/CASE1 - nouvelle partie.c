#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include "bibli_Monopoly.h"


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
                int nbProprietes;
                int Maisons;
                int Hotels;
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

            /// initialisation infos joueurs //////////////////////////////////////////////////////////////////////////////////////////////////
                j1.argent = 1500;
                j1.position = 1;
                j1.nbProprietes = 0;
                j1.Maisons = 0;
                j1.Hotels = 0;
                i++;

                j2.argent = 1500;
                j2.position = 1;
                j2.nbProprietes = 0;
                j2.Maisons = 0;
                j2.Hotels = 0;
                i++;
                if(i<=nbJoueurs){
                    j3.argent = 1500;
                    j3.position = 1;
                    j3.nbProprietes = 0;
                    j3.Maisons = 0;
                    j3.Hotels = 0;
                }
                i++;
                if(i<=nbJoueurs){
                    j4.argent = 1500;
                    j4.position = 1;
                    j4.nbProprietes = 0;
                    j4.Maisons = 0;
                    j4.Hotels = 0;
                }
                i++;
                if(i<=nbJoueurs){
                    j5.argent = 1500;
                    j5.position = 1;
                    j5.nbProprietes = 0;
                    j5.Maisons = 0;
                    j5.Hotels = 0;
                }
                i++;
                if(i<=nbJoueurs){
                    j6.argent = 1500;
                    j6.position = 1;
                    j6.nbProprietes = 0;
                    j6.Maisons = 0;
                    j6.Hotels = 0;
                }

            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

            /// qui commence ? //////////////////////////////////////////////////////////////////////////////////////////////////

                srand(time(NULL));
                int quiCommence = rand()%nbJoueurs+1;

                if (quiCommence== 1){ // si le joueur 1 est le premier a jouer
                    printf("\n\n    %s ! A vous de commencer !\n\n", j1.nom);
                    startPlayer.argent = j1.argent;
                    strcpy(startPlayer.nom , j1.nom);
                    startPlayer.position = j1.position;
                    startPlayer.nbProprietes = j1.nbProprietes;
                    startPlayer.Maisons = j1.Maisons;
                    startPlayer.Hotels = j1.Hotels;

                    s2.argent = j2.argent;
                    strcpy(s2.nom , j2.nom);
                    s2.position = j2.position;
                    s2.nbProprietes = j2.nbProprietes;
                    s2.Maisons = j2.Maisons;
                    s2.Hotels = j2.Hotels;

                    if(nbJoueurs >2){
                        s3.argent = j3.argent;
                        strcpy(s3.nom, j3.nom);
                        s3.position = j3.position;
                        s3.nbProprietes = j3.nbProprietes;
                        s3.Maisons = j3.Maisons;
                        s3.Hotels = j3.Hotels;
                    }
                    if(nbJoueurs >= 4){
                        s4.argent = j4.argent;
                        strcpy(s4.nom, j4.nom);
                        s4.position =j4.position;
                        s4.nbProprietes = j4.nbProprietes;
                        s4.Maisons = j4.Maisons;
                        s4.Hotels = j4.Hotels;
                    }
                    if(nbJoueurs >= 5){
                        s5.argent = j5.argent;
                        strcpy(s5.nom, j5.nom);
                        s5.position = j5.position;
                        s5.nbProprietes = j5.nbProprietes;
                        s5.Maisons = j5.Maisons;
                        s5.Hotels = j5.Hotels;
                    }
                    if(nbJoueurs >= 6){
                        s6.argent = j6.argent;
                        strcpy(s6.nom, j6.nom);
                        s6.position = j6.position;
                        s6.nbProprietes = j6.nbProprietes;
                        s6.Maisons = j6.Maisons;
                        s6.Hotels = j6.Hotels;
                    }
                }
                if (quiCommence == 2){// si le joueur 2 est le premier a jouer (meme logique que si joueur 1 commence)
                    printf("\n\n    %s ! A vous de commencer !\n\n", j2.nom);
                    startPlayer.argent= j2.argent;
                    strcpy(startPlayer.nom, j2.nom);
                    startPlayer.position = j2.position;
                    startPlayer.nbProprietes = j2.nbProprietes;
                    startPlayer.Maisons = j2.Maisons;
                    startPlayer.Hotels = j2.Hotels;

                    s2.argent = j3.argent;
                    strcpy(s2.nom, j3.nom);
                    s2.position = j3.position;
                    s2.nbProprietes = j3.nbProprietes;
                    s2.Maisons = j3.Maisons;
                    s2.Hotels = j3.Hotels;
                    if(nbJoueurs >2){
                        s3.argent = j4.argent;
                        strcpy(s3.nom, j4.nom);
                        s3.position = j4.position;
                        s3.nbProprietes = j4.nbProprietes;
                        s3.Maisons = j4.Maisons;
                        s3.Hotels = j4.Hotels;
                    }
                    if(nbJoueurs >= 4){
                        s4.argent = j5.argent;
                        strcpy(s4.nom, j5.nom);
                        s4.position = j5.position;
                        s4.nbProprietes = j5.nbProprietes;
                        s4.Maisons = j5.Maisons;
                        s4.Hotels = j5.Hotels;
                    }
                    if(nbJoueurs >= 5){
                        s5.argent = j6.argent;
                        strcpy(s5.nom, j6.nom);
                        s5.position = j6.position;
                        s5.nbProprietes = j6.nbProprietes;
                        s5.Maisons = j6.Maisons;
                        s5.Hotels = j6.Hotels;
                    }
                    if(nbJoueurs >= 6){
                        s6.argent = j1.argent;
                        strcpy(s6.nom, j1.nom);
                        s6.position = j1.position;
                        s6.nbProprietes = j1.nbProprietes;
                        s6.Maisons = j1.Maisons;
                        s6.Hotels = j1.Hotels;
                    }
                }
                if (quiCommence == 3){// si le joueur 3 est le premier a jouer(meme logique que si joueur 1 commence)
                    printf("\n\n    %s ! A vous de commencer !\n\n", j3.nom);
                    startPlayer.argent= j3.argent;
                    strcpy(startPlayer.nom, j3.nom);
                    startPlayer.position = j3.position;
                    startPlayer.nbProprietes = j3.nbProprietes;
                    startPlayer.Maisons = j3.Maisons;
                    startPlayer.Hotels = j3.Hotels;

                    s2.argent = j4.argent;
                    strcpy(s2.nom,j4.nom);
                    s2.position = j4.position;
                    s2.nbProprietes = j4.nbProprietes;
                    s2.Maisons = j4.Maisons;
                    s2.Hotels = j4.Hotels;

                    if(nbJoueurs >2){
                        s3.argent = j5.argent;
                        strcpy(s3.nom,j5.nom);
                        s3.position = j5.position;
                        s3.nbProprietes = j5.nbProprietes;
                        s3.Maisons = j5.Maisons;
                        s3.Hotels = j5.Hotels;
                    }
                    if(nbJoueurs >= 4){
                        s4.argent = j6.argent;
                        strcpy(s4.nom, j6.nom);
                        s4.position = j6.position;
                        s4.nbProprietes = j6.nbProprietes;
                        s4.Maisons = j6.Maisons;
                        s4.Hotels = j6.Hotels;
                    }
                    if(nbJoueurs >= 5){
                        s5.argent = j1.argent;
                        strcpy(s5.nom,j1.nom);
                        s5.position = j1.position;
                        s5.nbProprietes = j1.nbProprietes;
                        s5.Maisons = j1.Maisons;
                        s5.Hotels = j1.Hotels;
                    }
                    if(nbJoueurs >= 6){
                        s6.argent = j2.argent;
                        strcpy(s6.nom, j2.nom);
                        s6.position = j2.position;
                        s6.nbProprietes = j2.nbProprietes;
                        s6.Maisons = j2.Maisons;
                        s6.Hotels = j2.Hotels;
                    }
                }
                if(quiCommence == 4){// si le joueur 4 est le premier a jouer(meme logique que si joueur 1 commence)
                    printf("\n\n    %s ! A vous de commencer !\n\n", j4.nom);
                    startPlayer.argent= j4.argent;
                    strcpy(startPlayer.nom,j4.nom);
                    startPlayer.position = j4.position;
                    startPlayer.nbProprietes = j4.nbProprietes;
                    startPlayer.Maisons = j4.Maisons;
                    startPlayer.Hotels = j4.Hotels;

                    s2.argent = j5.argent;
                    strcpy(s2.nom, j5.nom);
                    s2.position = j5.position;
                    s2.nbProprietes = j5.nbProprietes;
                    s2.Maisons = j5.Maisons;
                    s2.Hotels = j5.Hotels;

                    s3.argent = j6.argent;
                    strcpy(s3.nom, j6.nom);
                    s3.position = j6.position;
                    s3.nbProprietes = j6.nbProprietes;
                    s3.Maisons = j6.Maisons;
                    s3.Hotels = j6.Hotels;

                    if(nbJoueurs >= 4){
                        s4.argent = j1.argent;
                        strcpy(s4.nom, j1.nom);
                        s4.position = j1.position;
                        s4.nbProprietes = j1.nbProprietes;
                        s4.Maisons = j1.Maisons;
                        s4.Hotels = j1.Hotels;
                    }
                    if(nbJoueurs >= 5){
                        s5.argent = j2.argent;
                        strcpy(s5.nom, j2.nom);
                        s5.position = j2.position;
                        s5.nbProprietes = j2.nbProprietes;
                        s5.Maisons = j2.Maisons;
                        s5.Hotels = j2.Hotels;
                    }
                    if(nbJoueurs >= 6){
                        s6.argent = j3.argent;
                        strcpy(s6.nom, j3.nom);
                        s6.position = j3.position;
                        s6.nbProprietes = j3.nbProprietes;
                        s6.Maisons = j3.Maisons;
                        s6.Hotels = j3.Hotels;
                    }
                }
                if (quiCommence == 5){// si le joueur 5 est le premier a jouer(meme logique que si joueur 1 commence)
                    printf("\n\n    %s ! A vous de commencer !\n\n", j5.nom);
                    startPlayer.argent= j5.argent;
                    strcpy(startPlayer.nom, j5.nom);
                    startPlayer.position = j5.position;
                    startPlayer.nbProprietes = j5.nbProprietes;
                    startPlayer.Maisons = j5.Maisons;
                    startPlayer.Hotels = j5.Hotels;

                    s2.argent = j6.argent;
                    strcpy(s2.nom, j6.nom);
                    s2.position = j6.position;
                    s2.nbProprietes = j6.nbProprietes;
                    s2.Maisons = j6.Maisons;
                    s2.Hotels = j6.Hotels;

                    s3.argent = j1.argent;
                    strcpy(s3.nom, j1.nom);
                    s3.position = j1.position;
                    s3.nbProprietes = j1.nbProprietes;
                    s3.Maisons = j1.Maisons;
                    s3.Hotels = j1.Hotels;

                    s4.argent = j2.argent;
                    strcpy(s4.nom, j2.nom);
                    s4.position = j2.position;
                    s4.nbProprietes = j2.nbProprietes;
                    s4.Maisons = j2.Maisons;
                    s4.Hotels = j2.Hotels;

                    if(nbJoueurs >= 5){
                        s5.argent = j3.argent;
                        strcpy(s5.nom, j3.nom);
                        s5.position = j3.position;
                        s5.nbProprietes = j3.nbProprietes;
                        s5.Maisons = j3.Maisons;
                        s5.Hotels = j3.Hotels;
                    }
                    if(nbJoueurs >= 6){
                        s6.argent = j4.argent;
                        strcpy(s6.nom, j4.nom);
                        s6.position = j4.position;
                        s6.nbProprietes = j4.nbProprietes;
                        s6.Maisons = j4.Maisons;
                        s6.Hotels = j4.Hotels;
                    }
                }
                if (quiCommence == 6){ // si le joueur 6 est le premier a jouer(meme logique que si joueur 1 commence)
                    printf("\n\n    %s ! A vous de commencer !\n\n", j6.nom);
                    startPlayer.argent= j6.argent;
                    strcpy(startPlayer.nom, j6.nom);
                    startPlayer.position = j6.position;
                    startPlayer.nbProprietes = j6.nbProprietes;
                    startPlayer.Maisons = j6.Maisons;
                    startPlayer.Hotels = j6.Hotels;

                    s2.argent = j1.argent;
                    strcpy(s2.nom, j1.nom);
                    s2.position = j1.position;
                    s2.nbProprietes = j1.nbProprietes;
                    s2.Maisons = j1.Maisons;
                    s2.Hotels = j1.Hotels;

                    s3.argent = j2.argent;
                    strcpy(s3.nom, j2.nom);
                    s3.position = j2.position;
                    s3.nbProprietes = j2.nbProprietes;
                    s3.Maisons = j2.Maisons;
                    s3.Hotels = j2.Hotels;

                    s4.argent = j3.argent;
                    strcpy(s4.nom, j3.nom);
                    s4.position = j3.position;
                    s4.nbProprietes = j3.nbProprietes;
                    s4.Maisons = j3.Maisons;
                    s4.Hotels = j3.Hotels;

                    s5.argent = j4.argent;
                    strcpy(s5.nom, j4.nom);
                    s5.position = j4.position;
                    s5.nbProprietes = j4.nbProprietes;
                    s5.Maisons = j4.Maisons;
                    s5.Hotels = j4.Hotels;

                    s6.argent = j5.argent;
                    strcpy(s6.nom, j5.nom);
                    s6.position = j5.position;
                    s6.nbProprietes = j5.nbProprietes;
                    s6.Maisons = j5.Maisons;
                    s6.Hotels = j5.Hotels;
                }

            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

            //// affichage plateau /////////////////////////////////////////////////////////////////////////////////////////////////
            Sleep(2000);
            system("cls");
            grille();
            /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

            //// jeu ////////////////////////////////////////////////////////////////////////////////////////////////////////////

            //premier tour

            premierTour( startPlayer.nom, startPlayer.position, startPlayer.argent, nbJoueurs,startPlayer.nbProprietes, startPlayer.Maisons, startPlayer.Hotels, s2.nom, s3.nom, s4.nom, s5.nom, s6.nom );
            //optionCase( startPlayer.nom, startPlayer.position, startPlayer.argent, startPlayer.nbProprietes, startPlayer.Maisons, startPlayer.Hotels, s2.nom, s3.nom, s4.nom, s5.nom, s6.nom );
            printf("p %d", startPlayer.position);
            /*premierTour( s2.nom, s2.position, s2.argent, nbJoueurs);
            optionCase( s2.nom, s2.position, s2.argent,s2.nbProprietes, s2.Maisons, s2.Hotels, startPlayer.nom, s3.nom, s4.nom, s5.nom, s6.nom);
            if (nbJoueurs > 2){
                premierTour(s3.nom, s3.position, s3.argent, nbJoueurs);
                optionCase( s3.nom, s3.position, s3.argent, s3.nbProprietes, s3.Maisons, s3.Hotels, startPlayer.nom, s2.nom, s4.nom, s5.nom, s6.nom);
                if (nbJoueurs > 3)
                    premierTour(s4.nom, s4.position, s4.argent, nbJoueurs);
                    optionCase( s4.nom, s4.position, s4.argent, s4.nbProprietes, s4.Maisons, s4.Hotels, startPlayer.nom, s2.nom, s3.nom, s5.nom, s6.nom);
                    if (nbJoueurs > 4)
                        premierTour(s5.nom, s5.position, s5.argent, nbJoueurs);
                        optionCase( s5.nom, s5.position, s5.argent, s5.nbProprietes, s5.Maisons, s5.Hotels, startPlayer.nom, s2.nom, s3.nom, s4.nom, s6.nom);
                        if (nbJoueurs > 5)
                            premierTour(s6.nom, s6.position, s6.argent, nbJoueurs);
                            optionCase( s6.nom, s6.position, s6.argent, s6.nbProprietes, s6.Maisons, s6.Hotels, startPlayer.nom, s2.nom, s3.nom, s4.nom, s5.nom);
            }

            //tours
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
            }*/


    }


