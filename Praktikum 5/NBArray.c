/* Nama File : NBArray.c */
/* Deskripsi : Menghitung besar penjumlahan sub array/tabel T*/
/* Nama : Salsabila Tuada */
/* NIM : 24060121130054 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int N, i, j, sum;

    /*Algoritma*/
    printf("Menghitung selisih ketinggian\n");
    printf("\nMasukkan panjang array : ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("input harus bilangan positif");
    }
    else {
        int T[N];
        for (i=0; i<N; i++) {
            printf("Data ke %d : ", i+1);
            scanf("%d", &T[i]);
        }
        sum = 0;
        for (i=0; i<N; i++){
            for (j=i; j<N; j++) {
                sum = sum + T[j];
            }
        }
    }
    printf("\nTotal penjumlahan = %d", sum);

    return 0;
}
