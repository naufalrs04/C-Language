/* Nama File    		: FaktorBil.C */
/* Deskripsi    		: menentukan faktor bilangan yang dapat dibentuk oleh bilangan N (N>0) */
/* Pembuat      		: Naufal Rizki Saputra - 24060122120011 */
/*Tanggal Pembuatan		: 8 Maret 2023 */

#include<stdio.h>
#include<stdlib.h>

int main() {

    /* Kamus */
    int N;

    /* Algoritma */
    printf ("Nilai N : ");
    scanf ("%d", &N) ;

    printf("Faktor bilangannya adalah : \n") ;

    if (N>0) {
        for (int i=1; i<= N; i++) {
            if (N % i == 0) {
                printf ("%d ",i) ;
            }
        }
    }

    return 0;
}