/* Nama File    		: CekBilPrima.C */
/* Deskripsi    		: menentukan apakah sebuah bilangan integer sembarang N (N>0) adalah sebuah bilangan prima atau bukan bilangan prima */
/* Pembuat      		: Naufal Rizki Saputra - 24060122120011 */
/*Tanggal Pembuatan		: 9 Maret 2023 */

#include<stdio.h>
#include<stdlib.h>

int main () {

    /* Kamus */
    int N, TotalFaktor ;

    /* Algoritma */
    printf ("Masukkan nilai N : ") ;
    scanf ("%d", & N) ;

    if (N>0) {
        TotalFaktor = 0 ;
        for (int i=1; i<=N; i++) {
            if (N % i == 0) {
                TotalFaktor = TotalFaktor + 1 ;
            }
        }
        if (TotalFaktor == 2) {
            printf ("Bilangan Prima") ;
        }
        else {
            printf ("Bukan Bilangan Prima") ;
        }
    }

    return 0;
}