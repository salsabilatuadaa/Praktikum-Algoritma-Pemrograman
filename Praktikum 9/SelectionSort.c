/* Nama File : SelectionSort.c */
/* Deskripsi : Membuat algoritma pengurutan dengan mencari nilai terendah / tertinggi dalam array*/
/* Nama : Salsabila Tuada */
/* NIM : 24060121130054 */

#include <stdio.h>
#include "FungsiArr.c"

void selectionSort(int arr[], int n){
    //Kamus lokal
    int i, j, min;

    //Algoritma
    for (i = 0; i < n-1; i++){
        for (j = i+1; j < n; j++){
            min = i;
            if (arr[j] < arr[min]){
                min = j;
            }
            swap(&arr[i], &arr[min]);
        }
    }
}

int main(){
    //Kamus
    int arr[]={9,6,2,10,4,15,1,5,7,13};
    int n;

    //Algoritma
    n = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, n);
    selectionSort(arr, n);
    printArr(arr, n);

    return 0;
}
