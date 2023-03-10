/* Nama File    		: 2_jarakPBola.c */
/* Deskripsi    		: Menghitung dan menampilkan nilai suatu jarak yang ditempuh benda yang mengalami gerak-gerak parabola dalam satuan meter */
/* Pembuat      		: Naufal Rizki Saputra - 24060122120011 */
/*Tanggal Pembuatan		: 21 Februari 2023 */

#include <stdio.h>
#include <stdlib.h>

int main () {

    /* Kamus */
    float v0,t,y ;
    const int g = 10 ;

    /* Algoritma */
    printf ("v0 = ") ;
    scanf ("%f", & v0) ;
    printf ("t = ") ;
    scanf ("%f", & t) ;

    y = v0*t - 0.5 * (g*t*t) ;

    printf ("y (Jarak) = %f", y) ;

    return 0 ;
 
}