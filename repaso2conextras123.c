#include <stdio.h> 
#include <stdbool.h> 

int main(){
    
 const int BATERIA_INICIAL= 1300;
 const int BATERIA_MAXIMA_CARGA= 2000;
 const int SE_APAGA= 3;
 const int USAR_EL_CELU_GASTA= 100;
 const int CARGAR_EL_CELU_CARGA= 50;
 int bateria_actual=0;
 bool usa_el_celu= false;
 int valor_bool= 0;
 int opcion_seleccionada= 0;


 bateria_actual= BATERIA_INICIAL;
 printf("Su bateria inicial es de %i\n", bateria_actual);
 printf("Quiere usar su celular? 0 para no o 1 para si:\n");
 scanf("%i", &valor_bool);
 usa_el_celu=valor_bool;
 if (!(usa_el_celu)){
 	printf("Hasta Luego!\n");
 }else {
 	bateria_actual= bateria_actual- USAR_EL_CELU_GASTA;
 	while (bateria_actual>SE_APAGA){
 		printf("Su bateria es de %i\n\n\n", bateria_actual);
 		printf("Quiere usar su celular? marque 1\nQuiere cargarlo? marque 2\nQuiere salir del menu? marque 3\n");
 		scanf("%i", &opcion_seleccionada);
 	 		switch (opcion_seleccionada){
 				case 1: 
 					printf("Usted hizo uso de su celular\n");
 					bateria_actual= bateria_actual- USAR_EL_CELU_GASTA;
 					break;
 				case 2:
 					printf("Usted optó por cargar el celular\n");
 					if (bateria_actual<= (BATERIA_MAXIMA_CARGA- CARGAR_EL_CELU_CARGA)){
 						bateria_actual= bateria_actual + CARGAR_EL_CELU_CARGA;
 					}else{
 						printf("Su batería ya está cargada\n");

 					}
 					break;
 				case 3:
					printf("Hasta Luego!\n");
 					return 0;
			}
 	}
 printf("\n\nSIN BATERIA!!\nSu celular se está apagando\nHasta luego!!\n");
 }
    
    return 0; 
}