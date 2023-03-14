/* Nama File    		: CekBilSemp.C */
/* Deskripsi    		: menentukan apakah sebuah bilangan integer sembarang N (N>0) adalah bilangan Sempurna atau bukan bilangan sempurna */
/* Pembuat      		: Naufal Rizki Saputra - 24060122120011 */
/*Tanggal Pembuatan		: 9 Maret 2023 */

#include<stdio.h>
#include<stdlib.h>

int main() {

    /* Kamus */
    int N, JumlahFaktor ;

    /* Algoritma */
    printf ("Masukkan nilai N : ") ;
    scanf ("%d", & N) ;

    if (N>0) {
        JumlahFaktor = 0 ;
        for (int i=1; i<N; i++) {
            if (N % i == 0) {
                JumlahFaktor = JumlahFaktor + i ;
            }
        }

        if (JumlahFaktor == N) {
            printf ("Bilangan Sempurna") ;
        }

        else {
            printf ("Bukan Bilangan Sempurna") ;
        }
    }

    return 0;
}