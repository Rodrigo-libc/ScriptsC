#include<stdio.h>

int main(void)
{

	struct horario
	{
		int horas;
		int minutos;
		int segundos;
	};
	struct horario teste[5]= {{10, 40, 60},{30, 40, 60},
	{30, 40, 50},{60, 30, 70},{40, 50, 30}};

		int i;

		for (int i = 0; i < 5; ++i)
		{
			printf("%i:%i:%i\n",teste[i].horas,
								teste[i].minutos,
								teste[i].segundos);

		}
	return 0;
}