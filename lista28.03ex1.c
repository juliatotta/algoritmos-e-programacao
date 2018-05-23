/*Primeira Quest�o
Fazer um programa para que o usu�rio digite tr�s n�meros inteiros. O
usu�rio deve ser informado na tela do que ter� que digitar.

Os n�meros digitados n�o podem conter valores zero e nem serem
negativos (isso se aplica para os tr�s n�meros). Caso isso aconte�a, �
preciso exibir uma mensagem de erro para o usu�rio e retornar para uma
nova digita��o daquele valor err�neo.

Para o primeiro n�mero digitado s� podemos permitir a entrada de valores
m�ltiplos de tr�s. Caso n�o seja m�ltiplo de tr�s, exibir mensagem de erro
e retornar para nova entrada de dados.

Para o segundo n�mero, n�o h� nenhum tipo de restri��o. Qualquer
n�mero � valido.

Para o terceiro n�mero, s� poder� ser aceito n�meros pares. Caso seja
digitado um n�mero �mpar, o programa dever� tornar este n�mero par
atrav�s de uma opera��o aritm�tica.

Os tr�s n�meros digitados n�o podem ter valores iguais, caso haja n�mero
igual, exibir mensagem de erro e retornar para uma nova digita��o do
primeiro n�mero.

Diante dos tr�s n�meros v�lidos ap�s as cr�ticas executadas acima, o
programa dever� exibir na tela, nessa ordem: o menor n�mero, o n�mero
do meio e o maior n�mero.
As exibi��es destas informa��es dever�o acontecer um uma nova fun��o
a ser criada.*/  


#include <stdio.h>

int menor_numero(int n1, int n2, int n3);
int numero_do_meio(int n1, int n2, int n3);
int maior_numero(int n1, int n2, int n3);

main(){
	inicio:
	int n1, n2, n3;
	printf("Digite o primeiro numero: \n");
	scanf("%d", &n1);
	printf("Digite o segundo numero: \n");
	scanf("%d", &n2);
	printf("Digite o terceiro numero: \n");
	scanf("%d", &n3);
	
	if((n1 <= 0) || (n2 <= 0) || (n3 <= 0)){
		printf("Numero igual a zero ou negativo nao eh permitido neste programa. Tente novamente: \n");
		goto inicio;
	}
	
	if((n1 % 3)!= 0){
		printf("O primeiro numero deve ser multiplo de 3. Tente novamente: \n");
		goto inicio;
	}
	
	if((n3 % 2)!= 0){
		n3 = n3 + 1;
	}
	
	if((n1 == n2) || (n2 == n3) || (n3 == n1)){
		printf("Os numeros nao podem ser iguais. Tente novamente: \n");
		goto inicio;
	}
	
	printf("O menor numero: %d", menor_numero(n1, n2, n3));
	printf("O numero do meio: %d", numero_do_meio(n1, n2, n3));
	printf("O maior numero: %d", maior_numero(n1, n2, n3));
	
	
}


int maior_numero(int n1, int n2, int n3){
	
	if ((n1 > n2) && (n1 > n3)){
		printf("O maior numero eh o %d", n1);
		return n1;
	}
	else if ((n2 > n1) && (n2 > n3)){
		printf("O maior numero eh o %d", n2);
		return n2;
	}
	else if ((n3 > n1) && (n3 > n2)){
		printf("O maior numero eh o %d", n3);
		return n3;
	}
};

int mumero_do_meio(int n1, int n2, int n3){
	
	if(((n2 > n1) && (n1 > n3)) || ((n3 > n1) && (n1 > n2))){
		printf("O numero do meio eh %d", n1);
		return n1;
	}
	
	else if(((n1 > n2) && (n2 > n3)) || ((n3 > n2) && (n2 > n1))){
		printf("O numero do meio eh %d", n2);
		return n2;
	}
	
	else if(((n1 > n3) && (n3 > n2)) || ((n2 > n3) && (n3 > n2))){
		printf("O numero do meio eh %d", n3);
		return n3;
	}
	
	
};

int menor_numero(int n1, int n2, int n3){
	
	if((n1 < n2) && (n1 < n3)){
		printf("O menor numero eh %d", n1);
		return n1;
	}
	
	else if((n2 < n1) && (n2 < n3)){
		printf("O menor numero eh %d", n2);
		return n2;
	}
	
	else if((n3 < n1) && (n3 < n2)){
		printf("O menor numero eh %d", n3);
		return n3;
	}
};
