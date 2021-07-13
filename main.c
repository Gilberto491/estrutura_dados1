#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define MAX 20
char opcao[10];
int vetor[MAX] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

void leitura() {
	printf("--------------------------------------------------------------\n");
	printf("Escolha uma opção:\n");
	printf("a - Consultar a posição (0 a 19); Imprimir o código numérico na tela. \n");
	printf("b - Inserção de um novo elemento na posição indicada pelo usuário; Se o usuário indicar uma posição ocupada, os elementos devem andar para o final; Se o usuário indicar uma posição que ainda não foi alcançada, o item será inserido na última posição.\n");
	printf("c - Retirar um elemento indicado pelo usuário; Se houver elementos posteriores, estes devem tomar a posição que ficou livre; \n");
	printf("d - Consultar a quantidade de elementos; \n");
	printf("e - Sair do programa \n");
	printf("-------------------------------------------------------------\n");
	printf("Escolha: ");
	scanf("%s", opcao);
	system("cls");
}

//Teste de Verificação
void verificaPosicao(int posicao) {
	if(posicao < 0 || posicao >= 20) {
		printf("Resposta: posição não encontrada\n");
		return;
	} else {
		printf("Resposta: %d\n", vetor[posicao]);
	}	
}

int main(int argc, char *argv[]) {
	
	/*Configura os caracteres especiais e acentuação*/
	setlocale(LC_ALL, "Portuguese");
	
	int posicao, valor, i;	
	
	while(strcmp (opcao,"e") != 0) {
	    
	leitura();
	
		if(strcmp (opcao,"a") == 0) {
			printf("Que posição você deseja consultar: ");
			scanf("%d", &posicao);
			
			verificaPosicao(posicao);
		
		}
		
		if(strcmp (opcao,"b") == 0) {
			printf("Que posição você deseja inserir: ");
			scanf("%d", &posicao);
			
			if(vetor[posicao] != 0) {
				for(i = 19; i>= posicao; i--) {
					vetor[i+1] = vetor[i];
				}
			}
			
			printf("Informe o valor: ");
			scanf("%d", &valor);
			
			vetor[posicao] = valor;
			verificaPosicao(posicao);
		}
		
		if(strcmp (opcao,"c") == 0) {
			printf("Que posição você deseja remover: ");
			scanf("%d", &posicao);
			
			//Verificação
			if(vetor[posicao] == 0) {
				printf("Está posição já está ocupada");
			}else {
				for(i = posicao; i<=19; i++) {
					vetor[i] = vetor[i+1];
				}
			}
		}
		
		if(strcmp (opcao,"d") == 0) {
			printf("d");
		}	
	}
}
