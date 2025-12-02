/* Nama & Nim : Nouvella Rahma Fitrah Legarsi & 24060124120029 */
/* Tanggal Pembuatan : 2 Desember 2025 */
/*############################################################*/

#include <stdio.h>
#include <unistd.h>
int main (argc, argv )
	int argc ;
	char *argv[ ] ;
{
	execv ("/bin/echo", /* program yang dimuat – hanya full path */
			&argv[0] ) ;
	printf ("EXEC Failed\n") ;
	/* Baris di atas akan dicetak saat terdapat kesalahan */
}
