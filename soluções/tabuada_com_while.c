/*BIBLIOTECAS*/
#include <stdio.h>
#include <stdlib.h>

/*VARI�VEIS*/
int multipli, numb, result;

/*COME�O*/
int main()
{
	multipli =0;
	printf("Digite um numero inteiro: ");
	scanf("%i", &numb);
	do
	{
		multipli++;
		result = multipli * numb;
		printf("\n %i x %i = %i", multipli, numb, result);
	}
	while (multipli != 10);
	printf("\n");
	system("pause");
	return 0;
}
