/* Nama File : TunjAnak.c*/
/* Deskripsi : Menghitung besarnya tunjangan anak yang diberikan */
/* Nama : Salsabila Tuada */
/* NIM : 24060121130054 */

#include <stdio.h>

int main()
{
    /* Kamus */
    int x, y, z;

    /* Algoritma */
    printf("Menghitung besarnya tunjangan anak \n");
    printf("Masukkan jumlah anak : ");
    scanf("%d", &x);
    printf("Masukkan gaji pokok : ");
    scanf("%d", &y);

    if (x < 3) {
        z = x * (0.1 * y);
    }if (x >= 3) {
        z = 3 * (0.1 * y);
    }

    printf("Besarnya tunjangan anak : %d", z);

    return 0;
}
