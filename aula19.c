#include <stdio.h>

int main(void)
{
	int vetor[5] = {0};
	int total = 0;

	printf("Digite 5 valores\n");
		for (int i = 0; i < 5; ++i)
			scanf("%i",&vetor[i]);

	for (int i = 0; i < 5; ++i)
		total = total + vetor[i];

	printf("O resultado é: %i\n",total );


	return 0;
}