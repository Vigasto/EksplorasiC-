#ifndef _FILLER_H
#define _FILLER_H

class Filler
{
		int maxrow;                           //size array
		int minrow;
		int maxcol;
		int mincol;
	public :
		/* Default constructor
		 * Semua variabel diisi dengan 0
		 */
		Filler();
		/* Parametrized constructor
		 * Variabel diisikan
		 */
		Filler(int maxrow, int minrow, int maxcol, int mincol);
		/* Fungsi tanpa keluaran
		 * Manipulasi array untuk 'menggambar' suatu blok spesifik dengan cara mengisi space
		 * kosong dengan karakter * dan mengabaikan yang sudah terisi
		 */
		void Fill(char lcd[], int row, int col);
		/* Fungsi tanpa keluaran
		 * Manipulasi array untuk 'menggambar' suatu kotak dengan cara mengisi space
		 * kosong dengan karakter * dan mengabaikan yang sudah terisi.
		 * Gunakan fungsi Fill
		 */
		void FillSquare(char lcd[], int minrow, int maxrow, int maxcol, int mincol);
};

#endif