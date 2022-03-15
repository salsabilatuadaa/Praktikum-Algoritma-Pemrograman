/* Nama File : BiayaParkir.c */
/* Deskripsi : Menghitung besarnya biaya parkir berdasarkan lamanya parkir*/
/* Nama : Salsabila Tuada */
/* NIM : 24060121130054 */

#include <stdio.h>

int main()
{
    /* Kamus */
    int p, b;

    /* Algoritma */
    printf("Menghitung biaya parkir \n");
    printf("Masukkan lama waktu parkir : ");
    scanf("%d", &p);

    if (p > 2){
        b = 2000 + (p-2) * 500;
    } else {
        b = 2000;
    }

    printf("Total biaya parkir : %d", b);

    return 0;
}

































