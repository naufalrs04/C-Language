/* Nama File    		: 5_luasKellLayang.c */
/* Deskripsi    		: Menghitung dan menampilkan luas dan keliling bangun datar layang-layang dalam satuan meter*/
/* Pembuat      		: Naufal Rizki Saputra - 24060122120011 */
/*Tanggal Pembuatan		: 21 Februari 2023 */


#include <stdio.h>
#include <stdlib.h>

int main() {

    /* Kamus */
    float s1,s2,d1,d2,Luas,Kell ;

    /* Algoritma */
    printf ("s1 = ") ;
    scanf ("%f", &s1) ;
    printf ("s2 = ") ;
    scanf ("%f", &s2) ;
    printf ("d1 = ") ;
    scanf ("%f", &d1) ;
    printf ("d2 = ") ;
    scanf ("%f", &d2) ;

    Luas = 0.5 *d1*d2 ;
    Kell = 2* (s1 + s2) ;

    printf ("Luas layang-layang = %f \n", Luas) ;
    printf ("Keliling layang-layang = %f", Kell) ;

    return 0;
}
