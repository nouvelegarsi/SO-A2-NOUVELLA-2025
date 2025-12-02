/* Nama & Nim : Nouvella Rahma Fitrah Legarsi & 24060124120029 */
/* Tanggal Pembuatan : 2 Desember 2025 */
/*#############################################################*/

#include <stdio.h>
#include <unistd.h>
int main (int argc, char *argv[] )
{
	execvp ("echo", /* program yang dimuat - PATH dicari */
			&argv[0] ) ;
	printf ("EXEC Failed\n") ;
	/* Baris di atas akan dicetak saat terdapat kesalahan */
}
