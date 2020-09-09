/*BIBLIOTECAS*/
#include <stdio.h>
#include <stdlib.h>

/*VARIÁVEIS*/
int multipli, numb, result;

/*COMEÇO*/
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
