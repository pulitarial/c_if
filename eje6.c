#include <stdio.h> 
#include <stdbool.h> 

const float DESCUENTO_50= 0.5;
const float DESCUENTO_15= 0.85;
const float DESCUENTO_5= 0.95;
const int TIEMPO_MIN_PARA_SER_AFILIADO= 6;

int main(){
    float precio_final= 1000;
    bool productos_iguales= false;
    int tiempo_uso_servicio = 0;
    float precio_prod_1= 1000;
    float precio_prod_2= 1000;
    bool producto_en_oferta= false;
    int valor_bool_1=0;
    int valor_bool_2= 0;

    printf("Que precio tiene cada uno de los productos que lleva?\n");
    printf("Ingrese el precio del primero con un decimal:\n");
    scanf("%f", & precio_prod_1);
    printf("Ingrese el precio del segundo producto con un decimal:\n");
    scanf("%f", & precio_prod_2);
    printf("Cuanto tiempo lleva usando nuestros servicios?\n");
    scanf("%i", &tiempo_uso_servicio);

    printf("Los productos que está llevando son iguales? 0 para distintos y 1 para iguales\n");
    scanf("%i", &valor_bool_1);
    productos_iguales= valor_bool_1;

    if (productos_iguales){
        precio_final= precio_prod_1 + (precio_prod_2* DESCUENTO_50);
        //printf("El precio final a pagar es de %.1f\n", precio_final );
    }else if (tiempo_uso_servicio>= TIEMPO_MIN_PARA_SER_AFILIADO){
        precio_final= (precio_prod_1+precio_prod_2)*DESCUENTO_15;
    }else {
        precio_final= (precio_prod_2+ precio_prod_1)*DESCUENTO_5;
    }
    
    printf("El precio final a pagar es de %.1f\n", precio_final );

    return 0; 
}