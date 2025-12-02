/* Nama & Nim : Nouvella Rahma Fitrah Legarsi & 24060124120029 */
/* Tanggal Pembuatan : 2 Desember 2025 */
/*#############################################################*/

#include <stdio.h>
#include <unistd.h>
int main ( )
{
	execlp ("ls", /* program yang dimuat - PATH dicari */
			"ls", /* nama program yang akan dikirim ke argv[0] */
			"-l", /* parameter pertama (argv[1])*/
			"-a", /* parameter kedua (argv[2]) */
			NULL) ; /* terminasi arg list */
	printf ("EXEC Failed\n") ;
	/* Baris di atas akan dicetak saat terdapat kesalahan */
}
