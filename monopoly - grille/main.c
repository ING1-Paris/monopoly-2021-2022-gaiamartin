#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void gotoligcol( int lig, int col )
{
    COORD mycoord;
    mycoord.X = col;
    mycoord.Y = lig;
    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), mycoord );
}

void Color(int couleurDuTexte,int couleurDeFond)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}

int main()
{
    int i=0, j=0;
    gotoligcol(1,5);
    for (i=1; i<9; i++)
    {
        printf("%d", i);
        printf("         ");
    }
    gotoligcol(6,5);
    for (i=9; i<17; i++)
    {
        printf("%d", i);
        printf("        ");
    }
    gotoligcol(11,5);
    for (i=17; i<25; i++)
    {
        printf("%d", i);
        printf("        ");
    }
    gotoligcol(16,5);
    for (i=25; i<33; i++)
    {
        printf("%d", i);
        printf("        ");
    }
    for (i=0; i<9; i++)//afficher les 8 colonnes
    {
       for (j=1; j<20; j++)
        {
            gotoligcol(j, 0);
            printf("%c", 0xB3);
            gotoligcol(j, 10);
            printf("%c", 0xB3);
            gotoligcol(j, 20);
            printf("%c", 0xB3);
            gotoligcol(j, 30);
            printf("%c", 0xB3);
            gotoligcol(j, 40);
            printf("%c", 0xB3);
            gotoligcol(j, 50);
            printf("%c", 0xB3);
            gotoligcol(j, 60);
            printf("%c", 0xB3);
            gotoligcol(j, 70);
            printf("%c", 0xB3);
            gotoligcol(j, 80);
            printf("%c", 0xB3);
        }
    }
    gotoligcol(0,0);
    for (i=0; i<5; i++) //afficher les 4 lignes
    {
    printf("%c", 0xC3);
        for (j=0; j<79; j++)
        {
            printf("%c", 0xC4);
        }
    printf("%c", 0xB4);
    printf("\n\n\n\n\n");
    }
    gotoligcol(0,0);
    printf("%c", 0xDA);
    gotoligcol(0, 80);
    printf("%c", 0xBF);
    gotoligcol(20,0);
    printf("%c", 0xC0);
    gotoligcol(20, 80);
    printf("%c", 0xD9);
    gotoligcol(0, 10);//relier en haut
    printf("%c", 0xC2);
    gotoligcol(0, 20);
    printf("%c", 0xC2);
    gotoligcol(0, 30);
    printf("%c", 0xC2);
    gotoligcol(0, 40);
    printf("%c", 0xC2);
    gotoligcol(0, 50);
    printf("%c", 0xC2);
    gotoligcol(0, 60);
    printf("%c", 0xC2);
    gotoligcol(0, 70);
    printf("%c", 0xC2);
    gotoligcol(5, 10);//relier la 2e ligne
    printf("%c", 0xC5);
    gotoligcol(5, 20);
    printf("%c", 0xC5);
    gotoligcol(5, 30);
    printf("%c", 0xC5);
    gotoligcol(5, 40);
    printf("%c", 0xC5);
    gotoligcol(5, 50);
    printf("%c", 0xC5);
    gotoligcol(5, 60);
    printf("%c", 0xC5);
    gotoligcol(5, 70);
    printf("%c", 0xC5);
    gotoligcol(10, 10);//relier la 3e ligne
    printf("%c", 0xC5);
    gotoligcol(10, 20);
    printf("%c", 0xC5);
    gotoligcol(10, 30);
    printf("%c", 0xC5);
    gotoligcol(10, 40);
    printf("%c", 0xC5);
    gotoligcol(10, 50);
    printf("%c", 0xC5);
    gotoligcol(10, 60);
    printf("%c", 0xC5);
    gotoligcol(10, 70);
    printf("%c", 0xC5);
    gotoligcol(15, 10);
    printf("%c", 0xC5);
    gotoligcol(15, 20);
    printf("%c", 0xC5);
    gotoligcol(15, 30);
    printf("%c", 0xC5);
    gotoligcol(15, 40);
    printf("%c", 0xC5);
    gotoligcol(15, 50);
    printf("%c", 0xC5);
    gotoligcol(15, 60);
    printf("%c", 0xC5);
    gotoligcol(15, 70);
    printf("%c", 0xC5);
    gotoligcol(20, 10);
    printf("%c", 0xC1);
    gotoligcol(20, 20);
    printf("%c", 0xC1);
    gotoligcol(20, 30);
    printf("%c", 0xC1);
    gotoligcol(20, 40);
    printf("%c", 0xC1);
    gotoligcol(20, 50);
    printf("%c", 0xC1);
    gotoligcol(20, 60);
    printf("%c", 0xC1);
    gotoligcol(20, 70);
    printf("%c", 0xC1);
    Color(10,10); //afficher les cases vertes
    gotoligcol(4,11);
    printf("         ");
    gotoligcol(4,41);
    printf("         ");
    gotoligcol(4,51);
    printf("         ");
    gotoligcol(4,71);
    printf("         ");
    Color(4,4); //afficher les cases rouges
    gotoligcol(9,1);
    printf("         ");
    gotoligcol(9,11);
    printf("         ");
    gotoligcol(9,21);
    printf("         ");
    gotoligcol(9,51);
    printf("         ");
    Color(3,3); //afficher les cases bleues
    gotoligcol(9,61);
    printf("         ");
    gotoligcol(14,1);
    printf("         ");
    gotoligcol(14,21);
    printf("         ");
    gotoligcol(14,41);
    printf("         ");
    Color(13,13); //afficher les cases roses
    gotoligcol(14, 51);
    printf("         ");
    gotoligcol(14, 61);
    printf("         ");
    gotoligcol(19,11);
    printf("         ");
    gotoligcol(19,21);
    printf("         ");
    Color(11,11); //afficher les cases turquoises
    gotoligcol(19,41);
    printf("         ");
    gotoligcol(19,51);
    printf("         ");
    gotoligcol(19,71);
    printf("         ");
    Color(15,0);
    printf("\n\n\n\n\n");
    return 0;
}
