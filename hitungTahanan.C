/* Nama File    		: hitungTahanan.C */
/* Deskripsi    		: Menghitung dan menampilkan total 3 tahanan yang dirangkai seri, dengan inputan berupa integer, dan jika terdapat salah satu tahanan yang bernilai negatif, maka akan menampilkan output "Masukan tahanan tidak boleh negatif" */
/* Pembuat      		: Naufal Rizki Saputra - 24060122120011 */
/* Tanggal Pembuatan	: 28 Februari 2023  */

#include <stdio.h>
#include <stdlib.h>

int main () {

    /* Kamus */
    int Ta1, Ta2, Ta3, Total_Ta ;

    /* Algoritma */
    printf ("Masukkan nilai tahanan satu : ") ;
    scanf ("%d", & Ta1) ;

    printf ("masukkan nilai tahanan dua : ") ;
    scanf ("%d", & Ta2) ;

    printf ("Masukkan nilai tahanan tiga : ") ;
    scanf ("%d", & Ta3) ;

    Total_Ta = Ta1 + Ta2 + Ta3 ;

    if (Ta1 >= 0 && Ta2 >= 0 && Ta3 >= 0) {
        printf ("%d", Total_Ta) ;
    }
    else {
        printf ("Masukan tahanan tidak boleh negatif") ;
    }

    return 0 ;
}