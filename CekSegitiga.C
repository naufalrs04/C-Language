/* Nama File    		: CekSegitiga.C */
/* Deskripsi    		: Mengidentifikasikan 3 inputan integer positif, kemudian mengklasifikasikannya dan menampilkannya sebagai output salah satu dari 3 jenis segitiga, yaitu segitiga sama sisi atau segitiga sama kaki atau segitiga sembarang */
/* Pembuat      		: Naufal Rizki Saputra - 24060122120011 */
/* Tanggal Pembuatan	: 28 Februari 2023 */

#include <stdio.h>
#include <stdlib.h>

int main () {

    /* Kamus */
    int S1,S2,S3 ;

    /* Algoritma */
    printf ("Masukkan nilai S1 : ") ;
    scanf ("%d", &S1) ;

    printf ("Masukkan nilai S2 : ") ;
    scanf ("%d", &S2) ;

    printf ("Masukkan nilai s3 : ") ;
    scanf ("%d", &S3) ;

    if ( S1 == S2 && S2 == S3 && S1 == S3) {
        printf ("Segitiga sama sisi") ;
    }
    else if ((S1 == S2 && S3 != S1) || (S2 == S3 && S1 != S2) || (S1 == S3 && S2 != S3)) {
        printf ("Segitiga sama kaki") ;
    }
    else {
        printf ("Segitiga sembarang") ;
    }

    return 0 ;
}