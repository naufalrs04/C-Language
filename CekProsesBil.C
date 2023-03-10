#include <stdio.h>
#include <stdlib.h>

int main() {

    int N, output ;

    printf ("Nilai N : ") ;
    scanf ("%d", & N) ;

    if (N%2 == 0) 
    {
        if ((N + 3) %5 == 0) {
            output = N + 3 + 5 ;
        }

        else {
            output = N + 3 + 2 ;
        }
    }

    else {
        if ((N+2) %3 == 0) {
            output = N + 2 + 2 ;
        }

        else {
            output = N + 2 + 1 ;
        }
    }

    printf ("Nilai output adalah : %d", output) ;

    return 0 ;
}
