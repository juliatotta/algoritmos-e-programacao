/* Um comerciante comprou um produto e quer vendê-lo com lucro
de 50% se o valor da compra for menor que 560,00; caso contrário,
o lucro será de 20%. Entrar com o valor do produto e exibir o valor
da venda.*/

#include <stdio.h>
#include <string.h>

main(){
	
	
	float produto, lucro, valor_da_compra;
	printf("\n Digite o valor da compra: \n");
	scanf("%f", &valor_da_compra);
	
	produto = 560;
	
	if(valor_da_compra < produto){
		valor_da_compra = valor_da_compra * 50 / 100; 
		printf("\nO valor da compra com desconto eh de %f \n", valor_da_compra);
	}
	else {
		 valor_da_compra = valor_da_compra * 20 / 100;
		 printf("\nO valor da compra comdesconto eh de %f \n", valor_da_compra);
	}
}
