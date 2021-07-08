/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*variáveis*/
float * notas;
float procura;
int quant, i;


int main()
{
	printf("Quantas notas cadastrar?\n");
	fflush(stdin); scanf("%i", &quant); 
	
	notas = (float*) malloc(quant * sizeof(float));
	
	for(i=0; i<quant; i++)
	{
		printf("digite a nota %i: ", i+1);
		fflush(stdin); scanf("%f", &notas[i]);
	}
	
	printf("\n\nQual nota procurar?\n");
	fflush(stdin); scanf("%f", &procura);
	for(i=0; i<quant; i++)
	{
		if(procura == notas[i])
		printf("nota: %.2f\t encontrada no endereco: %p", procura, notas[i]);
	}
	
	free(notas);
	return(0);
}
