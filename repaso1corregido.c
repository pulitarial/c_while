#include <stdio.h> 
#include <stdbool.h> 

int main(){
      
	int vueltas= 0;
	char opc_usuario= '_';

	while ((vueltas <=3) ||(opc_usuario != 'a')){ //corregimos el == por !=)
		printf("Hola\n");
		vueltas= vueltas +1 ;

		if (vueltas >=3){
			printf("Indique con la letra a si queire parar\n");
			scanf(" %c", &opc_usuario);
		}	
	}


    
    
    return 0; 
}