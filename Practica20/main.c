#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    FILE *f;
    f = fopen("numeros.txt", "r");
    int suma = 0, numero;

    while (feof(f)== 0){
        fscanf(f, "%d", &numero);
        suma = suma + numero;
    }

    printf("La suma de todos los ficheros es: %d\n", suma);

    fclose(f);
}