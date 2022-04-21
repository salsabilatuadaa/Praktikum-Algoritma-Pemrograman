/* Nama File : main.c */
/* Deskripsi : Mencari harga X dalam tabel T[1..N] secara sekuensial*/
/* Nama : Salsabila Tuada */
/* NIM : 24060121130054 */

#include <stdio.h>
#include <stdlib.h>
#include "searching.h"

int main()
{
	//Kamus Lokal
	int IX;
	int Tabel_T[] = {1,2,6,7,9,11,13,16,18,20,21,23,25};
	int X = 13;
	int N = sizeof(Tabel_T) / sizeof(Tabel_T[0]);

 	//Algoritma
	SEQSearchX1(Tabel_T, N, &IX, X);
    if(IX == -1)
	{
    	printf("\nElemen tidak ditemukan)\n");
    }
	else
	{
		printf("Elemen berada pada index ke-%d", IX);
	}
	return 0;
}
