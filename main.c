#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define MAX 20

int main(int argc, char *argv[]) {
	
	int vetor[MAX] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	char opcao[10];
	
	while(strcmp (opcao,"e") != 0) {
	    printf("--------------------------------------------------------------\n");
		printf("Escolha uma opcao:\n");
		printf("a - Consultar a posicao (0 a 19); Imprimir o codigo numerico na tela. \n");
		printf("b - Insercao de um novo elemento na posicao indicada pelo usuario; Se o usuario indicar uma posicao ocupada, os elementos devem andar para o final; Se o usuario indicar uma posicao que ainda nao foi alcançada, o item será inserido na ultima posicao.\n");
		printf("c - Retirar um elemento indicado pelo usuario; Se houver elementos posteriores, estes devem tomar a posicao que ficou livre; \n");
		printf("d - Consultar a quantidade de elementos; \n");
		printf("e - Sair do programa \n");
		printf("-------------------------------------------------------------\n");
		printf("Escolha: ");
		gets(opcao);
		
	}
	
	return 0;
}
