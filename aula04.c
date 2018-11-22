#include<stdio.h>

int main()
{
	//Função scanf
	
	int base;
	int altura;
	int area;

	printf("Digite o valor da base:\n");
	scanf("%i", &base);

	printf("Digite o valor da altura:\n");
	scanf("%i",&altura);

	area = base * altura;

	printf("O valor do retangulo é:%i\n", area);

	return 0;
}