#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define MAX 20
char opcao[10];
int vetor[MAX] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};


void leitura() {
	
	printf("\n--------------------------------------------------------------\n");
	printf("Escolha uma opcao:\n");
	printf("a - Consultar a posicao (0 a 19); Imprimir o c�digo num�rico na tela. \n");
	printf("b - Insercao de um novo elemento na posicao indicada pelo usuario; Se o usuario indicar uma posicao ocupada, os elementos devem andar para o final; Se o usuario indicar uma posicao que ainda nao foi alcan�ada, o item ser� inserido na ultima posicao.\n");
	printf("c - Retirar um elemento indicado pelo usuario; Se houver elementos posteriores, estes devem tomar a posicao que ficou livre; \n");
	printf("d - Consultar a quantidade de elementos; \n");
	printf("e - Sair do programa \n");
	printf("-------------------------------------------------------------\n");
	printf("Escolha: ");
	scanf("%s", &opcao);
	
}

int main(int argc, char *argv[]) {
<<<<<<< HEAD
	
	int vetor[MAX] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	char opcao[1];
	
	while(strcmp (opcao,"e") != 0) {
	    printf("--------------------------------------------------------------\n");
		printf("Escolha uma opcao:\n");
		printf("a - Consultar a posicao (0 a 19); Imprimir o codigo numerico na tela. \n");
		printf("b - Insercao de um novo elemento na posicao indicada pelo usuario; Se o usuario indicar uma posicao ocupada, os elementos devem andar para o final; Se o usuario indicar uma posicao que ainda nao foi alcan�ada, o item ser� inserido na ultima posicao.\n");
		printf("c - Retirar um elemento indicado pelo usuario; Se houver elementos posteriores, estes devem tomar a posicao que ficou livre; \n");
		printf("d - Consultar a quantidade de elementos; \n");
		printf("e - Sair do programa \n");
		printf("-------------------------------------------------------------\n");
		printf("Escolha: ");
		gets(opcao);
		
		
		if(strcmp (opcao,"a") == 0) {
			printf("a");
		}else if(strcmp (opcao,"b") == 0) {
			printf("b");
		}else if(strcmp (opcao,"c") == 0) {
			printf("c");
		}else if(strcmp (opcao,"d") == 0) {
			printf("d");
		}else {
			system("pause");
=======
	
	/*Configura os caracteres especiais e acentua��o*/
	setlocale(LC_ALL, "Portuguese");
	printf ("Localidade corrente: %s\n", setlocale(LC_ALL,NULL) );
	
	int posicao;	
	
	while(strcmp (opcao,"e") != 0) {
	    
	leitura();
	
		
		if(strcmp (opcao,"a") == 0) {
			printf("Que posicao voce deseja consultar: ");
			scanf("%d", &posicao);
			
			//teste de verifica��o
			if(posicao < 0 || posicao >= 20) {
				printf("posicao nao encontrada");
			}
			
			printf("Resposta: %d\n", vetor[posicao]);
			
		}if(strcmp (opcao,"b") == 0) {
			printf("b");
		}
		
		if(strcmp (opcao,"c") == 0) {
			printf("c");
>>>>>>> 97461caa851bd416b13b4155d4f72a0d13411dd2
		}
		
		if(strcmp (opcao,"d") == 0) {
			printf("d");
		}
		
	
				
	}
	
}
