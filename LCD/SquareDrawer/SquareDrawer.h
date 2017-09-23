#ifndef _SQUAREDRAWER_H
#define _SQUAREDRAWER_H

class SquareDrawer
{
		int maxrow;                           //size array
		int minrow;
		int maxcol;
		int mincol;
	public :
		/* Default constructor
		 * Semua variabel diisi dengan 0
		 */
		SquareDrawer();
		/* Parametrized constructor
		 * Variabel diisikan
		 */
		SquareDrawer(int maxrow, int minrow, int maxcol, int mincol);
		/* Fungsi tanpa keluaran
		 * Manipulasi array untuk 'menggambar'
		 * Apabila limiter tidak sesuai jangan lakukan apapun
		 */
		void DrawSquare(char lcd[], int minrow, int maxrow, int maxcol, int mincol);
};

#endif