/* Nama File    		: 4_volBolaKerct.c */
/* Deskripsi    		: Menghitung dan menampilkan volume bola dan volume kerucut dalam satuan meter kubik*/
/* Pembuat      		: Naufal Rizki Saputra - 24060122120011 */
/*Tanggal Pembuatan		: 21 Februari 2023 */

#include <stdio.h>
#include <stdlib.h>

int main () {

    /* Kamus */
    float r, Vb, Vk ;
    const float PHI = 3.1415 ;

    /* Algoritma */
    printf ("r = ") ;
    scanf ("%f", & r) ;

    Vb = 1.333333 * (PHI*r*r*r) ;
    Vk = 0.5 * Vb ; 

    printf ("Volume Bola = %f \n", Vb) ;
    printf ("Volume Kerucut = %f", Vk) ;

    return 0;

}