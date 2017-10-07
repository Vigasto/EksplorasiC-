#include <iostream>
#include "Filler.h"

using namespace std;

/* Default constructor
 * Semua variabel diisi dengan 0
 */
Filler::Filler()
{
	maxrow = 0;
	minrow = 0;
	maxcol = 0;
	mincol = 0;
}
/* Parametrized constructor
 * Variabel diisikan
 */
Filler::Filler(int minrow, int maxrow, int mincol, int maxcol)
{
	this->maxrow = maxrow;
	this->minrow = minrow;
	this->maxcol = maxcol;
	this->mincol = mincol;
}
/* Fungsi tanpa keluaran
 * Manipulasi array untuk 'menggambar'
 */
void Filler::Fill(char lcd[], int row, int col)
{
	if (lcd[((this->maxrow-this->minrow)+1)*row + col] == ' ')
	{
		lcd[((this->maxrow-this->minrow)+1)*row + col] = '*';
	}
}
 
void Filler::FillSquare(char lcd[], int minrow, int maxrow, int maxcol, int mincol)
{
	if (this->maxrow>=maxrow && this->minrow <= minrow && this->maxcol >= maxcol && this->mincol <= mincol)
	{
		for (int j = this->mincol - 1; j <=this->maxcol - 1; j++)
			for (int i = this->minrow - 1; i <=this->maxrow - 1; i++)
			{
				Fill(lcd, j, i);
			}
	}
}
	
