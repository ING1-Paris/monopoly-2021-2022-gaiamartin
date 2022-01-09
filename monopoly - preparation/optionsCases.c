#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "bibli_Monopoly.h"

#include <stdbool.h>

#define bool unsigned int
#define true 1
#define false 0

 //DECLARATION DE LA STRUCTURE DES CASES DU JEU
   typedef struct cases
    {
        int num;
        char nom[50];
        int prix;
        int hypotheque;
        int Proprio;
        char proprio[50];
        int maison;
        int hotel;
        int loyer0M;
        int loyer1M;
        int loyer2M;
        int loyer3M;
        int loyer4M;
        int loyer1H;
        bool hypo;
        int nbMaison;
        int nbHotel;

    }propriete;

    propriete p[27];

 /// fonction permettent de realiser diverses actions sur les cases ////////////////////////////////////////////////////////

int optionCase( char nom[8], int position, int argent, int nbP, int nbM, int nbH, char s2[8],char s3[8],char s4[8],char s5[8],char s6[8]){

  /// initialisation des parametres de chaque case////////////////////////////////////////////////////////////////
    //case 1
    p[0].num=1;
    strcpy(p[0].nom, "Case depart");
    p[0].prix=0;

    //case 2
    p[1].num=2;
    strcpy(p[1].nom, "Avenue du Marechal Gueule de Bois");
    p[1].prix=60;
    p[1].hypotheque=30;
    p[1].Proprio = 2;
    p[1].maison=50;
    p[1].hotel=100;
    p[1].loyer0M=2;
    p[1].loyer1M=10;
    p[1].loyer2M=30;
    p[1].loyer3M=90;
    p[1].loyer4M=160;
    p[1].loyer1H=250;
    p[1].hypo=false;
    p[1].nbMaison=0;
    p[1].nbHotel=0;

    //case 3
    p[2].num=3;
    strcpy(p[2].nom, "Boulevard des Millesimes");
    p[2].prix=60;
    p[2].hypotheque=30;
    p[2].Proprio  = 2;
    p[2].maison=50;
    p[2].hotel=100;
    p[2].loyer0M=4;
    p[2].loyer1M=20;
    p[2].loyer2M=60;
    p[2].loyer3M=180;
    p[2].loyer4M=320;
    p[2].loyer1H=450;
    p[2].hypo=false;
    p[2].nbMaison=0;
    p[2].nbHotel=0;

    //case 4;
    p[3].num=4;
    strcpy(p[3].nom, "Impot sur le revenu");

    //case 5
    p[4].num=5;
    strcpy(p[4].nom, "Gare de la sante");
    p[4].prix=200;
    p[4].hypotheque=100;
    p[4].Proprio  = 2;
    p[4].hypo=false;

    //case 6
    p[5].num=6;
    strcpy(p[5].nom, "Chance");

    //case 7
    p[6].num=7;
    strcpy(p[6].nom, "Allee du Champagne");
    p[6].prix=120;
    p[6].hypotheque=60;
    p[6].Proprio  = 2;
    p[6].maison=50;
    p[6].hotel=100;
    p[6].loyer0M=6;
    p[6].loyer1M=30;
    p[6].loyer2M=90;
    p[6].loyer3M=2700;
    p[6].loyer4M=400;
    p[6].loyer1H=550;
    p[6].hypo=false;
    p[6].nbMaison=0;
    p[6].nbHotel=0;

    //case 8
    p[7].num=8;
    strcpy(p[7].nom, "Aller en prison");

    //case 9
    p[8].num=9;
    strcpy(p[8].nom, "Avenue de la Bonaventure");
    p[8].prix=140;
    p[8].hypotheque=70;
    p[8].Proprio = 2;
    p[8].maison=100;
    p[8].hotel=200;
    p[8].loyer0M=8;
    p[8].loyer1M=40;
    p[8].loyer2M=100;
    p[8].loyer3M=300;
    p[8].loyer4M=450;
    p[8].loyer1H=600;
    p[8].hypo=false;
    p[8].nbMaison=0;
    p[8].nbHotel=0;

    //case 10
    p[9].num=10;
    strcpy(p[9].nom, "Passage du Bisou de Minuit");
    p[9].prix=160;
    p[9].hypotheque=80;
    p[9].Proprio = 2;
    p[9].maison=100;
    p[9].hotel=200;
    p[9].loyer0M=10;
    p[9].loyer1M=50;
    p[9].loyer2M=150;
    p[9].loyer3M=450;
    p[9].loyer4M=625;
    p[9].loyer1H=750;
    p[9].hypo=false;
    p[9].nbMaison=0;
    p[9].nbHotel=0;

    //case 11
    p[10].num=11;
    strcpy(p[10].nom, "Gare de l amour");
    p[10].prix=200;
    p[10].hypotheque=100;
    p[10].Proprio = 2;
    p[10].hypo=false;

    //case 12
    p[11].num=12;
    strcpy(p[11].nom, "Caisse de communaute");

    //case 13
    p[14].num=13;
    strcpy(p[12].nom, "Boulevard des Paillettes");
    p[12].prix=180;
    p[12].hypotheque=90;
    p[12].Proprio =2;
    p[12].maison=100;
    p[12].hotel=200;
    p[12].loyer0M=12;
    p[12].loyer1M=60;
    p[12].loyer2M=180;
    p[12].loyer3M=500;
    p[12].loyer4M=700;
    p[12].loyer1H=900;
    p[12].hypo=false;
    p[12].nbMaison=0;
    p[12].nbHotel=0;

    //case 14
    p[13].num=14;
    strcpy(p[13].nom, "Rue des meilleurs voeux");
    p[13].prix=200;
    p[13].hypotheque=100;
    p[13].Proprio = 2;
    p[13].maison=100;
    p[13].hotel=200;
    p[13].loyer0M=14;
    p[13].loyer1M=70;
    p[13].loyer2M=200;
    p[13].loyer3M=550;
    p[13].loyer4M=700;
    p[13].loyer1H=950;
    p[13].hypo=false;
    p[13].nbMaison=0;
    p[13].nbHotel=0;

    //case 15
    p[14].num=15;
    strcpy(p[14].nom, "Stationnement gratuit");

    //case 16
    p[15].num=16;
    strcpy(p[15].nom, "Boulevard des Resolutions");
    p[15].prix=220;
    p[15].hypotheque=110;
    p[15].Proprio =2;
    p[15].maison=150;
    p[15].hotel=300;
    p[15].loyer0M=16;
    p[15].loyer1M=80;
    p[15].loyer2M=220;
    p[15].loyer3M=600;
    p[15].loyer4M=800;
    p[15].loyer1H=1000;
    p[15].hypo=false;
    p[15].nbMaison=0;
    p[15].nbHotel=0;

    //case 17
    p[16].num=17;
    strcpy(p[16].nom, "Chance");

    //case 18
    p[17].num=18;
    strcpy(p[17].nom, "Rue du Regime");
    p[17].prix=240;
    p[17].hypotheque=110;
    p[17].Proprio = 2;
    p[17].maison=150;
    p[17].hotel=300;
    p[17].loyer0M=18;
    p[17].loyer1M=90;
    p[17].loyer2M=250;
    p[17].loyer3M=700;
    p[17].loyer4M=975;
    p[17].loyer1H=1050;
    p[17].hypo=false;
    p[17].nbMaison=0;
    p[17].nbHotel=0;

    //case 19
    p[18].num=19;
    strcpy(p[18].nom, "Gare de la fortune");
    p[18].prix=200;
    p[18].hypotheque=100;
    p[17].Proprio = 2;
    p[18].hypo=false;

    //case 20
    p[19].num=20;
    strcpy(p[19].nom, "Allee du Changement");
    p[19].prix=260;
    p[19].hypotheque=130;
    p[19].Proprio = 2;
    p[19].maison=150;
    p[19].hotel=300;
    p[19].loyer0M=20;
    p[19].loyer1M=100;
    p[19].loyer2M=300;
    p[19].loyer3M=750;
    p[19].loyer4M=825;
    p[19].loyer1H=1100;
    p[19].hypo=false;
    p[19].nbMaison=0;
    p[19].nbHotel=0;

    //case 21
    p[20].num=21;
    strcpy(p[20].nom, "Chemin de la sobriete");
    p[20].prix=280;
    p[20].hypotheque=140;
    p[20].Proprio = 2;
    p[20].maison=150;
    p[20].hotel=300;
    p[20].loyer0M=22;
    p[20].loyer1M=110;
    p[20].loyer2M=330;
    p[20].loyer3M=800;
    p[20].loyer4M=975;
    p[20].loyer1H=1150;
    p[20].hypo=false;
    p[20].nbMaison=0;
    p[20].nbHotel=0;

    //case 22
    p[21].num=22;
    strcpy(p[21].nom, "Prison");

    //case 23
    p[22].num=23;
    strcpy(p[22].nom, "Passage de la Nouvelle Annee");
    p[22].prix=300;
    p[22].hypotheque=150;
    p[22].Proprio = 2;
    p[22].maison=200;
    p[22].hotel=400;
    p[22].loyer0M=24;
    p[22].loyer1M=120;
    p[22].loyer2M=360;
    p[22].loyer3M=850;
    p[22].loyer4M=1025;
    p[22].loyer1H=1200;
    p[22].hypo=false;
    p[22].nbMaison=0;
    p[22].nbHotel=0;

    //case 24
    p[23].num=24;
    strcpy(p[23].nom, "Caisse de communaute");

    //case 25
    p[24].num=25;
    strcpy(p[24].nom, "Boulevard du Reveillon");
    p[24].prix=320;
    p[24].hypotheque=160;
    p[24].Proprio = 2;
    p[24].maison=200;
    p[24].hotel=400;
    p[24].loyer0M=28;
    p[24].loyer1M=150;
    p[24].loyer2M=450;
    p[24].loyer3M=1000;
    p[24].loyer4M=1200;
    p[24].loyer1H=1400;
    p[24].hypo=false;
    p[24].nbMaison=0;
    p[25].nbHotel=0;

    //case 26
    p[25].num=26;
    strcpy(p[25].nom, "Gare de la chance");
    p[25].prix=200;
    p[25].hypotheque=100;
    p[25].Proprio = 2;
    p[25].hypo=false;


    //case 27
    p[26].num=27;
    strcpy(p[26].nom, "Rue du Decompte");
    p[26].prix=350;
    p[26].hypotheque=125;
    p[26].Proprio = 2;
    p[26].maison=200;
    p[26].hotel=400;
    p[26].loyer0M=35;
    p[26].loyer1M=175;
    p[26].loyer2M=500;
    p[26].loyer3M=1100;
    p[26].loyer4M=1300;
    p[26].loyer1H=1500;
    p[26].hypo=false;
    p[26].nbMaison=0;
    p[26].nbHotel=0;

    //case 28
    p[27].num=28;
    strcpy(p[27].nom, "Rue du Trente et Un");
    p[27].prix=400;
    p[27].hypotheque=200;
    p[27].Proprio = 2;
    p[27].maison=200;
    p[27].hotel=400;
    p[27].loyer0M=50;
    p[27].loyer1M=200;
    p[27].loyer2M=600;
    p[27].loyer3M=1400;
    p[27].loyer4M=1700;
    p[27].loyer1H=2000;
    p[27].hypo=false;
    p[27].nbMaison=0;
    p[27].nbHotel=0;

   ////////////////////////////////////////////////////////////////////////////////////////////////

    int choix;
    int k;
    k = position;
    int voir;
    int achatP;
    int numMaison;
    int numHotel;
    char banque[7] = "Banque";

   /// MENU DES OPTIONS D ACTIONS SUR LES CASES /////////////////////////////////////////////////////

    printf("\n");
    gotoligcol(22,100);
    printf("**************************** MENU JOUEUR ****************************\n");
    gotoligcol(23,100);
    printf("*       1. Consulter les informations d une case                    *\n");
    gotoligcol(24,100);
    printf("*       2. Acheter une propriete                                    *\n");
    gotoligcol(25,100);
    printf("*       3. Acheter une maison                                       *\n");
    gotoligcol(26,100);
    printf("*       4. Acheter un hotel                                         *\n");
    gotoligcol(27,100);
    printf("*       5. Hypothequer une propriete                                *\n");
    gotoligcol(28,100);
    printf("*       6. Consulter mes informations                               *\n");
    gotoligcol(29,100);
    printf("*       7. Quitter le menu joueur                                   *\n");
    gotoligcol(30,100);
    printf("*       8. Quitter la partie et acceder au menu principal           *\n");
    gotoligcol(31,100);
    printf("*                                                                   *\n");
    gotoligcol(32,100);
    printf("*********************************************************************\n");
    gotoligcol(33,100);
    printf("*                                                                   *\n");
    gotoligcol(34,100);
    printf("*   Que souhaitez-vous faire?                                       *\n");
    gotoligcol(35,100);
    printf("*                                                                   *\n");
    gotoligcol(36,100);
    printf("*********************************************************************\n\n");

    fflush(stdin);
    gotoligcol(37,100);
    scanf("%d", &choix);
    while ((choix != 1)&&(choix != 2)&&(choix != 3)&&(choix != 4)&&(choix != 5)&&(choix != 6)&&(choix != 7)&&(choix != 8)){
        gotoligcol(38,100);
        printf("OUPS ! Veillez saisir le numero d une des options du menu joueuer!");
        Sleep(2500);
        efface3756();
        optionCase(nom, position, argent, nbP, nbM, nbH, s2, s3, s4, s5, s6);
    }

    /// CONSULTER LES INFORMATIONS D UNE CASE ///////////////////////////////////////////////////////
       if (choix == 1){

        gotoligcol(38,100);
        printf("Quelle case souhaitez vous consulter?\n");
        fflush(stdin);
        gotoligcol(39,100);
        scanf("%d", &voir);
        while ( (voir != 1)&&(voir != 2)&&(voir != 3)&&(voir != 4)&&(voir != 5)&&(voir != 6)&&(voir != 7)&&(voir != 8)&&(voir != 9)&&(voir != 10)&&(voir != 11)&&(voir != 12)&&(voir != 13)&&(voir != 14)&&(voir != 15)&&(voir != 16)&&(voir != 17)&&(voir != 18)&&(voir != 19)&&(voir != 20)&&(voir != 21)&&(voir != 22)&&(voir != 23)&&(voir != 24)&&(voir != 25)&&(voir != 26)&&(voir != 27)&&(voir != 28)){
            gotoligcol(41,100);
            printf("OUPS ! Veillez saisir le numero d une case du plateau!");
            Sleep(2500);
            efface3756();
            optionCase(nom, position, argent, nbP, nbM, nbH, s2, s3, s4, s5, s6);
        }

        if ( p[voir-1].Proprio = 2)
            strcpy(p[voir-1].proprio, banque);
        else if( p[voir-1].Proprio = 1)
            strcpy(p[voir-1].proprio, p[voir-1].proprio);

        if ((voir == 1)||(voir == 4)||(voir == 6)||(voir == 8)||(voir == 12)||(voir == 15)||(voir == 17)||(voir == 22)||(voir == 24))
        // si la case que le joueur demande a voir est une case speciale ( depart, prison, chance ...)
        {
            gotoligcol(40,100);
            printf("nom: %s", p[voir-1].nom);
        }
        else if ((voir == 2)||(voir == 3)||(voir == 7)||(voir == 9)||(voir == 10)||(voir == 13)||(voir == 14)||(voir == 16)||(voir == 18)||(voir == 20)||(voir == 21)||(voir == 23)||(voir == 25)||(voir == 27)||(voir == 28))
        // si la case que le joueur demande a voir est une rue
        {
            gotoligcol(41,100);
            printf("**************************** CASE %d ****************************\n", voir);
            gotoligcol(42,100);
            printf(" nom: %s  \n", p[voir-1].nom);
            gotoligcol(43,100);
            printf(" prix: %d\n", p[voir-1].prix);
            gotoligcol(44,100);
            printf(" hypotheque: %d \n", p[voir-1].hypotheque);
            gotoligcol(45,100);
            printf(" proprietaire: %s\n", p[voir-1].proprio);
            gotoligcol(46,100);
            printf(" prix maison a l unite: %d\n", p[voir-1].maison);
            gotoligcol(47,100);
            printf(" prix hotel a l unite: %d\n", p[voir-1].hotel);
            gotoligcol(48,100);
            printf(" loyer 0 maisons: %d \n", p[voir-1].loyer0M);
            gotoligcol(49,100);
            printf(" loyer 1 maison: %d   \n", p[voir-1].loyer1M);
            gotoligcol(50,100);
            printf(" loyer 2 maisons: %d\n", p[voir-1].loyer2M);
            gotoligcol(51,100);
            printf(" loyer 3 maisons: %d\n", p[voir-1].loyer3M);
            gotoligcol(52,100);
            printf(" loyer 4 maisons: %d \n", p[voir-1].loyer4M);
            gotoligcol(53,100);
            printf(" loyer 1 hotel: %d \n", p[voir-1].loyer1H);
            gotoligcol(54,100);
            printf(" nombre de maisons : %d", p[voir-1].nbMaison);
            gotoligcol(55,100);
            printf(" nombre d hotels : %d", p[voir-1].nbHotel);
            gotoligcol(56,100);
            printf("*****************************************************************\n");
            Sleep (8000);
            efface3756();
        }


        else if ((voir == 5)||(voir == 11)||(voir == 19)||(voir == 26))
        // si la case que le joueur demande a voir est une gare
        {
            gotoligcol(41,100);
            printf("**************************** CASE %d ****************************\n", voir);
            gotoligcol(42,100);
            printf("nom: %s", p[voir-1].nom);
            gotoligcol(43,100);
            printf("prix: %d", p[voir-1].prix);
            gotoligcol(44,100);
            printf("hypotheque: %d", p[voir-1].hypotheque);
            gotoligcol(45,100);
            printf("proprietaire: %s", p[voir-1].proprio);
            gotoligcol(46,100);
            printf("*****************************************************************\n");
            Sleep (6000);
            efface3756();
        }

        else
        {
            gotoligcol(33,100);
            printf("ERREUR : CETTE CASE N EXISTE PAS");
            int optionCase( nom, position, argent);
        }
        optionCase(nom, position, argent, nbP, nbM, nbH, s2, s3, s4, s5, s6 );

        }

        /// ACHETER UNE PROPRIETE ///////////////////////////////////////////////////////////////////////
        else if(choix ==2){

            gotoligcol(38,100);
            printf("Quelle case souhaitez vous acheter?\n");
            gotoligcol(39,100);
            fflush(stdin);
            scanf("%d", &achatP);
            while ( (achatP != 1)&&(achatP != 2)&&(achatP != 3)&&(achatP != 4)&&(achatP != 5)&&(achatP != 6)&&(achatP != 7)&&(achatP != 8)&&(achatP != 9)&&(achatP != 10)&&(achatP != 11)&&(achatP != 12)&&(achatP != 13)&&(achatP != 14)&&(achatP != 15)&&(achatP != 16)&&(achatP != 17)&&(achatP != 18)&&(achatP != 19)&&(achatP != 20)&&(achatP != 21)&&(achatP != 22)&&(achatP != 23)&&(achatP != 24)&&(achatP != 25)&&(achatP != 26)&&(achatP != 27)&&(achatP != 28)){
                gotoligcol(40,100);
                printf("OUPS ! Veillez saisir le numero d une case du plateau!");
                Sleep(2500);
                efface3756();
                optionCase(nom, position, argent, nbP, nbM, nbH, s2, s3, s4, s5, s6);
            }

            if ( p[achatP-1].Proprio = 2)
                strcpy(p[achatP-1].proprio, banque);
            else if( p[achatP-1].Proprio = 1)
                strcpy(p[achatP-1].proprio, p[achatP-1].proprio);
            if (p[achatP-1].num == position){
                if ((achatP != 1)&&(achatP != 4)&&(achatP != 6)&&(achatP != 8)&&(achatP!= 12)&&(achatP != 15)&&(achatP != 17)&&(achatP != 22)&&(achatP != 24))
                // si la case que le joueur demande a acheter n'est pas une case speciale( case chance, depart, prison...)
                {
                    if ((p[achatP-1].proprio != s2)&&(p[achatP-1].proprio != s3)&&(p[achatP-1].proprio != s4)&&(p[achatP-1].proprio != s5)&&(p[achatP-1].proprio != s6))
                    // si la case que le joueur demande a acheter n'appartient pas deja a un autre joueur
                    {
                        if ((argent) >= (p[achatP-1].prix))
                        // si la case que le joueur demande a acheter n'est pas trop chere pour lui
                        {
                            argent -= p[achatP-1].prix;
                            p[achatP-1].Proprio = 1;
                            strcpy(p[achatP-1].proprio, nom);
                            gotoligcol(41,100);
                            printf("Transaction effectuee !\n");
                            gotoligcol(42,100);
                            printf("%s possede desormais %s\n", nom, p[achatP-1].nom);
                            nbP++;
                            Sleep(3000);
                            efface3756();

                            optionCase(nom, position, argent, nbP, nbM, nbH, s2, s3, s4, s5, s6);
                        }
                        else
                            gotoligcol(41,100);
                            printf("Vous n'avez pas assez d'argent pour effectuer cette transaction !\n");
                            Sleep(2500);
                            efface3756();
                            optionCase(nom, position, argent, nbP, nbM, nbH, s2, s3, s4, s5, s6);
                    }
                    else
                        gotoligcol(41,100);
                        printf("Vous ne pouvez pas acheter cette propriete car elle appartient deja a un autre joueur");
                        Sleep(2500);
                        efface3756();
                        optionCase( nom, position, argent, nbP, nbM, nbH, s2, s3, s4, s5, s6);
                }
                else{
                    gotoligcol(41,100);
                    printf("Vous ne pouvez pas acheter cette case car il ne s'agit pas d'une propriete");
                    Sleep(2500);
                    efface3756();
                    optionCase(nom, position, argent, nbP, nbM, nbH, s2, s3, s4, s5, s6);
                }
            }
            else {
                gotoligcol(41,100);
                printf("Vous ne pouvez pas acheter une case sur laquelle vous n etes pas");
                Sleep(2500);
                efface3756();
                optionCase(nom, position, argent, nbP, nbM, nbH, s2, s3, s4, s5, s6);
            }
        }

        /// ACHETER UNE MAISON //////////////////////////////////////////////////////////////////////////
        else if (choix == 3){
            gotoligcol(38,100);
            printf("Sur quel numero de case souhaitez vous placer la maison?\n");
            fflush(stdin);
            gotoligcol(39,100);
            scanf("%d", &numMaison);
            while ( (numMaison != 1)&&(numMaison != 2)&&(numMaison != 3)&&(numMaison != 4)&&(numMaison != 5)&&(numMaison != 6)&&(numMaison != 7)&&(numMaison != 8)&&(numMaison != 9)&&(numMaison != 10)&&(numMaison != 11)&&(numMaison != 12)&&(numMaison != 13)&&(numMaison != 14)&&(numMaison != 15)&&(numMaison != 16)&&(numMaison != 17)&&(numMaison != 18)&&(numMaison != 19)&&(numMaison != 20)&&(numMaison != 21)&&(numMaison != 22)&&(numMaison != 23)&&(numMaison != 24)&&(numMaison != 25)&&(numMaison != 26)&&(numMaison != 27)&&(numMaison != 28)){
                gotoligcol(40,100);
                printf("OUPS ! Veillez saisir le numero d une case du plateau!");
                Sleep(2500);
                efface3756();
                optionCase(nom, position, argent, nbP, nbM, nbH, s2, s3, s4, s5, s6);
            }

            if ( p[numMaison-1].Proprio = 2){
                strcpy(p[numMaison-1].proprio, banque);
            }
            else if( p[numMaison-1].Proprio = 1){
                strcpy(p[numMaison-1].proprio, p[numMaison-1].proprio);
            }

            if (strcmp(p[numMaison-1].proprio , nom) == 0){
            // si la propriete sur laquelle le joueur veut poser sa maison lui appartient bien
                if((numMaison != 1)&&(numMaison != 4)&&(numMaison != 6)&&(numMaison != 8)&&(numMaison != 12)&&(numMaison != 15)&&(numMaison != 17)&&(numMaison != 22)&&(numMaison != 24)&&(numMaison != 5)&&(numMaison != 11)&&(numMaison != 19)&&(numMaison != 26)){
                // si la case sur laquelle le joueur veux poser une maison est bien une propriete
                    if ((argent) >= (p[numMaison].prix)){
                    // si le joueur a assez d'argent pour acheter la maison
                        argent -= p[numMaison].prix;
                        strcpy(p[numMaison].proprio, nom);
                        gotoligcol(41,100);
                        printf("Transaction effectuee !\n");
                        gotoligcol(42,100);
                        printf("%s possede desormais une maison a %s\n", nom, p[numMaison-1].nom);
                        nbM++;
                        Sleep(3500);
                        efface3756();
                        optionCase(nom, position, argent, nbP, nbM, nbH, s2, s3, s4, s5, s6);
                    }
                    else{
                        gotoligcol(41,100);
                        printf("Vous n'avez pas assez d'argent pour effectuer cette transaction !\n");
                        Sleep(2500);
                        efface3756();
                        optionCase(nom, position, argent, nbP, nbM, nbH, s2, s3, s4, s5, s6);
                    }
                }
                else {
                    gotoligcol(41,100);
                    printf("Vous ne pouvez pas acheter de maison sur cette case");
                    gotoligcol(42,100);
                    printf("car ce n'est pas une propriete");
                    Sleep(3500);
                    efface3756();
                    optionCase(nom, position, argent, nbP, nbM, nbH, s2, s3, s4, s5, s6);
                }
            }
            else{
                gotoligcol(41,100);
                printf("Vous ne pouvez pas acheter de maison sur cette propriete");
                gotoligcol(42,100);
                printf("car elle ne vous appartient pas");
                Sleep(3500);
                efface3756();
                optionCase(nom, position, argent, nbP, nbM, nbH, s2, s3, s4, s5, s6);
            }

        }

        /// ACHETER UN HOTEL //////////////////////////////////////////////////////////////////
        else if (choix == 4){
            gotoligcol(38,100);
            printf("Sur quel numero de case souhaitez vous placer l hotel?\n");
            fflush(stdin);
            gotoligcol(39,100);
            scanf("%d", &numHotel);
            while ( (numHotel != 1)&&(numHotel != 2)&&(numHotel != 3)&&(numHotel != 4)&&(numHotel != 5)&&(numHotel != 6)&&(numHotel != 7)&&(numHotel != 8)&&(numHotel != 9)&&(numHotel != 10)&&(numHotel != 11)&&(numHotel != 12)&&(numHotel != 13)&&(numHotel != 14)&&(numHotel != 15)&&(numHotel != 16)&&(numHotel != 17)&&(numHotel != 18)&&(numHotel != 19)&&(numHotel != 20)&&(numHotel != 21)&&(numHotel != 22)&&(numHotel != 23)&&(numHotel != 24)&&(numHotel != 25)&&(numHotel != 26)&&(numHotel != 27)&&(numHotel != 28)){
                gotoligcol(40,100);
                printf("OUPS ! Veillez saisir le numero d une case du plateau!");
                Sleep(2500);
                efface3756();
                optionCase(nom, position, argent, nbP, nbM, nbH, s2, s3, s4, s5, s6);
            }

            if ( p[numHotel-1].Proprio = 2){
                strcpy(p[numHotel-1].proprio, banque);
            }
            else if( p[numHotel-1].Proprio = 1){
                strcpy(p[numHotel-1].proprio, p[numHotel-1].proprio);
            }

            if (strcmp(p[numHotel-1].proprio , nom) == 0){
            // si la propriete sur laquelle le joueur veut poser sa maison lui appartient bien
                if((numHotel != 1)&&(numHotel != 4)&&(numHotel != 6)&&(numHotel != 8)&&(numHotel != 12)&&(numHotel != 15)&&(numHotel != 17)&&(numHotel != 22)&&(numHotel != 24)&&(numHotel != 5)&&(numHotel != 11)&&(numHotel != 19)&&(numHotel != 26)){
                // si la case sur laquelle le joueur veux poser une maison est bien une propriete
                    if (nbM ==4){
                    // si le joueur possede 4 maisons sur la propriete
                        if ((argent) >= (p[numHotel].prix)){
                        // si le joueur a assez d'argent pour acheter la maison
                            argent -= p[numHotel].prix;
                            strcpy(p[numHotel].proprio, nom);
                            gotoligcol(41,100);
                            printf("Transaction effectuee !\n");
                            gotoligcol(42,100);
                            printf("%s possede desormais un hotel a %s\n", nom, p[numHotel-1].nom);
                            gotoligcol(43,100);
                            printf("%s a donc rendu ses 4 maisons a %s\n", nom, p[numHotel-1].nom);
                            nbH++;
                            nbM = 0;
                            Sleep(3500);
                            efface3756();
                            optionCase(nom, position, argent, nbP, nbM, nbH, s2, s3, s4, s5, s6);
                        }
                        else{
                            gotoligcol(41,100);
                            printf("Vous n'avez pas assez d'argent pour effectuer cette transaction !\n");
                            Sleep(2500);
                            efface3756();
                            optionCase(nom, position, argent, nbP, nbM, nbH, s2, s3, s4, s5, s6);
                        }
                    }
                    else {
                        gotoligcol(41,100);
                        printf("Vous ne pouvez pas acheter d hotel sur cette propriete");
                        gotoligcol(42,100);
                        printf("car il faut posseder 4 maisons pour les echanger contre un hotel");
                        Sleep(3500);
                        efface3756();
                        optionCase(nom, position, argent, nbP, nbM, nbH, s2, s3, s4, s5, s6);
                    }
                }
                else {
                    gotoligcol(41,100);
                    printf("Vous ne pouvez pas acheter d hotel sur cette case");
                    gotoligcol(42,100);
                    printf("car ce n'est pas une propriete");
                    Sleep(3500);
                    efface3756();
                    optionCase(nom, position, argent, nbP, nbM, nbH, s2, s3, s4, s5, s6);
                }
            }
            else{
                gotoligcol(41,100);
                printf("Vous ne pouvez pas acheter d hotel sur cette propriete");
                gotoligcol(42,100);
                printf("car elle ne vous appartient pas");
                Sleep(3500);
                efface3756();
                optionCase(nom, position, argent, nbP, nbM, nbH, s2, s3, s4, s5, s6);
            }

        }
        /// HYPOTHEQUER UNE PROPRIETE /////////////////////////////////////////////////////////
        else if (choix == 5){

            int numH;
            gotoligcol(38,100);
            printf("Quelle propriete souhaitez vous hypothequer ?");
            gotoligcol(39,100);
            fflush(stdin);
            scanf("%d", &numH);
            gotoligcol(40,100);
            printf("proprietaire actuel: %s", p[numH-1].proprio);

            if ( p[numH-1].Proprio = 2){
                strcpy(p[numH-1].proprio, banque);
            }
            else if( p[numH-1].Proprio = 1){
                strcpy(p[numH-1].proprio, p[numH-1].proprio);
            }

            if (strcmp(p[numH-1].proprio , nom) == 0){
            // si la propriete que le joueur veut hypothequer lui appartient bien
                if((numH!= 1)&&(numH != 4)&&(numH != 6)&&(numH != 8)&&(numH != 12)&&(numH != 15)&&(numH != 17)&&(numH != 22)&&(numH != 24)){
                // si la case que le joueur veux hypothequer n'est pas une case speciale ( case chance, depart, prison...)
                    if (p[numH-1].hypo == false){
                    //si la propriété n'a pas déja été hypothéquée
                        if (p[numH-1].nbMaison == 0){
                        //si il n'y a pas de maison sur la propriete que le joueur veut hypothequer
                            if (p[numH-1].nbHotel == 0){
                            //si il n'y a pas d'hotel sur la propriete que le joueur veut hypothequer
                            p[numH-1].hypo=true;
                            gotoligcol(41, 100);
                            printf("La propriete %s est hypothequee,", p[numH-1].nom);
                            gotoligcol(42, 100);
                            printf("vous recevez %d du Banquier!",p[numH-1].hypotheque);
                            argent += p[numH-1].hypotheque;
                            Sleep(3500);
                            efface3755();
                            optionCase(nom, position, argent, nbP, nbM, nbH, s2, s3, s4, s5, s6);
                            }
                            else {
                            gotoligcol(41, 100);
                            printf("Vous ne pouvez pas hypothequer cette propriete");
                            gotoligcol(42, 100);
                            printf("car il y a un hotel dessus");
                            gotoligcol(43,100);
                            printf("Souhaitez vous vendre l hotel sur la propriete?");
                            gotoligcol(44,100);
                            printf("Tapez 1 pour vendre votre hotel et 2 pour ne pas le vendre");
                            gotoligcol(45,100);
                            scanf("%d", &choixHypoH);
                            if (choixHypoH == 1)
                            {
                                argent -= (p[numH-1].hotel);
                                int euros=p[numH-1].hotel;
                                cptHotel-= 1;
                                gotoligcol(46,100);
                                printf("Vous vendez alors votre hotel et recevez %d euros", euros);

                            }
                            if (choixHypoH == 2)
                            {
                                gotoligcol(46,100);
                                printf("Vous avez choisi de ne pas vendre vos maisons");
                            }
                            Sleep(2500);
                            efface3755();
                            optionCase(nom, position, argent, nbP, nbM, nbH, s2, s3, s4, s5, s6);
                            }
                        }
                        else{
                            gotoligcol(41, 100);
                            printf("Vous ne pouvez pas hypothequer cette propriete");
                            gotoligcol(42, 100);
                            printf("car il y a une maison dessus");
                            gotoligcol(43,100);
                            printf("Souhaitez vous vendre les maisons sur la propriete ?");
                            gotoligcol(44,100);
                            printf("Tapez 1 pour vendre vos maisons et 2 pour ne pas les vendre");
                            gotoligcol(45,100);
                            scanf("%d", &choixHypoM);
                            if (choixHypoM == 1)
                            {
                                argent -= (p[numH-1].nbMaison)*((p[numH-1].maison)/2);
                                int euros=(p[numH-1].nbMaison)*((p[numH-1].maison)/2);
                                cptMaison-=p[numH-1].nbMaison;
                                gotoligcol(46,100);
                                printf("Vous vendez alors vos maisons et recevez %d euros", euros);

                            }
                            if (choixHypoM == 2)
                            {
                                gotoligcol(46,100);
                                printf("Vous avez choisi de ne pas vendre vos maisons");
                            }
                            Sleep(2500);
                            efface3755();
                            optionCase(nom, position, argent, nbP, nbM, nbH, s2, s3, s4, s5, s6);
                        }
                    }
                    else{
                        gotoligcol(41, 100);
                        printf("Vous ne pouvez pas hypothequer cette propriete");
                        gotoligcol(42, 100);
                        printf("car elle a deja ete hypothequee");
                        Sleep(2500);
                        efface3755();
                        optionCase(nom, position, argent, nbP, nbM, nbH, s2, s3, s4, s5, s6);
                    }
                }
                else{
                    gotoligcol(41, 100);
                    printf("Vous ne pouvez pas hypothequer cette propriete");
                    gotoligcol(42, 100);
                    printf("car ce n'est ni une propriete ni une gare");
                    Sleep(2500);
                    efface3755();
                    optionCase(nom, position, argent, nbP, nbM, nbH, s2, s3, s4, s5, s6);
                }
            }
            else{
                gotoligcol(41, 100);
                printf("Vous ne pouvez pas hypothequer cette propriete");
                gotoligcol(42, 100);
                printf("car elle ne vous appartient pas");
                Sleep(2500);
                efface3755();
                optionCase(nom, position, argent, nbP, nbM, nbH, s2, s3, s4, s5, s6);
            }

        }
        /// CONSULTER MES INFORMATIONS ////////////////////////////////////////////////////////
        else if (choix == 6){
            gotoligcol(41,100);
            printf("************************** VOS INFORMATIONS *********************\n", voir);
            gotoligcol(42,100);
            printf("nom: %s", nom);
            gotoligcol(43,100);
            printf("argent : %d", argent);
            gotoligcol(44,100);
            printf("positions : %d", position);
            gotoligcol(45,100);
            printf("nombre de proprietes : %d", nbP);
            gotoligcol(46,100);
            printf("nombre de maisons : %d", nbM);
            gotoligcol(47,100);
            printf("nombre d'hotels: %d", nbH);
            gotoligcol(48,100);
            printf("*****************************************************************\n");
            Sleep (6000);
            efface3756();
            optionCase(nom, position, argent, nbP, nbM, nbH, s2, s3, s4, s5, s6);
        }
        /// QUITTER LE MENU JOUEUR ////////////////////////////////////////////////////////////
        else if (choix == 7){

        }
        /// QUITTER LA PARTIE ET ACCEDER AU MENU PRINCIPAL ////////////////////////////////////
        else if (choix == 8){

        }




        else{
            printf("ERREUR\n");

        }
    }
