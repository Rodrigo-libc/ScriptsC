#include<stdio.h>
int main (){
 
   int i;
   
    printf("Insira um número de 1 a 5\n");
    scanf("%i",&i);

    switch (i){ 
	case 1:
	   printf("Primeiro\n");
	   break;
         case 2:
           printf("Segundo\n");
	   break;
         case 3:
           printf("terceiro\n");
           break;
         case 4:
           printf("quarto\n");
           break;
         case 5:
           printf("quinto");
           break;
         default:
           printf("Opção não é valida\n");
          break;
}


return 0;}
