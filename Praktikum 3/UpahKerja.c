/* Nama File : UpahKerja.c*/
/* Deskripsi : Menghitung besarnya upah yang diterima dengan menggunakkan aturan golongan */
/* Nama : Salsabila Tuada */
/* NIM : 24060121130054 */

#include <stdio.h>

int main()
{
    /* Kamus */
    int a, b, c;

    /* Algoritma */
    printf("Menghitung upah kerja \n");
    printf("Masukkan jenis golongan : ");
    scanf("%d", &a);
    printf("Masukkan jam kerja : ");
    scanf("%d", &b);

    if (a == 1 && b <= 40) {
        c = b * 1000;
    }if (a == 2 && b <= 40) {
        c = b * 1500;
    }if (a == 3 && b <= 40) {
        c = b * 2000;
    }if (a == 4 && b <= 40) {
        c = b * 2500;
    }if (a == 1 && b > 40) {
        c = 40 * 1000 + ((b - 40) * 1.5 * 1000);
    }if (a == 2 && b > 40) {
        c = 40 * 1500 + ((b - 40) * 1.5 * 1500);
    }if (a == 3 && b > 40) {
        c = 40 * 2000 + ((b - 40) * 1.5 * 2000);
    }if (a == 4 && b > 40) {
        c = 40 * 2500 + ((b - 40) * 1.5 * 2500);
    }

    printf("Total upah kerja : %d", c);

    return 0;
}
