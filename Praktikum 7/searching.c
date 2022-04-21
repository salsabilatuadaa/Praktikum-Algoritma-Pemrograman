/* Nama File : main.c */
/* Deskripsi : Mencari harga X dalam dalam sebuah array dengan minimal 10 secara sekuensial*/
/* Nama : Salsabila Tuada */
/* NIM : 24060121130054 */

#include <stdio.h>
#include "searching.h"

void SEQSearchX1(int T[], int N, int *IX, int X)
{
	//Kamus Lokal
	int i;

	//Algoritma
	i = 0;
    while (i < N-1 && X != T[i])
	{
        i += 1;
    }
    if (T[i] == X)
	{
        *IX = i;
    }
	else
	{
        *IX = -1;
    }
}
