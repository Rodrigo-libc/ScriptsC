#include <stdio.h>

int main(void)
{
	
	float somaDigitos(float num1, float num2);
	 float a, b, soma;

	 printf("####### Programa return func #######\n\n");
	 printf("Digite 2 numeros: \n");
	 scanf("%f",&a);
	 scanf("%f",&b);

	 soma = somaDigitos(a,b);

	 printf("A soma eh: %f\n",soma);

	return 0;
}

float somaDigitos(float num1, float num2){

	float valorAbsoluto(float x);

	if (num1 < 0){
		num1 = valorAbsoluto(num1);
	}

	if (num2 < 0){
		num2 = valorAbsoluto(num2);
	}

	return num1 + num2;
}

float valorAbsoluto(float x){

	return x * -1;
}