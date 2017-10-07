#include <iostream>
#include "TriangleDrawer.h"

using namespace std;

/* Default constructor
 * Semua variabel diisi dengan 0
 */
TriangleDrawer::TriangleDrawer()
{
	maxrow = 0;
	minrow = 0;
	maxcol = 0;
	mincol = 0;
}
/* Parametrized constructor
 * Variabel diisikan
 */
TriangleDrawer::TriangleDrawer(int minrow, int maxrow, int mincol, int maxcol)
{
	this->maxrow = maxrow;
	this->minrow = minrow;
	this->maxcol = maxcol;
	this->mincol = mincol;
}
/* Fungsi tanpa keluaran
 * Manipulasi array untuk 'menggambar'
 */
void TriangleDrawer::DrawTriangle(char lcd[], int minrow, int maxrow, int mincol, int maxcol,bool invert)
{
	if 	(this->maxrow>=maxrow && this->minrow <= minrow && this->maxcol >= maxcol && this->mincol <= mincol && invert == false)
	{
		int k=((maxrow-minrow +1)/ 2)-1;
		int L=((maxrow-minrow +1)/ 2)-1;
		for (int j = this->mincol - 1; j <=this->maxcol - 1; j++)
			for (int i = this->minrow - 1; i <=this->maxrow - 1; i++)
			{
				if ((j == maxcol -1) && i<=maxrow -1 && i>=minrow -1)
				{
					lcd[((this->maxrow-this->minrow)+1)*j + i] = '-';
				}
				else if (( k == i)&& j<=maxcol -1 && j>= mincol - 1)
				{
					lcd[((this->maxrow-this->minrow)+1)*j + i + minrow - 1] = '/';
					k--;
					L++;
				}
				else if ((L == i) && j<=maxcol -1 && j>= mincol - 1)
					lcd[((this->maxrow-this->minrow)+1)*j + i+ minrow - 1] = '\\';
			}
	}
	else if 	(this->maxrow>=maxrow && this->minrow <= minrow && this->maxcol >= maxcol && this->mincol <= mincol && invert == true)
	{
		int k=((maxrow-minrow +1)/ 2)-1;
		int m= ((maxrow-minrow +1)/ 2);
		for (int j = this->mincol - 1; j <=this->maxcol - 1; j++)
			for (int i = this->minrow - 1; i <=this->maxrow - 1; i++)
			{
				if ((j == mincol -1) && i<=maxrow -1 && i>=minrow -1)
				{
					lcd[((this->maxrow-this->minrow)+1)*j + i] = '-';
				}
				else if ((m-k == i)&& j<=maxcol -1 && j>= mincol - 1)
				{
					lcd[((this->maxrow-this->minrow)+1)*j + i + minrow-1] = '\\';
				}
				else if ((m+k-1 == i) && j<=maxcol -1 && j>= mincol - 1)
				{
					lcd[((this->maxrow-this->minrow)+1)*j + i + minrow - 1] = '/';
					k--;
				}
			}
	} 
}