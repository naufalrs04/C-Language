/* Nama File    		: JumBarKolMat.C */
/* Deskripsi    		: Menjumlahkan semua elemen pada baris dan kolom dari tabel T (2 dimensi) */
/* Pembuat      		: Naufal Rizki Saputra - 24060122120011 */
/* Tanggal Pembuatan	: 17 Maret 2023 */	

#include<stdio.h>
#include<stdlib.h>

int main () {

    /* Kamus */
    int N,i,j,JumBaris,JumKolom ;

    /* Algoritma */
    printf ("Ukuran Matriks : ") ;
    scanf ("%d", & N) ;

    int T[N][N] ;
    for (i = 1; i<=N; i++) {
        for (j = 1; j<=N ; j++) {
            printf ("Elemen T[%d,%d]: ", i, j) ;
            scanf ("%d", &T[i][j]) ;
        }
    }

    for (i = 1; i<=N ; i++) {
        JumBaris = 0 ;
        for (j = 1; j<=N ; j++){
            JumBaris = JumBaris + T[i][j];
        }
        printf ("Jumlah elemen pada baris %d: %d\n", i, JumBaris) ;
    }

    for (i = 1; i<=N ; i++) {
        JumKolom = 0 ;
        for (j = 1; j<=N ; j++){
            JumKolom = JumKolom + T[j][i];
        }
        printf ("Jumlah elemen pada kolom %d: %d\n", i, JumKolom);
    }
    
    return 0;
}