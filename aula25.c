#include<stdio.h>

int gGlobal = 2;

int main(int argc, char const *argv[])
{
	void teste(void);

	printf("Glocal = %i\n",gGlobal);
	teste();
	teste();

	return 0;
}

void teste(void){

	int automatica = 2;

	automatica *= 2;

	static int estatica = 2;

	estatica *= 2;

	gGlobal *= 2;

	printf("Local automatica = %i\n",automatica );
	printf("Local estatica = %i\n",estatica );
	printf("Glocal = %i\n",gGlobal);
}