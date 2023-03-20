/* Nama File    		: SimetriTabel.C */
/* Deskripsi    		: Mengecek apakah tabel T1 dan T2 simetri atau tidak. Tabel T1 dan T2 simetri jika panjang tabel dan nilai setiap elemen sama */
/* Pembuat      		: Naufal Rizki Saputra - 24060122120011 */
/* Tanggal Pembuatan	: 17 Maret 2023 */	

#include <stdio.h>
#include <stdlib.h>

int main() {

    /* Kamus */
    int N1, N2, i, simetri;
    
    /* Algoritma */
    printf("Masukkan ukuran tabel T1: ");
    scanf("%d", &N1);
    
    int T1[N1] ;
    for(i=1; i<=N1; i++) {
        printf("Masukkan isi tabel T1[%d]: ",i);
        scanf("%d", &T1[i]);
    }
    printf ("\n") ;

    printf("Masukkan ukuran tabel T2: ");
    scanf("%d", &N2);

    int T2[N2] ;
    for(i=1; i<=N2; i++) {
        printf("Masukkan isi tabel T2[%d]: ",i);
        scanf("%d", &T2[i]);
    }

    simetri = 1 ;
    if(N1 != N2) {
        simetri = 0;
    }
    else {
        for(i=1; i<=N1; i++) {
            if(T1[i] != T2[i]) {
                simetri = 0;
            }
        }
    }
    printf ("\n") ;

    if(simetri) {
        printf("T1 dan T2 simetri\n");
    }
    else {
        printf("T1 dan T2 tidak simetri\n");
    }

    return 0;
}