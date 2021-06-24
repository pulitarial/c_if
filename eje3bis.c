#include <stdio.h> 
#include <stdbool.h> 

int main(){
    int hora_llegada = 0;
    
    printf("Escriba su hora de llegada en formato militar:\n");
    scanf("%i", &hora_llegada);

    if (hora_llegada < 900){
        printf("Llego Antes!!\n");
    }else if (hora_llegada >930){
        printf("Llego tarde!! :(\n");
    }else {
        printf("Llego en horario!! :D\n");
    }

    return 0; 
}