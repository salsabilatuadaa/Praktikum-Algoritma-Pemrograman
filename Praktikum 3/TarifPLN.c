/* Nama File : TarifPLN.c*/
/* Deskripsi : Menghitung besarnya tarif listrik yang dikenakan */
/* Nama : Salsabila Tuada */
/* NIM : 24060121130054 */

#include <stdio.h>

int main()
{
    /* Kamus */
    int x, y, z;

    /* Algoritma */
    printf("Menghitung besarnya tarif listrik \n");
    printf("Masukkan golongan tarif : ");
    scanf("%d", &x);
    printf("Masukkan pemakaian daya listrik : ");
    scanf("%d", &y);

    if (y <= 100) {
        z = x * 100 * 1000;
    }else if (y >= 1000) {
        z = (x * y * 1000) + (0.1 * x * y * 1000);
    }else {
        z = x * y * 1000;
    }

    printf("Total pembayaran : %d", z);

    return 0;
}
