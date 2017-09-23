#include <iostream>
#include "SquareDrawer\SquareDrawer.h"

using namespace std;

void displayLCD(char lcd[], short int minrow, short int maxrow, short int mincol, short int maxcol);

int main()
{
	//declare your variables
	char lcd[100];
	//construct your objects
	SquareDrawer squareDrawer(1, 10, 1, 10);
	//initialize and work with your objects
	for (int i = 0; i<99; i++)
		lcd[i] = ' ';
	squareDrawer.DrawSquare(lcd, 1, 10, 1, 10);
	squareDrawer.DrawSquare(lcd, 1, 5, 1, 5);
	squareDrawer.DrawSquare(lcd, 8, 9, 8, 9);
	//display
	displayLCD(lcd,1,10,1,10);
	return 0;
}

void displayLCD(char lcd[], short int minrow, short int maxrow, short int mincol, short int maxcol)
{
	for (int j = mincol -1; j <=maxcol - 1; j++)
	{
		for (int i = minrow - 1; i <=maxrow - 1; i++)
			cout << lcd[((maxrow-minrow) + 1)*j + i];
		cout << endl;
	}
}