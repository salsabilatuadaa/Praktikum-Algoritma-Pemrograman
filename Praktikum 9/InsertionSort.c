/* Nama File : InsertionSort.c */
/* Deskripsi : Membuat algoritma pengurutan dengan membandingkan dan mengurutkan dua data pertama dari array*/
/* Nama : Salsabila Tuada */
/* NIM : 24060121130054 */

#include <stdio.h>
#include "FungsiArr.c"

void insertionSort(int arr[], int n){
    //Kamus lokal
    int i, j, key;

    //Algoritma
    for (i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main(){
    //Kamus lokal
    int arr[]={12,1,23,10,5,19,8,35,4,25};
    int n;

    //Algoritma
    n = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, n);
    insertionSort(arr, n);
    printArr(arr, n);

    return 0;
}
