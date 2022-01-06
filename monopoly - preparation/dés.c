int fctnD1(int d1){

     if (d1 == 1){
        gotoligcol(2,100);
        printf("    *************");
        gotoligcol(3,100);
        printf("    *           *");
        gotoligcol(4,100);
        printf("    *           *");
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
}


int fctnD2(int d2){
     if (d2 == 1){
        printf("    *************\n");
        printf("    *           *\n");
        printf("    *           *\n");
        printf("    *     *     *\n");
        printf("    *           *\n");
        printf("    *           *\n");
        printf("    *************\n");

    }
    if (d2 == 2){
        printf("    *************\n");
        printf("    *           *\n");
        printf("    *   *       *\n");
        printf("    *           *\n");
        printf("    *       *   *\n");
        printf("    *           *\n");
        printf("    *************\n");
    }
    if (d2 == 3){
        printf("    *************\n");
        printf("    *           *\n");
        printf("    *   *       *\n");
        printf("    *     *     *\n");
        printf("    *       *   *\n");
        printf("    *           *\n");
        printf("    *************\n");
    }
    if (d2 == 4){
        printf("    *************\n");
        printf("    *           *\n");
        printf("    *   *   *   *\n");
        printf("    *           *\n");
        printf("    *   *   *   *\n");
        printf("    *           *\n");
        printf("    *************\n");
    }
    if (d2 == 5){
        printf("    *************\n");
        printf("    *           *\n");
        printf("    *   *   *   *\n");
        printf("    *     *     *\n");
        printf("    *   *   *   *\n");
        printf("    *           *\n");
        printf("    *************\n");
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

}

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

    int fctnDD(char nom[14]){
        int dd;
        int nbCasesAvancees;
        int Double=0;
        printf("\n\n\n\n   %s ! Appuyez sur le zero pour lancer les des !\n", nom);
        scanf("%d", &dd);
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
                printf("    C'est votre 1er double, vous rejouez!\n");
                printf("    VOUS AVANCEZ DE %d CASES\n\n", resultat);
                printf("    Relancez les des !\n");
                nbCasesAvancees = resultat;
                scanf("%d", &dd);
                if (dd == 0){
                    system("cls");
                    grille();
                    fctnD1(d1);
                    fctnD2(d2);
                    if(d1==d2){
                        printf("    DOUBLE !\n");
                        printf("    C'est votre 2eme double... attention, encore 1 et c'est la prison !\n");
                        printf("    VOUS AVANCEZ DE %d CASES\n\n", resultat);
                        nbCasesAvancees = resultat;
                        printf("    Relancez les des !\n");
                        scanf("%d", &dd);
                        if (dd == 0){
                            system("cls");
                            grille();
                            fctnD1(d1);
                            fctnD2(d2);
                            if(d1==d2){
                                printf("    DOUBLE !\n");
                                printf("    C'est votre 3eme double...\n    VOUS ALLEZ EN PRISON!\n");
                                gotoligcol(2,71);
                                printf("%s", nom);
                            }
                            else{
                                printf("    VOUS AVANCEZ DE %d CASES\n\n", resultat);
                                nbCasesAvancees = resultat;
                            }
                        }
                    }
                    else{
                        printf("    VOUS AVANCEZ DE %d CASES\n\n", resultat);
                        nbCasesAvancees = resultat;
                    }
                }
            }
            else{
                printf("    VOUS AVANCEZ DE %d CASES\n\n", resultat);
                nbCasesAvancees = resultat;
            }
        }

    }
