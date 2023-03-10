/* Nama File    		: 1_jarakGLBB.c */
/* Deskripsi    		: Menghitung dan menampilkan nilai suatu jarak benda yang mengalami GLBB dalam satuan meter */
/* Pembuat      		: Naufal Rizki Saputra - 24060122120011 */
/*Tanggal Pembuatan		: 21 Februari 2023 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    /* Kamus */
    float v0,t,a, S;

    /* Algoritma */
    printf ("v0 = ") ;
    scanf ("%f", & v0) ;
    printf ("t = ") ;
    scanf ("%f", & t ) ;
    printf ("a = ") ;
    scanf ("%f", & a ) ;

    S = v0 *t + (0.5) * (a*t*t) ;

    printf ("S (Jarak) = %f", S ) ;

    return 0 ;

}