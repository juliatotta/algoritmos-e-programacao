/*Primeira Questão
Fazer um programa para que o usuário digite três números inteiros. O
usuário deve ser informado na tela do que terá que digitar.

Os números digitados não podem conter valores zero e nem serem
negativos (isso se aplica para os três números). Caso isso aconteça, é
preciso exibir uma mensagem de erro para o usuário e retornar para uma
nova digitação daquele valor errôneo.

Para o primeiro número digitado só podemos permitir a entrada de valores
múltiplos de três. Caso não seja múltiplo de três, exibir mensagem de erro
e retornar para nova entrada de dados.

Para o segundo número, não há nenhum tipo de restrição. Qualquer
número é valido.

Para o terceiro número, só poderá ser aceito números pares. Caso seja
digitado um número ímpar, o programa deverá tornar este número par
através de uma operação aritmética.

Os três números digitados não podem ter valores iguais, caso haja número
igual, exibir mensagem de erro e retornar para uma nova digitação do
primeiro número.

Diante dos três números válidos após as críticas executadas acima, o
programa deverá exibir na tela, nessa ordem: o menor número, o número
do meio e o maior número.
As exibições destas informações deverão acontecer um uma nova função
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
