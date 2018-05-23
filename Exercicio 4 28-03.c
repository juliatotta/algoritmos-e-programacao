#include <stdio.h>
#include <string.h>

main(){
	char estado[10],sexo;
	float reaj, sal;
	
	inicio1:
	printf("\n Digite o salario: \n");
	scanf ("%f", &sal);
	if (sal<=1000 or sal>=7000){
		printf("\n Digite outro valor de salario\n");
		goto inicio1;
	}
	inicio2:
	printf("\n Digite o seu estado[goias, minas, rio, acre ou rondonia]: \n");
	scanf("%s", estado);
	
	
	if (strcmp(estado,"goias")!= 0 and strcmp(estado,"minas")!= 0 and strcmp(estado,"rio")!= 0 and strcmp(estado,"acre")!= 0 and strcmp(estado,"rondonia")!= 0)
	{
	printf("\n Digite um estado valido!\n");
	goto inicio2;
	}
	inicio3:
	printf("\n Informe seu sexo: \n");	
	scanf ("%s", &sexo);
	if (sexo!='m' and sexo!='f')
	{printf ("\n Digite um sexo valido!\n");
	goto inicio3;
		
	}
	
	if (strcmp(estado,"goias") == 0 and sexo=='f'){
	reaj=1.1;
}
	else if	(strcmp(estado,"minas") == 0 and sexo=='f'){
	reaj=1.14;
}
	else if	(strcmp(estado,"rio") == 0 and sexo=='m'){
	reaj=1.26;
}
	else if	(strcmp(estado,"acre") == 0 and sexo=='f'){
	reaj=1.39;
}
	else if	(strcmp(estado,"rondonia") == 0 and sexo=='m'){
	reaj=1.08;
}

	else 
	{
		printf("Erro!");
		goto inicio3;
	}
	
	sal=reaj*sal;
	printf("\n Seu salario reajustado foi de %f\n", sal);
	
}

