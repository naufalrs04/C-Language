/* Nama File    		: BilPrimaN.C */
/* Deskripsi    		: mencetak bilangan prima sampai dengan biangan integer sembarang N (N>0) */
/* Pembuat      		: Naufal Rizki Saputra - 24060122120011 */
/* Tanggal Pembuatan	: 14 Maret 2023 */

#include<stdio.h>
#include<stdlib.h>

int main () {

    /* Kamus */
    int N,i,j,TotalFaktor;

    /* Algoritma */
    printf ("Nilai N : ") ;
    scanf ("%d", &N) ;

    if (N>0) {
        for (i=1; i<=N; i++){
            TotalFaktor = 0;

            for (j=1; j<=i; j++){
                if (i%j == 0){
                    TotalFaktor = TotalFaktor + 1;
                }
            }

            if (TotalFaktor==2) {
                printf ("%d ",i);
            }
        }
    }

    return 0;
}