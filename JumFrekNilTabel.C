/* Nama File    		: JumFrekNilTabel.C */
/* Deskripsi    		: Menampilkan jumlah nilai-nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali */
/* Pembuat      		: Naufal Rizki Saputra - 24060122120011 */
/* Tanggal Pembuatan	: 15 Maret 2023 */	

#include<stdio.h>
#include<stdlib.h>

int main () {

    /* Kamus */
    int N,i,j, frekuensi, jumlah ;

    /* Algoritma */
    printf ("Nilai N : ");
    scanf ("%d", &N) ;

    int T[N] ;
    for (i = 1 ; i<=N; i++) {
        printf ("Elemen ke - %d : ",i) ;
        scanf ("%d", &T[i]) ;
    }

    jumlah = 0 ;
    for ( i = 1; i<=N ; i++) {
        frekuensi = 1 ;
        for (j = i + 1; j<=N ; j++) {
            if (T[i] == T[j] && T[i] != 0 ) {
                frekuensi = frekuensi + 1;
                T[j] = 0 ;
            }
        }

        if (frekuensi > 1) {
            jumlah = jumlah + (T[i]*frekuensi) ;
        }
    }

    printf ("Jumlah nilai elemen tabel T yang kemunculannya lebih dari 1 kali = %d", jumlah) ;

    return 0 ;
}