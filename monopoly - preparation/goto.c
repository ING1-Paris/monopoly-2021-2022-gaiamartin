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
