#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include "bibli_Monopoly.h"


    int premierTour( char nom[8], int position, int argent, int nbJoueurs, int nbP, int nbM, int nbH, char s2[8],char s3[8],char s4[8],char s5[8],char s6[8]){

                    gotoligcol(37,71);
                    printf("%s", nom );
                    //position = 1;
                    //argent = 1500;
                    int nvArgent;
                    int nvPosition;

                    int nbCasesAvancees = fctnDD( nom, position, argent, nbJoueurs);
                    nbCasesAvancees = 1 + nbCasesAvancees;
                    position = nbCasesAvancees;

                    if(position==1){
                        gotoligcol(37,71);
                        printf("%s", nom );
                        position == 1;
                    }
                    if(position==2){
                        gotoligcol(37,71);
                        printf("        ");
                        gotoligcol(37,61);
                        printf("%s", nom);
                        nvPosition = 2;
                        position = nvPosition;
                    }
                    if(position==3){
                        gotoligcol(37,71);
                        printf("        ");
                        gotoligcol(37,51);
                        printf("%s", nom);
                        nvPosition = 3;
                        position = nvPosition;
                    }
                    if(position==4){
                        gotoligcol(37,71);
                        printf("        ");
                        printf("\n\n\n\n    IMPOT SURLE REVENU !\n     vous devez 200 euros a la banque...");
                        gotoligcol(37,41);
                        printf("%s", nom);
                        argent = argent - 200;
                        nvPosition = 4;
                        position = nvPosition;
                    }
                    if(position==5){
                        gotoligcol(37,71);
                        printf("        ");
                        gotoligcol(37,31);
                        printf("%s", nom);
                        nvPosition = 5;
                        position = nvPosition;
                    }
                    if(position==6){
                        gotoligcol(37,71);
                        printf("        ");
                        gotoligcol(37,21);
                        printf("%s", nom);
                        nvPosition = 6;
                        position = nvPosition;
                        int carteC = 0;
                        carteChance(argent, position, nbJoueurs);
                    }

                    if(position==7){
                        gotoligcol(37,71);
                        printf("        ");
                        gotoligcol(37,11);
                        printf("%s", nom);
                        nvPosition =7;
                        position = nvPosition;
                    }
                    if(position==8){
                        gotoligcol(37,71);
                        printf("        ");
                        printf("    VOUS ALLEZ EN PRISON...");
                        gotoligcol(37,1);
                        printf("%s", nom);
                        Sleep(1000);
                        gotoligcol(37,1);
                        printf("        ");
                        gotoligcol(2,71);
                        printf("%s", nom);
                        nvPosition = 22;
                        position = nvPosition;
                    }
                    if(position==9){
                        gotoligcol(37,71);
                        printf("        ");
                        gotoligcol(31,3);
                        printf("%s", nom);
                        nvPosition = 9;
                        position = nvPosition;
                    }
                    if(position==10){
                        gotoligcol(37,71);
                        printf("        ");
                        gotoligcol(26,3);
                        printf("%s", nom);
                        nvPosition = 10;
                        position = nvPosition;;
                    }
                    if(position==11){
                        gotoligcol(37,71);
                        printf("        ");
                        gotoligcol(21,3);
                        printf("%s", nom);
                        nvPosition = 11;
                        position = nvPosition;
                    }
                    if(position==12){
                        gotoligcol(37,71);
                        printf("        ");
                        gotoligcol(16,3);
                        printf("%s", nom);
                        nvPosition = 12;
                        position = nvPosition;
                    }
                    if(position==13){
                        gotoligcol(37,71);
                        printf("        ");
                        gotoligcol(11,3);
                        printf("%s", nom);
                        position == 13;
                    }
                    if(position==14){
                        gotoligcol(37,71);
                        printf("        ");
                        gotoligcol(6,3);
                        printf("%s", nom);
                        position = 14;
                    }
                    if(position==15){
                        gotoligcol(37,71);
                        printf("        ");
                        gotoligcol(2,1);
                        printf("%s", nom);
                        position = 15;
                    }
                    if(position==16){
                        gotoligcol(37,71);
                        printf("        ");
                        gotoligcol(2,11);
                        printf("%s", nom);
                        position = 16;
                    }
                    if(position==17){
                        gotoligcol(37,71);
                        printf("        ");
                        gotoligcol(2,21);
                        printf("%s", nom);
                        position = 17;
                        int carteC = 0;
                        carteChance(argent, position, nbJoueurs);
                    }
                    if(position==18){
                        gotoligcol(37,71);
                        printf("        ");
                        gotoligcol(2,31);
                        printf("%s", nom);
                        position = 18;
                    }
                    if(position==19){
                        gotoligcol(37,71);
                        printf("        ");
                        gotoligcol(2,41);
                        printf("%s", nom);
                        position = 19;
                    }
                    if(position==20){
                        gotoligcol(37,71);
                        printf("        ");
                        gotoligcol(2,51);
                        printf("%s", nom);
                        position = 20;
                    }
                    if(position==21){
                        gotoligcol(37,71);
                        printf("        ");
                        gotoligcol(2,61);
                        printf("%s", nom);
                        position = 21;
                    }
                    if(position==22){
                        gotoligcol(37,71);
                        printf("        ");
                        printf("    AIE...! VOUS ETES EN PRISON...");
                        gotoligcol(2,71);
                        printf("%s", nom);
                        position = 22;
                        int Prison(nom, position, argent, nbJoueurs );

                    }
                    if(position==23){
                        gotoligcol(37,71);
                        printf("        ");
                        gotoligcol(6,73);
                        printf("%s", nom);
                        position = 23;
                    }
                    if(position==24){
                        gotoligcol(37,71);
                        printf("        ");
                        gotoligcol(11,73);
                        printf("%s", nom);
                        position = 24;
                    }
                    if(position==25){
                        gotoligcol(37,71);
                       printf("        ");
                        gotoligcol(16,73);
                        printf("%s", nom);
                        position = 25;
                    }
                    if(position==26){
                        gotoligcol(37,71);
                        printf("        ");
                        gotoligcol(21,73);
                        printf("%s", nom);
                        position = 26;
                    }
                    if(position==27){
                        gotoligcol(37,71);
                        printf("        ");
                        gotoligcol(26,73);
                        printf("%s", nom);
                        position = 27;
                    }
                    if(position==28){
                        gotoligcol(37,71);
                        printf("        ");
                        gotoligcol(31,73);
                        printf("%s", nom);
                        position = 28;
                    }

                    optionCase( nom, position, argent, nbP, nbM, nbH, s2, s3, s4, s5, s6);
            return position;
      }


