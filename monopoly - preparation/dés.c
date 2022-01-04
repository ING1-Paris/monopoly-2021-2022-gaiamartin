

int fctnD1(int d1){
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


    int fctnDD(){
        int dd;
        int nbCasesAvancees;
        int Double=0;
        printf("    Appuyez sur le zero pour lancer les des !\n");
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
                printf("    Relancez les des !\n");
                scanf("%d", &dd);
                if (dd == 0){
                    fctnD1(d1);
                    fctnD2(d2);
                    if(d1==d2){
                        printf("    DOUBLE !\n");
                        printf("    C'est votre 2eme double... attention, encore 1 et c'est la prison !\n");
                        printf("    Relancez les des !\n");
                        scanf("%d", &dd);
                        if (dd == 0){
                            fctnD1(d1);
                            fctnD2(d2);
                            if(d1==d2){
                                printf("    DOUBLE !\n");
                                printf("    C'est votre 3eme double...\n    VOUS ALLEZ EN PRISON!\n");
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


