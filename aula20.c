#include<stdio.h>

int main(void)
{
	
	float notas[5] = {0};
	float total = 0;
	float media = 0;

	printf("Digite as 5 notas\n");

	for (int i = 0; i < 5; ++i)

		scanf("%f",&notas[i]);

	for (int i = 0; i < 5; ++i)
		total += notas[i];

	media = total / 5;

	printf("A media do aluno é: %f\n",media );


	return 0;
}