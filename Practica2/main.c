#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

    char c1, c2, c3;

    printf ("Introduce 3 caracteres\n");
    scanf ("%c %c %c, &c1, &c2, &c3");

    printf ("%c-%c-%c",c1,c2,c3); 

}