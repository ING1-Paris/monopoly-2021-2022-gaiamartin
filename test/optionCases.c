#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include <stdbool.h>

#define bool unsigned int
#define true 1
#define false 0

 //DECLARATION STRUCTURES DES CASES DU JEU
   typedef struct cases
    {
        int num;
        char nom[50];
        int prix;
        int hypotheque;
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

    }propriete;

    propriete p[27];

int optionCase( char nom[8], int position, int argent, char s2[8],char s3[8],char s4[8],char s5[8],char s6[8]){
    int k;
    k = position;
    int achatP;
    int achatM;
    char banque = "banque";

    //case 1
    p[0].num=1;
    strcpy(p[0].nom, "Case depart");
    p[0].prix=0;

    //case 2
    p[1].num=2;
    strcpy(p[1].nom, "Avenue du Marechal Gueule de Bois");
    p[1].prix=60;
    p[1].hypotheque=30;
    strcpy(p[1].proprio, "Banque");
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

    //case 3
    p[2].num=3;
    strcpy(p[2].nom, "Boulevard des Millesimes");
    p[2].prix=60;
    p[2].hypotheque=30;
    strcpy(p[2].proprio, "Banque");
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

    //case 4;
    p[3].num=4;
    strcpy(p[3].nom, "Impot sur le revenu");

    //case 5
    p[4].num=5;
    strcpy(p[4].nom, "Gare de la sante");
    p[4].prix=200;
    p[4].hypotheque=100;
    strcpy(p[4].proprio, "Banque");
    p[4].hypo=false;

    //case 6
    p[5].num=6;
    strcpy(p[5].nom, "Chance");

    //case 7
    p[6].num=7;
    strcpy(p[6].nom, "Allee du Champagne");
    p[6].prix=120;
    p[6].hypotheque=60;
    strcpy(p[6].proprio, "Banque");
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

    //case 8
    p[7].num=8;
    strcpy(p[7].nom, "Aller en prison");

    //case 9
    p[8].num=9;
    strcpy(p[8].nom, "Avenue de la Bonaventure");
    p[8].prix=140;
    p[8].hypotheque=70;
    strcpy(p[8].proprio, "Banque");
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

    //case 10
    p[9].num=10;
    strcpy(p[9].nom, "Passage du Bisou de Minuit");
    p[9].prix=160;
    p[9].hypotheque=80;
    strcpy(p[9].proprio, "Banque");
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

    //case 11
    p[10].num=11;
    strcpy(p[10].nom, "Gare de l amour");
    p[10].prix=200;
    p[10].hypotheque=100;
    strcpy(p[10].proprio, "Banque");
    p[10].hypo=false;


    //case 12
    p[11].num=12;
    strcpy(p[11].nom, "Caisse de communaute");

    //case 13
    p[14].num=13;
    strcpy(p[12].nom, "Boulevard des Paillettes");
    p[12].prix=180;
    p[12].hypotheque=90;
    strcpy(p[12].proprio, "Banque");
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

    //case 14
    p[13].num=14;
    strcpy(p[13].nom, "Rue des meilleurs voeux");
    p[13].prix=200;
    p[13].hypotheque=100;
    strcpy(p[13].proprio, "Banque");
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

    //case 15
    p[14].num=15;
    strcpy(p[14].nom, "Stationnement gratuit");

    //case 16
    p[15].num=16;
    strcpy(p[15].nom, "Boulevard des Resolutions");
    p[15].prix=220;
    p[15].hypotheque=110;
    strcpy(p[15].proprio, "Banque");
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

    //case 17
    p[16].num=17;
    strcpy(p[16].nom, "Chance");

    //case 18
    p[17].num=18;
    strcpy(p[17].nom, "Rue du Regime");
    p[17].prix=240;
    p[17].hypotheque=110;
    strcpy(p[17].proprio, "Banque");
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

    //case 19
    p[18].num=19;
    strcpy(p[18].nom, "Gare de la fortune");
    p[18].prix=200;
    p[18].hypotheque=100;
    strcpy(p[18].proprio, "Banque");
    p[18].hypo=false;

    //case 20
    p[19].num=20;
    strcpy(p[19].nom, "Allee du Changement");
    p[19].prix=260;
    p[19].hypotheque=130;
    strcpy(p[19].proprio, "Banque");
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

    //case 21
    p[20].num=21;
    strcpy(p[20].nom, "Chemin de la sobriete");
    p[20].prix=280;
    p[20].hypotheque=140;
    strcpy(p[20].proprio, "Banque");
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

    //case 22
    p[21].num=22;
    strcpy(p[21].nom, "Prison");

    //case 23
    p[22].num=23;
    strcpy(p[22].nom, "Passage de la Nouvelle Annee");
    p[22].prix=300;
    p[22].hypotheque=150;
    strcpy(p[24].proprio, "Banque");
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

    //case 24
    p[23].num=24;
    strcpy(p[23].nom, "Caisse de communaute");

    //case 25
    p[24].num=25;
    strcpy(p[24].nom, "Boulevard du Reveillon");
    p[24].prix=320;
    p[24].hypotheque=160;
    strcpy(p[24].proprio, "Banque");
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

    //case 26
    p[25].num=26;
    strcpy(p[25].nom, "Gare de la chance");
    p[25].prix=200;
    p[25].hypotheque=100;
    strcpy(p[25].proprio, "Banque");
    p[25].hypo=false;


    //case 27
    p[26].num=27;
    strcpy(p[26].nom, "Rue du Decompte");
    p[26].prix=350;
    p[26].hypotheque=125;
    strcpy(p[26].proprio, "Banque");
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

    //case 28
    p[27].num=28;
    strcpy(p[27].nom, "Rue du Trente et Un");
    p[27].prix=400;
    p[27].hypotheque=200;
    strcpy(p[27].proprio, "Banque");
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

////////////////////////////////////////////////////////////////
/*typedef struct joueur{
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

struct joueur j1, j2, j3, j4, j5, j6, s2, s3, s4, s5, s6 ;*/

    int choix1;
    int voir;
    int n;
    int numMaison;
    printf("\n");
    printf("\n=====| OPTIONS CASES |=====\n"
           "Que souhaitez vous faire ?\n"
           "1/ Consulter les proprietes d une case\n"
           "2/ Acheter une propriete\n"
           "3/ Acheter une maison\n"
           "4/ Acheter un hotel\n"
           "5/ Hypothequer une propriete\n"
           "6/ Retourner a la partie\n");

    fflush(stdin);
    scanf("%d", &choix1);
    int choix2;

    /*switch(choix1)
    {
    case(1):*/
    if (choix1 == 1){
        printf("Quelle case souhaitez vous consulter?\n");
        fflush(stdin);
        scanf("%d", &voir);
        if ((voir == 1)||(voir == 4)||(voir == 6)||(voir == 8)||(voir == 12)||(voir == 15)||(voir == 17)||(voir == 22)||(voir == 24))
        {
            printf("nom: %s\n", p[voir-1].nom);
        }
        else if ((voir == 2)||(voir == 3)||(voir == 7)||(voir == 9)||(voir == 10)||(voir == 13)||(voir == 14)||(voir == 16)||(voir == 18)||(voir == 20)||(voir == 21)||(voir == 23)||(voir == 25)||(voir == 27)||(voir == 28))
        {
            printf("nom: %s\n", p[voir-1].nom);
            printf("prix: %d\n", p[voir-1].prix);
            printf("hypotheque: %d\n", p[voir-1].hypotheque);
            printf("proprietaire: %s\n", p[voir-1].proprio);
            printf("prix maison a l unite: %d\n", p[voir-1].maison);
            printf("prix hotel a l unite: %d\n", p[voir-1].hotel);
            printf("loyer 0 maisons: %d\n", p[voir-1].loyer0M);
            printf("loyer 1 maison: %d\n", p[voir-1].loyer1M);
            printf("loyer 2 maisons: %d\n", p[voir-1].loyer2M);
            printf("loyer 3 maisons: %d\n", p[voir-1].loyer3M);
            printf("loyer 4 maisons: %d\n", p[voir-1].loyer4M);
            printf("loyer 1 hotel: %d\n", p[voir-1].loyer1H);
        }


        else if ((voir == 5)||(voir == 11)||(voir == 19)||(voir == 26))
        {
            printf("nom: %s\n", p[voir-1].nom);
            printf("prix: %d\n", p[voir-1].prix);
            printf("hypotheque: %d\n", p[voir-1].hypotheque);
            printf("proprietaire: %s\n", p[voir-1].proprio);
        }

        else
        {
            printf("ERREUR : CETTE CASE N EXISTE PAS");
            int optionCase( nom, position, argent);
        }
        optionCase(nom, position, argent, s2, s3, s4, s5, s6 );
        //break;
        }
        //case(2):
        if (choix1 ==2){
            printf("Quelle case souhaitez vous acheter?\n");
            fflush(stdin);
            scanf("%d", &achatP);
            printf("%d", argent);
            if ((p[achatP-1].num != 1)&&(p[achatP-1].num != 4)&&(p[achatP-1].num != 6)&&(p[achatP-1].num != 8)&&(p[achatP-1].num != 12)&&(p[achatP-1].num != 15)&&(p[achatP-1].num != 17)&&(p[achatP-1].num != 22)&&(p[achatP-1].num != 24))
            {
                if ((p[achatP-1].proprio != s2)&&(p[achatP-1].proprio != s3)&&(p[achatP-1].proprio != s4)&&(p[achatP-1].proprio != s5)&&(p[achatP-1].proprio != s6))
                {
                    if ((argent) >= (p[achatP-1].prix))
                    {
                        printf("%s\n", p[achatP-1].proprio);
                        argent -= p[achatP-1].prix;
                        strcpy(p[achatP-1].proprio, nom);
                        printf("Transaction effectuee !\n");
                        printf("%s possede desormais %s\n", nom, p[achatP-1].nom);
                        printf("%s\n", p[achatP-1].proprio);
                        strcpy(p[achatP-1].proprio, nom);
                        strcpy(banque, nom);
                    }
                    else
                        printf("Vous n'avez pas assez d'argent pour effectuer cette transaction !\n");
                }
                else
                    printf("Vous ne pouvez pas acheter cette propriete car elle appartient deja a un autre joueur");
            }
            else
                printf("    Vous ne pouvez pas acheter cette case car il ne s'agit pas d'une propriete");

            optionCase(nom, position, argent, s2, s3, s4, s5, s6);
        //break;
        }
        //case(3):
        if (choix1 == 3){
            printf("Sur quel numero de case souhaitez vous placer la maison?\n");
            fflush(stdin);
            scanf("%d", &numMaison);
            printf("%s\n", p[k-1].proprio);
            if (p[k].proprio == nom)
            {
                if ((argent) >= (p[numMaison].prix)){
                    argent -= p[numMaison].prix;
                    strcpy(p[numMaison].proprio, nom);
                    printf("Transaction effectuee !\n");
                    printf("%s possede desormais %s\n", nom, p[numMaison].nom);
                }
                else
                {
                    printf("Vous n'avez pas assez d'argent pour effectuer cette transaction !\n");
                    return 0;
                }
            }
            else
                printf("Vous ne pouvez pas acheter de maison sur cette propriete car elle ne vous appartient pas\n");
        optionCase(nom, position, argent, s2, s3, s4, s5, s6);
        //break;
        }
        /*case(4):
            //
        break;
        case(5):
            printf("Quelle case souhaitez vous hypothequer?\n");
            fflush(stdin);
            scanf("%d", &choix2);
            //fctnHypotheque(nom, position, argent, nbJoueurs);
            optionCase(j2.nom, j2.position, j2.argent);
        break;
        case(6):
           // fctnJeu(nom, position, argent, nbJoueurs);
        break;
        default:
            printf("ERREUR\n");
            optionCase(j2.nom, j2.position, j2.argent);
    }*/
}
