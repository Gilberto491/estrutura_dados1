#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define MAX 20

int main(int argc, char *argv[]) {
	
	int vetor[MAX] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	int opcao = 0;
	
	while(opcao != 5) {
		printf("Escolha uma opção:\n");
		printf("1 - Preencher um valor de codigo numerico em 1 posicao (de 1 a 20)\n");
		printf("2 - Consultar o valor de determinada posicao\n");
		printf("3 - Excluir um valor registrado anteriormente\n");
		printf("4 - Consultar o numero de posicoes ocupadas\n");
		printf("5 - Sair do programa");
		scanf("%d", &opcao);
	}
	
	
	return 0;
}
