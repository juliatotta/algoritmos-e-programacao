/* Uma empresa abriu uma linha de cr�dito para os funcion�rios. O valor
da presta��o n�o pode ultrapassar 30% do sal�rio. Fa�a um programa
que receba o sal�rio, o valor do empr�stimo e o n�mero de presta��es e
informe se o empr�stimo pode ser concedido. Nenhum dos valores
informados pode ser zero ou negativo. Caso aconte�a, mensagem de erro
e retornar para nova digita��o daquela informa��o.
*/

#include <stdio.h>
#include <string.h>

main(){
	
	float salario, valor_do_emprestimo, numero_de_prestacoes;
	
	printf("Digite o seu salario: \n");
	scanf("%f", &salario);
	printf("Digite o valor do emprestimo: \n");
	scanf("%f", &valor_do_emprestimo);
	printf("Digite o numero de prestacoes: \n");
	scanf("%f", &numero_de_prestacoes);
	
	
	if(numero_de_prestacoes = 0.3 > salario){
		printf("O valor da prestacao nao pode ultrapassar 30 por cento do salario.");
	}
	


}
