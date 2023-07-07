#include <stdio.h>

int main(int argc, char *argv[]){

    float euros;
    printf("Introduce los euros que quieres convertir\n");
    scanf ("%f", &euros);

    printf("%.2f euros equivalen a %.2f pesetas",euros,euros*166.386);
    
}