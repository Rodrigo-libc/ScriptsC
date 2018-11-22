#include <stdio.h>

int main(void){
	
	float alunos[4][4] = {0};
	float medias[4] = {0};
	float media = 0;
	int i, j;

	

	printf("Insira as 4 notas do aluno 1\n");
	
	for (i = 0; i < 4; ++i){

		for (j = 0; j < 4; ++j){

			scanf("%f",&alunos[i][j]);

			media += alunos[i][j];

		}
		medias[i] = media / 4;
		media = 0;
		printf("Insira as 4 notas do aluno %i\n", i + 2);

	}
	for (i = 0; i < 4; ++i){

		printf("A media do aluno %i eh %.2f\n", i + 1, medias[i] );
	}

	return 0;
}