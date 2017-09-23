#ifndef _TRIANGLEDRAWER_H
#define _TRIANGLEDRAWER_H

class TriangleDrawer
{
		int maxrow;                           //size array
		int minrow;
		int maxcol;
		int mincol;
	public :
		/* Default constructor
		 * Semua variabel diisi dengan 0
		 */
		TriangleDrawer();
		/* Parametrized constructor
		 * Variabel diisikan
		 */
		TriangleDrawer(int maxrow, int minrow, int maxcol, int mincol);
		/* Fungsi tanpa keluaran
		 * Manipulasi array untuk 'menggambar' segitiga sama kaki
		 * Contoh segitiga non invert : 
		 *   /\
		 *  /  \
		 * /    \
		 *--------
		 * Apabila limiter tidak sesuai jangan lakukan apapun
		 * Batas-batas limiter diasumsikan selalu genap
		 */
		void DrawTriangle(char lcd[], int minrow, int maxrow, int maxcol, int mincol, bool invert);
};

#endif