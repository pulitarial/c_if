#include <stdio.h> 
#include <stdbool.h> 

int main(){
    int info_bool = 0;
    bool tengo_verduras = false;
    bool tengo_condimentos= false;
    bool tengo_caldo= false;
    bool tengo_agua= false;


    printf("Indique si tiene verduras con 1 y si no con 0\n");
    scanf("%i",&info_bool);
    tengo_verduras= info_bool;
    printf("Indique si tiene agua con 1 y si no con 0\n");
    scanf("%i",&info_bool);
    tengo_agua= info_bool;
    printf("Indique si tiene condimentos con 1 y si no con 0\n");
    scanf("%i",&info_bool);
    tengo_condimentos= info_bool;

    if (tengo_verduras & tengo_agua & (tengo_caldo || tengo_condimentos )) {
        printf("A cocinar!!!\n");
    }else{
        printf("ups.. no hay ingredientes :/\n");
    }
   
    
    return 0; 
}