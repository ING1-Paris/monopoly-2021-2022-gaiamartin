#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include "bibli_Monopoly.h"


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



           void fctnJeu( char nom[14], int position, int argent, int nbJoueurs){

                    void gotoligcol( int lig, int col )
                    {   COORD mycoord;
                        mycoord.X = col;
                        mycoord.Y = lig;
                        SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), mycoord );
                    }
                    int nbCasesAvancees = fctnDD(nom);
                    position = position + nbCasesAvancees;


                    if(position==1){
                        printf("\n    JOUR DE PAYE !\n     vous recevez 200 euros de la banque...");
                        gotoligcol(37,71);
                        printf("%s", nom );
                        position = 1;
                        argent = argent + 200;

                    }
                    if(position==2){
                        gotoligcol(37,61);
                        printf("%s", nom);
                        position = 2;
                    }
                    if(position==3){
                        gotoligcol(37,51);
                        printf("%s", nom);
                        position = 3;
                    }
                    if(position==4){
                        printf("\n    IMPOT SURLE REVENU !\n     vous devez 200 euros a la banque...");
                        gotoligcol(37,41);
                        printf("%s", nom);
                        position = 4;
                        argent = argent - 200;
                    }
                    if(position==5){
                        gotoligcol(37,31);
                        printf("%s", nom);
                        position = 5;
                    }
                    if(position==6){
                        gotoligcol(37,21);
                        printf("%s", nom);
                        position = 6;
                        int carteC = 0;
                        carteChance(argent, position, nbJoueurs);
                    }

                    if(position==7){
                        gotoligcol(37,11);
                        printf("%s", nom);
                        position = 7;
                    }
                    if(position==8){
                        printf("    AIE...! VOUS ALLEZ EN PRISON...");
                        gotoligcol(37,1);
                        printf("%s", nom);
                        position = 8;
                        Sleep(1000);
                        system("cls");
                        grille();
                        gotoligcol(2,71);
                        printf("%s", nom);
                        position = 22;

                    }
                    if(position==9){
                        gotoligcol(31,3);
                        printf("%s", nom);
                        position = 9;
                    }
                    if(position==10){
                        gotoligcol(26,3);
                        printf("%s", nom);
                        position = 10;
                    }
                    if(position==11){
                        gotoligcol(21,3);
                        printf("%s", nom);
                        position = 11;
                    }
                    if(position==12){
                        gotoligcol(16,3);
                        printf("%s", nom);
                        position = 12;
                    }
                    if(position==13){
                        gotoligcol(11,3);
                        printf("%s", nom);
                        position = 13;
                    }
                    if(position==14){
                        gotoligcol(6,3);
                        printf("%s", nom);
                        position = 14;
                    }
                    if(position==15){
                        gotoligcol(2,1);
                        printf("%s", nom);
                        position = 15;
                    }
                    if(position==16){
                        gotoligcol(2,11);
                        printf("%s", nom);
                        position = 16;
                    }
                    if(position==17){
                        gotoligcol(2,21);
                        printf("%s", nom);
                        position = 17;
                        int carteC = 0;
                        carteChance(argent, position, nbJoueurs);
                    }
                    if(position==18){
                        gotoligcol(2,31);
                        printf("%s", nom);
                        position = 18;
                    }
                    if(position==19){
                        gotoligcol(2,41);
                        printf("%s", nom);
                        position = 19;
                    }
                    if(position==20){
                        gotoligcol(2,51);
                        printf("%s", nom);
                        position = 20;
                    }
                    if(position==21){
                        gotoligcol(2,61);
                        printf("%s", nom);
                        position = 21;
                    }
                    if(position==22){
                        gotoligcol(2,71);
                        printf("%s", nom);
                        position = 22;

                    }
                    if(position==23){
                        gotoligcol(6,73);
                        printf("%s", nom);
                        position =23;
                    }
                    if(position==24){
                        gotoligcol(11,73);
                        printf("%s", nom);
                        position = 24;
                    }
                    if(position==25){
                        gotoligcol(16,73);
                        printf("%s", nom);
                        position = 25;
                    }
                    if(position==26){
                        gotoligcol(21,73);
                        printf("%s", nom);
                        position = 26;
                    }
                    if(position==27){
                        gotoligcol(26,73);
                        printf("%s", nom);
                        position = 27;
                    }
                    if(position==28){
                        gotoligcol(31,73);
                        printf("%s", nom);
                        position = 28;
                    }
                }

