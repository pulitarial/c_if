#include <stdio.h>
#include <stdbool.h>

int main (){
	bool tiene_descuento = false;
	float precio_base= 1000;
	float precio_final=1000;
	int numero_bool = 0;
	const float DESCUENTO_20= 0.8;

	printf("Ingrese el precio que debe abonar\n");
	scanf("%f", &precio_base);

	printf("Indique con 1 si tiene un cupon de descuento o 0 si no\n");
	scanf("%i", &numero_bool);
	tiene_descuento = numero_bool;

	if (tiene_descuento){
		precio_final= precio_base* DESCUENTO_20;
		printf("Entonces usted debe abonar %.1f con el descuento realizado\n", precio_final );
	} else {
		printf("Entonces usted debe abonar %.1f quiere hacerlo en cuotas?\n ", precio_base);
	}

	return 0;
}


