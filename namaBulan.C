/* Nama File    		: namaBulan.C */
/* Deskripsi    		: Menampilkan sebagai output ke layar nama-nama bulan dari nomor bulan yang dimasukkan sebagai inputan, yaitu 1 s.d. 12 */
/* Pembuat      		: Naufal Rizki Saputra - 24060122120011 */
/* Tanggal Pembuatan	: 28 Februari 2023 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    /* Kamus */
    int NomorBulan ;

    /* Algoritma */
    printf ("Masukkan nomor bulan : ") ;
    scanf ( "%d", & NomorBulan) ;

    if (NomorBulan<1 || NomorBulan>12) {
        printf ("Masukan nomor bulan tidak tepat") ;
    }

    else {
        switch(NomorBulan) {
            case 1 :
                printf ("Januari") ; break;
            case 2 :
                printf ("Februari") ; break;
            case 3 :
                printf ("Maret") ; break;
            case 4 :
                printf ("April") ; break;
            case 5 :
                printf ("Mei") ; break;
            case 6 :
                printf ("Juni") ; break;
            case 7 :
                printf ("Juli") ; break;
            case 8 :
                printf ("Agustus") ; break;
            case 9 :
                printf ("September") ; break;
            case 10 :
                printf ("Oktober") ; break;
            case 11 :
                printf ("November") ; break;
            case 12 :
                printf ("Desember") ; break;
    }
    }

    return 0 ;

}