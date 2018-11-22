#include <stdio.h>

int main()
{
	//calculo fatorial

	int fatorial;
	int resposta = 1;

	printf("Digite o fatorial: ");
	scanf("%d",&fatorial);

	for (; fatorial >= 1; --fatorial){
		resposta *= fatorial;
		
	}

	printf("O numero fatorial é: %i\n",resposta );
	return 0;
}