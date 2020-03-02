#include <stdio.h>

main(){
   
   double x=0, moeda,resto =0;
   printf("Maquina de refrigerante");
   

   	while(x < 0.45){
   		
   		printf("\nDigite o valor da moeda\n");
         scanf("%lf",&moeda);
        if(moeda == 0.25 || moeda == 0.10){
            x +=moeda; 
   		}else {
   			printf("Moeda Invalida");
	   }
}
	printf("Retire o Refrigerante\n");
    resto = x - 0.45;
   	printf("%lf  o resto %lf",x,resto);
   	

   	
   }
