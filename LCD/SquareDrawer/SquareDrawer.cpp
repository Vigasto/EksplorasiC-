#include <iostream>
#include "SquareDrawer.h"

using namespace std;

/* Default constructor
 * Semua variabel diisi dengan 0
 */
SquareDrawer::SquareDrawer()
{
	maxrow = 0;
	minrow = 0;
	maxcol = 0;
	mincol = 0;
}
/* Parametrized constructor
 * Variabel diisikan
 */
SquareDrawer::SquareDrawer(int minrow, int maxrow, int mincol, int maxcol)
{
	this->maxrow = maxrow;
	this->minrow = minrow;
	this->maxcol = maxcol;
	this->mincol = mincol;
}
/* Fungsi tanpa keluaran
 * Manipulasi array untuk 'menggambar'
 */
void SquareDrawer::DrawSquare(char lcd[], int minrow, int maxrow, int mincol, int maxcol)
{
	if 	(this->maxrow>=maxrow && this->minrow <= minrow && this->maxcol >= maxcol && this->mincol <= mincol)
	{
		for (int j = this->mincol - 1; j <=this->maxcol - 1; j++)
			for (int i = this->minrow - 1; i <=this->maxrow - 1; i++)
			{
				if ((j == mincol -1|| j == maxcol -1) && i<=maxrow -1 && i>=minrow -1)
				{
					lcd[((this->maxrow-this->minrow)+1)*j + i] = '-';
				}
				else if ((i==minrow -1|| i == maxrow -1) && j<=maxcol -1 && j>= mincol - 1)
				{
					lcd[((this->maxrow-this->minrow)+1)*j + i] = '|';
				}
			}
	}
}