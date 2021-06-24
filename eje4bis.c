#include <stdio.h> 
#include <stdbool.h> 

int main(){
    int bool_llueve = 0;
    int bool_tiene_paraguas= 0;
    bool llueve = false;
    bool tengo_paraguas= false;

    printf("Indique si esta lloviendo con 1 y si no con 0\n");
    scanf("%i",&bool_llueve);
    llueve= bool_llueve;

    if (llueve) {
        printf("Indique si tiene paraguas para salir con 1 o 0 si no\n");
        scanf("%i", &bool_llueve);
        tengo_paraguas = bool_llueve;
        if (llueve & tengo_paraguas){
            printf("Está lloviendo, agarrar el paraguas! \n");
        }else{
            printf("Está lloviendo y no tenes paraguas, a correr!!!\n");
        }
    }else{
        printf("No llueve! =)\n");
    }
   

    return 0; 
}