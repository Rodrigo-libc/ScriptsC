#include<stdio.h>

int main()
{
	
	int numero, cifra;

	printf("Digite um número inteiro\n");
	scanf("%i",&numero);

	if (numero >= 0)
	{
		do{

			cifra = numero % 10;
			printf("%i",cifra );
			numero = numero / 10;

		}while(numero != 0);
	}

	else {

		numero *= -1;
		printf("-");

		do{

			cifra = numero % 10;
			printf("%i",cifra );
			numero /= 10;

		}while(numero != 0);
		printf("\n");
	}
	return 0;
}