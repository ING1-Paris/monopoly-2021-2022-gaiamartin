#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void carteChance(int argentJ, int positionJ, int nbJoueurs){

       int numeroCarteChance = 0;
       numeroCarteChance =1+rand()%16;

       if (numeroCarteChance == 1){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *   C A R T E   C H A N C E  *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *      MAMIE EST MORTE...    *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *        VOUS TOUCHEZ        *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *    150 euros D'HERITAGE    *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            argentJ=argentJ+150;
       }
       if (numeroCarteChance == 2){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *   C A R T E   C H A N C E  *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *         RENDEZ-VOUS        *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *  BOULEVARD DES PAILLETTES  *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                * POUR UN VERRE EN TERRASSE !*\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
           // positionJ =  ;// Case Boulevard des Paillettes
       }
       if (numeroCarteChance == 3){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *   C A R T E   C H A N C E  *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *     BON ANNIVERSAIRE !!!   *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *     CHAQUE JOUEUR DOIT     *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *    VOUS DONNER 20 euros    *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            argentJ = argentJ+((nbJoueurs-1)*20);
            //Faire perdre 20 euros aux autres joueurs !!
       }
       if (numeroCarteChance == 4){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *   C A R T E   C H A N C E  *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *  VOUS TOUCHEZ VOTRE BONUS  *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *   DE L'ANNEE D'UNE VALEUR  *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *        DE 200 euros !      *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            argentJ=argentJ+200;
       }
       if (numeroCarteChance == 5){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *   C A R T E   C H A N C E  *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *   VOUS PARTEZ EN VOYAGE !  *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *      RENDEZ-VOUS DANS      *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *   LA GARE LA PLUS PROCHE   *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
           /* if (1 <=positionJ<= 7){
                positionJ = gare1;   //case 5
            }
            if (8 <= positionJ <= 14){
                positionJ = gare2;  // case 11
            }
            if (15 <= positionJ <= 21){
                positionJ = gare3;  //case19
            }
            if (22 <= positionJ <= 28){
                positionJ = gare4;  //case 26
            }*/
       }

       if (numeroCarteChance == 6){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *   C A R T E   C H A N C E  *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *      ALCOOL AU VOLANT      *\n");
            printf("                *                            *\n");
            printf("                *       LE SOIR DU 31 !      *\n");
            printf("                *                            *\n");
            printf("                *    SOUDOYEZ LE POLICIER    *\n");
            printf("                *                            *\n");
            printf("                *      DE 40 euros POUR      *\n");
            printf("                *                            *\n");
            printf("                *    GARDER VOTRE PERMIS !   *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            argentJ=argentJ-40;
       }
        if (numeroCarteChance == 7){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *   C A R T E   C H A N C E  *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *  FACTURE EDF DE DECEMBRE : *\n");
            printf("                *                            *\n");
            printf("                *         60 euros !!!       *\n");
            printf("                *                            *\n");
            printf("                *    FALLAIT PAS INSTALLER   *\n");
            printf("                *                            *\n");
            printf("                *    AUTANT DE DECORATIONS   *\n");
            printf("                *                            *\n");
            printf("                *          DE NOEL!          *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            argentJ = argentJ - 60;
       }
       if (numeroCarteChance == 8){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *   C A R T E   C H A N C E  *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *BONNE RESOLUTION DE L'ANNEE!*\n");
            printf("                *                            *\n");
            printf("                * VOUS PRENEZ UN ABONNEMENT  *\n");
            printf("                *                            *\n");
            printf("                *     A LA SALLE DE SPORT    *\n");
            printf("                *                            *\n");
            printf("                *     ET PAYEZ 75 euros...   *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            argentJ=argentJ-75;
       }
       if (numeroCarteChance == 9){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *   C A R T E   C H A N C E  *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *  VOUS VENEZ D'ETRE DEBITE  *\n");
            printf("                *                            *\n");
            printf("                *    DES 80 euros DEPENSES   *\n");
            printf("                *                            *\n");
            printf("                * EN BOITE SAMEDI DERNIER... *\n");
            printf("                *                            *\n");
            printf("                *          OUI OUI...        *\n");
            printf("                *                            *\n");
            printf("                *      C'ETAIT BIEN VOUS     *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            argentJ=argentJ-80;
       }
       if (numeroCarteChance == 10){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *   C A R T E   C H A N C E  *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *    VOS COMPTES OFFSHORE    *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *     ONT ETE DECOUVERTS,    *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *  TROP TARD POUR S'ENFUIR,  *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *    DIRECTION LA PRISON !   *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
           // positionJ = prison ;   // case 22
       }
       if (numeroCarteChance == 11){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *   C A R T E   C H A N C E  *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *       VOUS ETES LIBERE     *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *          DE PRISON         *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *    POUR BONNE CONDUITE !   *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            // a garder et a utiliserulterieurement
       }
       if (numeroCarteChance == 12){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *   C A R T E   C H A N C E  *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *    VOTRE ENFANT RECLAME    *\n");
            printf("                *                            *\n");
            printf("                *   UNE CONSOLE POUR NOEL :  *\n");
            printf("                *                            *\n");
            printf("                *      DEPENSEZ 30 euros     *\n");
            printf("                *                            *\n");
            printf("                *   AVANT QU'IL NE SE METTE  *\n");
            printf("                *                            *\n");
            printf("                *         A CRIER !!!        *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            argentJ=argentJ-30;
       }
       if (numeroCarteChance == 13){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *   C A R T E   C H A N C E  *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *    VOUS AVEZ FAIT TOMBER   *\n");
            printf("                *                            *\n");
            printf("                *    VOTRE PORTE-FEUILLE !   *\n");
            printf("                *                            *\n");
            printf("                *      RECULEZ DE 3 CASES    *\n");
            printf("                *                            *\n");
            printf("                *      POUR LE RETROUVER !   *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            positionJ= positionJ -3;
       }
       if (numeroCarteChance == 14){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *   C A R T E   C H A N C E  *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *   VOUS AVEZ FAIT BEAUCOUP  *\n");
            printf("                *                            *\n");
            printf("                *   D'HEURES SUP CE MOIS-CI  *\n");
            printf("                *                            *\n");
            printf("                *      TOUCHEZ UE PRIME      *\n");
            printf("                *                            *\n");
            printf("                *         DE 80 euros        *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            argentJ=argentJ+80;
        }
       if (numeroCarteChance == 15){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *  C A R T E   C H A N C E   *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *       PAPI EST TOMBE       *\n");
            printf("                *                            *\n");
            printf("                *     DANS LES ESCALIERS !   *\n");
            printf("                *                            *\n");
            printf("                *  FRAIS D'HOSPITALISATION : *\n");
            printf("                *                            *\n");
            printf("                *          65 euros...       *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            argentJ = argentJ - 65;
       }
       if (numeroCarteChance == 16){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *   C A R T E   C H A N C E  *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *             HOP !          *\n");
            printf("                *                            *\n");
            printf("                *    UN BILLET DE 50 euros   *\n");
            printf("                *                            *\n");
            printf("                *      TROUVE PAR TERRE :    *\n");
            printf("                *                            *\n");
            printf("                *       VOUS LE GARDEZ,      *\n");
            printf("                *                            *\n");
            printf("                *      BIEN EVIDEMMENT...    *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            argentJ = argentJ + 50;
       }

        return 0;
}



void carteCommunaute(int argentJ, int positionJ, int nbJoueurs){

       int numeroCarteCommunaute = 0; // Variable cartes communaute
       numeroCarteCommunaute =1+rand()%16; // Tire une carte au hazard

       if (numeroCarteCommunaute == 1){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *       C A R T E   D E      *\n");
            printf("                *      C O M M U N A U T E   *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *     VOUS TOUCHEZ ENFIN     *\n");
            printf("                *                            *\n");
            printf("                *       VOS DIVIDENDES       *\n");
            printf("                *                            *\n");
            printf("                *        DE 100 euros !      *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            argentJ = argentJ + 100 ;
       }
       if (numeroCarteCommunaute == 2){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *       C A R T E   D E      *\n");
            printf("                *      C O M M U N A U T E   *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *    EVITEZ DE RATER VOTRE   *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *   TRAIN EN VOUS DEPLACANT  *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                * VERS LA GARE LA PLUS PROCHE*\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            if (1 <=positionJ<= 7){
                positionJ = 5;   // Gare de la sante
            }
            if (8 <= positionJ <= 14){
                positionJ = 11;  // Gare de l'amour
            }
            if (15 <= positionJ <= 21){
                positionJ = 19;  // Gare de la fortune
            }
            if (22 <= positionJ <= 28){
                positionJ = 26;  // Gare de la chance
            }
       }
       if (numeroCarteCommunaute == 3){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *       C A R T E   D E      *\n");
            printf("                *      C O M M U N A U T E   *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *       C'EST NOEL !!!       *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *     RECEVEZ UN CHEQUE      *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *    DE MAMIE DE 80 euros    *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *     AH ! ET UNE LETTRE.    *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            argentJ = argentJ + 80 ;
       }
       if (numeroCarteCommunaute == 4){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *       C A R T E   D E      *\n");
            printf("                *      C O M M U N A U T E   *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *  COUP DUR : IL EST TEMPS   *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *  DE PAYER LES IMPOTS, VOUS *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *       PERDEZ 120 euros     *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            argentJ = argentJ - 120;
       }
       if (numeroCarteCommunaute == 5){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *       C A R T E   D E      *\n");
            printf("                *      C O M M U N A U T E   *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *  VOUS ETES EN RETARD POUR  *\n");
            printf("                *                            *\n");
            printf("                *    VOTRE DATE AU PASSAGE   *\n");
            printf("                *                            *\n");
            printf("                *     DU BISOUS-DE-MINUIT,   *\n");
            printf("                *                            *\n");
            printf("                *    RENDEZ-VOUS Y AU PLUS   *\n");
            printf("                *                            *\n");
            printf("                *     VITE POUR AVOIR UNE    *\n");
            printf("                *                            *\n");
            printf("                *   UNE CHANCE DE CONCLURE   *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            positionJ = 10; // Case passage du bisous-de-minuit
       }

       if (numeroCarteCommunaute == 6){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *       C A R T E   D E      *\n");
            printf("                *      C O M M U N A U T E   *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *     VOLER DES BONBONS      *\n");
            printf("                *                            *\n");
            printf("                *   DANS UNE BOULANGERIE...  *\n");
            printf("                *                            *\n");
            printf("                *         SERIEUX ?          *\n");
            printf("                *                            *\n");
            printf("                *    DIRECTION LA PRISON !   *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            positionJ = 22 ;   // case prison
       }
        if (numeroCarteCommunaute == 7){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *       C A R T E   D E      *\n");
            printf("                *      C O M M U N A U T E   *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *           BIEN VU !        *\n");
            printf("                *                            *\n");
            printf("                *       VOUS AVEZ GAGNE      *\n");
            printf("                *                            *\n");
            printf("                *        A LA LOTTERIE,      *\n");
            printf("                *                            *\n");
            printf("                *    RECEVEZ UN CHEQUE DE    *\n");
            printf("                *                            *\n");
            printf("                *         350 euros !        *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            argentJ = argentJ + 350 ;
       }
       if (numeroCarteCommunaute == 8){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *       C A R T E   D E      *\n");
            printf("                *      C O M M U N A U T E   *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *     LA FASHIONISTA QUE     *\n");
            printf("                *                            *\n");
            printf("                *    VOUS ETES S'EST FAIT    *\n");
            printf("                *                            *\n");
            printf("                *     PLAISIR CE MOIS-CI,    *\n");
            printf("                *                            *\n");
            printf("                *   VOTRE COMPTE EN BANQUE   *\n");
            printf("                *                            *\n");
            printf("                *  APPRECIE MOINS EN PERDANT *\n");
            printf("                *                            *\n");
            printf("                *          115 euros         *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            argentJ = argentJ - 115 ;
       }
       if (numeroCarteCommunaute == 9){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *       C A R T E   D E      *\n");
            printf("                *      C O M M U N A U T E   *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *      VOS CONTACTS ONT      *\n");
            printf("                *                            *\n");
            printf("                *     JOUES ET VOUS ETES     *\n");
            printf("                *                            *\n");
            printf("                *     LIBERES DE PRISON !    *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            // A utiliser ulterieurement
       }
       if (numeroCarteCommunaute == 10){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *       C A R T E   D E      *\n");
            printf("                *      C O M M U N A U T E   *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *           VITE !           *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                * RENDEZ-VOUS RUE DU DECOMPTE*\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *      POUR LE REVEILLON     *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            positionJ = 27 ;
       }
       if (numeroCarteCommunaute == 11){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *       C A R T E   D E      *\n");
            printf("                *      C O M M U N A U T E   *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *     RADIN QUE VOUS ETES,   *\n");
            printf("                *                            *\n");
            printf("                *      VOUS VOUS FAITES      *\n");
            printf("                *                            *\n");
            printf("                *   REMBOURSER VOTRE TENUE   *\n");
            printf("                *                            *\n");
            printf("                *           DU 31,           *\n");
            printf("                *                            *\n");
            printf("                *  VOUS RECUPEREZ 25 euros ! *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            argentJ = argentJ + 25 ;
       }
       if (numeroCarteCommunaute == 12){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *       C A R T E   D E      *\n");
            printf("                *      C O M M U N A U T E   *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *    VOTRE PARTICIPATIOM     *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *     A UNE TELEREALITE      *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *  VOUS RAPPORTE 200 euros ! *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            argentJ = argentJ + 200 ;
       }
       if (numeroCarteCommunaute == 13){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *       C A R T E   D E      *\n");
            printf("                *      C O M M U N A U T E   *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *   A FAIRE L'INFLUENCEUR    *\n");
            printf("                *                            *\n");
            printf("                *   AU BORD DE LA PISCINE,   *\n");
            printf("                *                            *\n");
            printf("                *    VOTRE TELEPHONE FINI    *\n");
            printf("                *                            *\n");
            printf("                *          A L'EAU !         *\n");
            printf("                *                            *\n");
            printf("                *    PAYEZ 120 euros POUR    *\n");
            printf("                *                            *\n");
            printf("                *         LE REMPLACER       *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            argentJ = argentJ - 120 ;
       }
       if (numeroCarteCommunaute == 14){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *       C A R T E   D E      *\n");
            printf("                *      C O M M U N A U T E   *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *    TESTEZ VOS NOUVELLES    *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *     BASKETS ET AVANCEZ     *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *        DE 5 CASES !        *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            positionJ = positionJ + 5 ;
        }
       if (numeroCarteCommunaute == 15){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *       C A R T E   D E      *\n");
            printf("                *      C O M M U N A U T E   *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *    ACCIDENT DE VOITURE !   *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *       PAYEZ 50 euros       *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *       DE REPARATION,       *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                * ON FREINE DEVANT UN ARBRE..*\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            argentJ = argentJ - 50 ;
       }
       if (numeroCarteCommunaute == 16){
            printf("\n                ******************************\n");
            printf("                *                            *\n");
            printf("                *       C A R T E   D E      *\n");
            printf("                *      C O M M U N A U T E   *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                * VOUS CASSEZ VOTRE TIRELIRE *\n");
            printf("                *                            *\n");
            printf("                *     ET TROUVEZ 10 euros,   *\n");
            printf("                *                            *\n");
            printf("                *       ON OUBLIE PAS        *\n");
            printf("                *                            *\n");
            printf("                *   LES PETITES ECONOMIES !  *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                *                            *\n");
            printf("                ******************************\n");
            argentJ = argentJ + 10;
       }
       
       return 0;
}
