#ifndef BIBLI_MONOPOLY_H_INCLUDED
#define BIBLI_MONOPOLY_H_INCLUDED

int case1();
int case4();
void carteChance(int argentJ, int positionJ, int nbJoueurs);
int fctnD2(int d2);
int fctnD1(int d1);
int fctnDD( char nom[8], int position, int argent, int nbJoueurs);
void grille();
void gotoligcol(int lig, int col);
int fctnJeu(  char nom[8], int position, int argent, int nbJoueurs, int nbP, int nbM, int nbH, char s2[8],char s3[8],char s4[8],char s5[8],char s6[8]);
int premierTour( char nom[8], int position, int argent, int nbJoueurs, int nbP, int nbM, int nbH, char s2[8],char s3[8],char s4[8],char s5[8],char s6[8]);
int pageDeGarde();
int menu();
int fctnBlindageNoms(char nom [8], int i);
int Prison(char nom[8], int position, int argent, int nbJoueurs );
int optionCase( char nom[8], int position, int argent, int nbP, int nbM, int nbH, char s2[8],char s3[8],char s4[8],char s5[8],char s6[8]);
void efface3756();


#endif // BIBLI_MONOPOLY_H_INCLUDED
