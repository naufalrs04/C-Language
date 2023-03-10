/* Nama File    		: 3_gayaSentr.c */
/* Deskripsi    		: Menghitung dan menampilkan gaya sentripetal yang terjadi dalam satuan Newton */
/* Pembuat      		: Naufal Rizki Saputra - 24060122120011 */
/*Tanggal Pembuatan		: 21 Februari 2023 */

#include <stdio.h>
#include <stdlib.h>

int main () {

    /* Kamus */
    float m, v, r, F ;

    /* Algoritma */
    printf ("m = ") ;
    scanf ("%f", & m) ;
    printf ("v = ") ;
    scanf ("%f", & v) ;
    printf ("r = ") ;
    scanf ("%f", & r) ;

    F = m * (v*v / r) ;

    printf ("F (Gaya Sentripetal) = %f", F) ;

    return 0 ;

}