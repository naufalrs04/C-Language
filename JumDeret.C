/* Nama File    		: JumDeret.C */
/* Deskripsi    		: menghitung jumlah total deret bilangan sebanyak N (N>0) */
/* Pembuat      		: Naufal Rizki Saputra - 24060122120011 */
/*Tanggal Pembuatan		: 8 Maret 2023 */		

#include<stdio.h>
#include<stdlib.h>

int main() {

    /* Kamus */
    int N, Jumlah ;

    /* Algoritma */
    printf ("Nilai N : ") ;
    scanf ("%d",& N) ;

    Jumlah = 0 ;

    if (N>0) {
        for (int i=1; i<=N; i++) {
            Jumlah = Jumlah + i ;
            }
            printf ("Jumlah total deret sebanyak N adalah %d", Jumlah) ;
    }

    return 0;
}