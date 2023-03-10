/* Nama File    		: kallSS.C */
/* Deskripsi    		: Menampilkan beberapa hasil operasi aritmatika terhadap kedua inputan berdasarkan pilihan operasi yang tersedia menggunakan 1 inputan tambahan berupa character untuk menampilkan output. Jika terdapat inputan character selain 6 character yang didaftarkan, maka akan menampilkan output "Bukan pilihan menu yang benar" */
/* Pembuat      		: Naufal Rizki Saputra - 24060122120011 */
/* Tanggal Pembuatan	: 28 Februari 2023 */

#include <stdio.h>
#include <stdlib.h>

int main () {

    /* Kamus */
    int iA,iB ;
    char iC ;

    /* Algoritma */
    printf ("Disediakan beberapa pilihan operasi kalkulator sebagai berikut : \n"
            "a = iA + iB \n"
            "b = iA - iB \n"
            "c = iA * iB \n"
            "d = iA : iB \n"
            "e = iA div iB \n"
            "f = iA mod iB \n") ;   

    printf ("Pilih salah satu operasi di atas (a-f) : ") ;
    scanf ("%c", &iC) ;

    printf ("nilai iA : ") ;
    scanf ("%d", &iA) ;

    printf ("nilai iB : ") ;
    scanf ("%d", &iB) ;
    
    if (iC == 'a' || iC == 'b'|| iC == 'c' || iC == 'd' || iC == 'e' || iC == 'f' ) {
        switch (iC) {
        case 'a' : 
            printf ("hasil dari operasi iA + iB adalah : %d",iA + iB) ; break;
        case 'b' :
            printf ("hasil dari operasi iA - iB adalah :  %d",iA - iB) ; break;
        case 'c' :
            printf ("hasil dari operasi iA x iB adalah : %d",iA * iB) ; break;
        case 'd' :
            printf ("hasil dari operasi iA / iB adalah : %f",(float)iA / (float)iB) ; break;
        case 'e' :
            printf ("hasil dari operasi iA div iB adalah : %d",iA / iB) ; break;
        case 'f' :
            printf ("hasil dari operasi iA mod iB adalah : %d",iA%iB) ; break;
        }
    }
    
    else {
        printf ("Bukan pilihan menu yang benar") ;
    }

    return 0 ;
}