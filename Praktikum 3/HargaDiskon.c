/* Nama File : HargaDiskon.c*/
/* Deskripsi : Menghitung besarnya harga setelah diberikan diskon*/
/* Nama : Salsabila Tuada */
/* NIM : 24060121130054 */

#include <stdio.h>

int main()
{
    /* Kamus */
    int h, z;
    char d;

    /* Algoritma */
    printf("Menghitung harga diskon \n");
    printf("Masukan harga barang dan jenis diskon : ");
    scanf("%d, %c",&h,&d);

    if (d == 'A') {
        z = h - (0.1 * h);
    }else if (d == 'B') {
        z = h - (0.15 * h);
    }else if (d == 'C'){
        z = h - (0.2 * h);
    }

    printf("Total harga setelah diskon %d", z);

    return 0;
}
