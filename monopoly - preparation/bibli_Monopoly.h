#ifndef BIBLI_MONOPOLY_H_INCLUDED
#define BIBLI_MONOPOLY_H_INCLUDED

int case1();
int case4();
void carteChance(int argentJ, int positionJ, int nbJoueurs);
int fctnD2(int d2);
int fctnD1(int d1);
int fctnDD(char nom[14]);
void grille();
void gotoligcol(int lig, int col);
void fctnJeu( char nom[14], int position, int argent, int nbJoueurs);
void premierTour( char nom[14], int position, int argent, int nbJoueurs);
int pageDeGarde();
int menu();


#endif // BIBLI_MONOPOLY_H_INCLUDED
