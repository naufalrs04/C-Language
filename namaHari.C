/* Nama File    		: namaHari.C */
/* Deskripsi    		: Menampilkan sebagai output ke layar, nama-nama hari dari nomor hari yang dimasukkan sebagai inputan, yaitu 1 s.d. 7 */
/* Pembuat      		: Naufal Rizki Saputra - 24060122120011 */
/* Tanggal Pembuatan	: 27 Februari 2023 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    /* Kamus */
    int NomorHari ;

    /* Algoritma */
    printf ("Masukkan nomor hari : ") ;
    scanf ( "%d",& NomorHari) ;

    if (NomorHari == 1) {
        printf ("Senin") ;
    }
    else if (NomorHari == 2) {
        printf ("Selasa") ;
    }   
    else if (NomorHari == 3) {
        printf ("Rabu") ;
    }
    else if (NomorHari == 4) {
        printf ("Kamis") ;
    }
    else if (NomorHari == 5) {
        printf ("Jumat") ;
    } 
    else if (NomorHari == 6) {
        printf ("Sabtu") ;
    } 
    else if (NomorHari == 7) {
        printf ("Minggu") ;
    } 
    else {
        printf ("Masukan nomor hari tidak tepat") ;
    }

    return 0 ;
}