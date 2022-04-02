/* Nama File : Selisih_Lintasan.c */
/* Deskripsi : Menghitung selisih ketinggian terbesar antara puncak bukit dengan lembah bukit atau sebaliknya*/
/* Nama : Salsabila Tuada */
/* NIM : 24060121130054 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int N, max, min, i, selisih;

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
            printf("Jalur %d : ", i+1);
            scanf("%d", &T[i]);
        }
        max = T[0];
        min = T[0];
        for (i=0; i<N; i++) {
            if (T[i] < min){
                min = T[i];
            }
            else if (T[i] > max) {
                max = T[i];
            }
        }
        selisih = max - min;
    }

    printf("\nSelisih lintasan : %d", selisih);

    return 0;
}
