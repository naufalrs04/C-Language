/* Nama File    		: bilInteger.C */
/* Deskripsi    		: Mengecek dan menampilkan di layar, apakah inputan i termasuk bilangan bulat positif atau nol atau bilangan bulat negatif atau bukan termasuk sebuah bilangan */
/* Pembuat      		: Naufal Rizki Saputra - 24060122120011 */
/* Tanggal Pembuatan	: 27 Februari 2023 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    /* Kamus */
    int i ;

    /* Algoritma */
    printf ("Masukkan nilai I : ") ;

    if (scanf("%d", &i) != 1) {
        printf ("Bukan termasuk sebuah bilangan") ;
    }

    else {
        if (i<0) {
            printf ("Bilangan bulat negatif");
        }
        else if (i==0){
            printf ("Bilangan bulat nol") ;
        }
        else {
            printf ("Bilangan bulat positif") ;
        }    
    }

    return 0 ;
}