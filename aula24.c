#include <stdio.h>

int main(void)
{
	float calcularRetang(float x, float y);
	
	float area = calcularRetang(10.0, 20.0);

	printf("A area eh: %f",area );
	

	return 0;
}

float calcularRetang(float base, float altura){


	float area = base * altura;

	return area;
}