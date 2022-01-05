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
    gotoligcol(1,5); //afficher les numéros
    for (i=15; i<23; i++)
    {
        printf("%d", i);
        printf("        ");
    }
    gotoligcol(39,5);
    for (i=8; i>0; i--)
    {
        printf("%d", i);
        printf("         ");
    }
    gotoligcol(7,1);
    printf("14");
    gotoligcol(12,1);
    printf("13");
    gotoligcol(17,1);
    printf("12");
    gotoligcol(22,1);
    printf("11");
    gotoligcol(27,1);
    printf("10");
    gotoligcol(32,1);
    printf("9");
    gotoligcol(7,78);
    printf("23");
    gotoligcol(12,78);
    printf("24");
    gotoligcol(17,78);
    printf("25");
    gotoligcol(22,78);
    printf("26");
    gotoligcol(27,78);
    printf("27");
    gotoligcol(32,78);
    printf("28");
    gotoligcol(0,0);
    for (i=0; i<2; i++) //afficher les lignes
    {
        for (j=0; j<80; j++)
        {
            printf("%c", 0xC4);
        }
    printf("\n\n\n\n\n");
    }
    gotoligcol(35,0);
    for (i=0; i<2; i++)
    {
        for (j=0; j<80; j++)
        {
            printf("%c", 0xC4);
        }
    printf("\n\n\n\n\n");
    }
    gotoligcol(0,0);
    for (i=0; i<5; i++)
    {
       for (j=1; j<10; j++)
        {
            gotoligcol(10, j);
            printf("%c", 0xC4);
            gotoligcol(15, j);
            printf("%c", 0xC4);
            gotoligcol(20, j);
            printf("%c", 0xC4);
            gotoligcol(25, j);
            printf("%c", 0xC4);
            gotoligcol(30, j);
            printf("%c", 0xC4);
        }
    }
    gotoligcol(0,70);
    for (i=0; i<5; i++)
    {
       for (j=70; j<80; j++)
        {
            gotoligcol(10, j);
            printf("%c", 0xC4);
            gotoligcol(15, j);
            printf("%c", 0xC4);
            gotoligcol(20, j);
            printf("%c", 0xC4);
            gotoligcol(25, j);
            printf("%c", 0xC4);
            gotoligcol(30, j);
            printf("%c", 0xC4);
        }
    }
    for (i=0; i<3; i++)//afficher les colonnes
    {
       for (j=1; j<40; j++)
        {
            gotoligcol(j, 0);
            printf("%c", 0xB3);
            gotoligcol(j, 10);
            printf("%c", 0xB3);
            gotoligcol(j, 70);
            printf("%c", 0xB3);
            gotoligcol(j, 80);
            printf("%c", 0xB3);
        }
    }
    gotoligcol(0,0);
    for (i=0; i<7; i++)
    {
       for (j=1; j<5; j++)
        {
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
        }
    }
    gotoligcol(30,0);
    for (i=0; i<7; i++)
    {
       for (j=36; j<40; j++)
        {
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
        }
    }
    gotoligcol(0,0); //harmoniser les jonctions
    printf("%c", 0xDA);
    gotoligcol(0,80);
    printf("%c", 0xBF);
    gotoligcol(40,0);
    printf("%c", 0xC0);
    gotoligcol(40,80);
    printf("%c", 0xD9);
    gotoligcol(0,10);
    printf("%c", 0xC2);
    gotoligcol(0,20);
    printf("%c", 0xC2);
    gotoligcol(0,30);
    printf("%c", 0xC2);
    gotoligcol(0,40);
    printf("%c", 0xC2);
    gotoligcol(0,50);
    printf("%c", 0xC2);
    gotoligcol(0,60);
    printf("%c", 0xC2);
    gotoligcol(0,70);
    printf("%c", 0xC2);
    gotoligcol(35,20);
    printf("%c", 0xC2);
    gotoligcol(35,30);
    printf("%c", 0xC2);
    gotoligcol(35,40);
    printf("%c", 0xC2);
    gotoligcol(35,50);
    printf("%c", 0xC2);
    gotoligcol(35,60);
    printf("%c", 0xC2);
    gotoligcol(5,10);
    printf("%c", 0xC5);
    gotoligcol(5,70);
    printf("%c", 0xC5);
    gotoligcol(35,10);
    printf("%c", 0xC5);
    gotoligcol(35,70);
    printf("%c", 0xC5);
    gotoligcol(5,0);
    printf("%c", 0xC3);
    gotoligcol(10,0);
    printf("%c", 0xC3);
    gotoligcol(15,0);
    printf("%c", 0xC3);
    gotoligcol(20,0);
    printf("%c", 0xC3);
    gotoligcol(25,0);
    printf("%c", 0xC3);
    gotoligcol(30,0);
    printf("%c", 0xC3);
    gotoligcol(35,0);
    printf("%c", 0xC3);
    gotoligcol(10,70);
    printf("%c", 0xC3);
    gotoligcol(15,70);
    printf("%c", 0xC3);
    gotoligcol(20,70);
    printf("%c", 0xC3);
    gotoligcol(25,70);
    printf("%c", 0xC3);
    gotoligcol(30,70);
    printf("%c", 0xC3);
    gotoligcol(10,80);
    printf("%c", 0xB4);
    gotoligcol(15,80);
    printf("%c", 0xB4);
    gotoligcol(20,80);
    printf("%c", 0xB4);
    gotoligcol(25,80);
    printf("%c", 0xB4);
    gotoligcol(30,80);
    printf("%c", 0xB4);
    gotoligcol(35,80);
    printf("%c", 0xB4);
    gotoligcol(10,10);
    printf("%c", 0xB4);
    gotoligcol(15,10);
    printf("%c", 0xB4);
    gotoligcol(20,10);
    printf("%c", 0xB4);
    gotoligcol(25,10);
    printf("%c", 0xB4);
    gotoligcol(30,10);
    printf("%c", 0xB4);
    gotoligcol(5,20);
    printf("%c", 0xC1);
    gotoligcol(5,30);
    printf("%c", 0xC1);
    gotoligcol(5,40);
    printf("%c", 0xC1);
    gotoligcol(5,50);
    printf("%c", 0xC1);
    gotoligcol(5,60);
    printf("%c", 0xC1);
    gotoligcol(40,10);
    printf("%c", 0xC1);
    gotoligcol(40,20);
    printf("%c", 0xC1);
    gotoligcol(40,30);
    printf("%c", 0xC1);
    gotoligcol(40,40);
    printf("%c", 0xC1);
    gotoligcol(40,50);
    printf("%c", 0xC1);
    gotoligcol(40,60);
    printf("%c", 0xC1);
    gotoligcol(40,70);
    printf("%c", 0xC1);
    Color(4,4);
    gotoligcol(36,61);
    printf("         ");
    gotoligcol(36,51);
    printf("         ");
    gotoligcol(36,11);
    printf("         ");
    Color(13,13);
    gotoligcol(4,11);
    printf("         ");
    gotoligcol(4,31);
    printf("         ");
    gotoligcol(4,51);
    printf("         ");
    gotoligcol(4,61);
    printf("         ");
    Color(3,3);
    for (i=6; i<10; i++)
    {
        gotoligcol(i,8);
        printf("  ");
    }
    for (i=11; i<15; i++)
    {
        gotoligcol(i,8);
        printf("  ");
    }
    for (i=26; i<30; i++)
    {
        gotoligcol(i,8);
        printf("  ");
    }
    for (i=31; i<35; i++)
    {
        gotoligcol(i,8);
        printf("  ");
    }
    Color(11,11);
    for (i=6; i<10; i++)
    {
        gotoligcol(i,71);
        printf("  ");
    }
    for (i=16; i<20; i++)
    {
        gotoligcol(i,71);
        printf("  ");
    }
    for (i=26; i<30; i++)
    {
        gotoligcol(i,71);
        printf("  ");
    }
    for (i=31; i<35; i++)
    {
        gotoligcol(i,71);
        printf("  ");
    }
    Color(10,10);
    gotoligcol(4,41);
    printf("         ");
    gotoligcol(36,31);
    printf("         ");
    for (i=21; i<25; i++)
    {
        gotoligcol(i,71);
        printf("  ");
    }
    for (i=21; i<25; i++)
    {
        gotoligcol(i,8);
        printf("  ");
    }
    Color(15,0);
    gotoligcol(36,74);
    printf("GO!");
    gotoligcol(40,0);
    printf("\n\n\n\n");
    return 0;
}
