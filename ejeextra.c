#include <stdio.h> 
#include <stdbool.h> 


int main(){
	int valor_bool= 0;
	int tiempo_llegada= 0;
	bool llego_paquete= false;
	bool paquete_ok= false;
	int estrellas= 0;
	const int TIEMPO_ESTIMADO_ENTREGA= 90;
	const int LLEGO_TARDE=1;
	const int LLEGO_ANTES=2;
	const int LLEGO_A_TIEMPO=3;




	printf("Buenos Dias: Indique con 0 si su paquete no llego, o con 1 si llego:\n");
	scanf("%i", & valor_bool);
	llego_paquete= valor_bool;

	if (!(llego_paquete)) {
		printf("El paquete no llego, favor realice el reclamo necesario\n");
	}else{ 
		printf("Indique en cuantos días llego su paquete:\n");
		scanf("%i", &tiempo_llegada);
		if (tiempo_llegada< TIEMPO_ESTIMADO_ENTREGA){
			tiempo_llegada= LLEGO_ANTES;
		}else if (tiempo_llegada = TIEMPO_ESTIMADO_ENTREGA){
			tiempo_llegada= LLEGO_A_TIEMPO;
		}else {
			tiempo_llegada= LLEGO_TARDE;
		}
	switch (tiempo_llegada){
		case 1: 
			printf("Su paquete llego antes!\n");
			break;
		case 2: 
			printf("Su paquete llego a tiempo :>\n");
			break;
		case 3:
			printf("Su paquete llegó tarde :<\n");
	}
	

	return 0;
	}
}




	