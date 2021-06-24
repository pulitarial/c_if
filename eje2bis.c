#include <stdio.h> 
#include <stdbool.h> 

int main(){
    int numero_ingresado = 0;
    int multiplo_de=2;

    printf("Ingrese un numero entero para saber si es par o no:\n");
    scanf("%i", &numero_ingresado);

    if ((numero_ingresado  % multiplo_de) == 0) {
        printf("Su numero es Par!!\n");
    }else {
        printf("Su numero es Impar!!\n");
    }

    return 0; 
}