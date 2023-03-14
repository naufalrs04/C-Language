/* Nama File    		: BilSempN.C */
/* Deskripsi    		: mencetak bilangan Sempurna sampai dengan bilangan integer sembarang N (N>0) */
/* Pembuat      		: Naufal Rizki Saputra - 24060122120011 */
/* Tanggal Pembuatan	: 14 Maret 2023 */

#include<stdio.h>
#include<stdlib.h>

int main () {

    /* Kamus */
    int N,i,j,JumlahFaktor ;

    /* Algoritma */
    printf ("Nilai N : ");
    scanf ("%d", &N) ;

    if (N>0) {
        for (i=1; i<=N; i++) {
            JumlahFaktor = 0;

            for (j=1; j<i; j++) {
                if (i%j == 0){
                    JumlahFaktor = JumlahFaktor + j ;
                }
            }

            if (JumlahFaktor == i) {
                printf ("%d ",i) ;
            }
        }
    }

    return 0;
}