/* Nama File    		: NilMax2Tabel.C */
/* Deskripsi    		: Menampilkan nilai maksimum ke-2 dari tabel T */
/* Pembuat      		: Naufal Rizki Saputra - 24060122120011 */
/* Tanggal Pembuatan	: 14 Maret 2023 */	

#include<stdio.h>
#include<stdlib.h>

int main () {

    /* Kamus */
    int N, max1, max2, i ;

    /* Algoritma */
    printf ("Jumlah elemen N : ") ;
    scanf ("%d", &N) ;

    int T[N] ;
    for (i=1; i<=N; i++) {
        printf("Nilai T[%d]: ", i);
        scanf("%d", &T[i]);
    }

    max1 = 0 ;
    max2 = 0 ;
    for (i=1; i<=N; i++) {
        if (T[i] > max1){
            max2 = max1 ;
            max1 = T[i];
        }
        else if (T[i] == max1) {
            max1 = T[i];
        }
        else if (T[i]>max2) {
            max2 = T[i];
        }
    }

    printf("Nilai maksimum ke-2 adalah %d", max2);

    return 0;
}