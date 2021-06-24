#include <stdio.h> 
#include <stdbool.h> 

int main(){
    bool tiene_vacante = false;
    int variante_bool= 0;

    printf("Ingrese 1 si tiene una vacante asignada o 0 si no\n");
    scanf("%i", &variante_bool);
    tiene_vacante = variante_bool;

    if (tiene_vacante){
        printf("Espere el mail del coordinador para informacion de la cursada\n");
    }else {
        printf("Espere el mail del coordinador en caso de que se liberen vacantes\n");
    }
    
    
    return 0; 
}