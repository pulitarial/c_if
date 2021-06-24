#include <stdio.h> 
#include <stdbool.h> 

int main(){
    int info_bool = 0;
    int tiempo_entrega= 0;
    bool estado_paquete = false;
    bool llego_paquete= false;
    const int DIAS_ESTIMADO_ENTREGA= 90;
    


    printf("Indique si su paquete llego con 1 y si no con 0\n");
    scanf("%i",&info_bool);
    llego_paquete= info_bool;

    if (!(llego_paquete)) {
        printf("El paquete no llego! >:\n");
        printf("Estrellas 0!!\n");
    }else {
        printf("Indique cuanto demoro la entrega\n");
        scanf("%i", &tiempo_entrega);
            if (tiempo_entrega> DIAS_ESTIMADO_ENTREGA){
                printf("El paquete llego tarde!! \n");
                printf("Estrellas: 1\n");
            }else {
                printf("Indique si su paquete llego en buenas condiciones con 1 y si no con 0\n");
                scanf("%i", &info_bool);
                estado_paquete= info_bool;
            }  
            if ((tiempo_entrega = DIAS_ESTIMADO_ENTREGA)&& estado_paquete ){
                printf("El paquete llego a tiempo!! \n");
                printf("Estrellas: 3!!!\n");
            }else if ((tiempo_entrega< DIAS_ESTIMADO_ENTREGA)&& estado_paquete){
                printf("El paquete llego antes!!\n");
                printf("Estrellas: 3!!\n");
            }else if ((tiempo_entrega< DIAS_ESTIMADO_ENTREGA)&& (!(estado_paquete))){
                printf("El paquete llego a tiempo!!\n");
                printf("Estrellas: 2\n");
            }

    }
    
    return 0; 
}