/* Uma empresa abriu uma linha de crédito para os funcionários. O valor
da prestação não pode ultrapassar 30% do salário. Faça um programa
que receba o salário, o valor do empréstimo e o número de prestações e
informe se o empréstimo pode ser concedido. Nenhum dos valores
informados pode ser zero ou negativo. Caso aconteça, mensagem de erro
e retornar para nova digitação daquela informação.
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
