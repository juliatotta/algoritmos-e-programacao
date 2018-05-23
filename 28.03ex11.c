/*Desenvolver um algoritmo que leia os coeficientes (a, b e c) de
uma equação do segundo grau e calcule suas raízes. O programa deve
mostrar, quando possível, o valor das raízes calculadas e
a classificação das raízes.
Fórmulas:
delta = (pow(b,2) - 4 * a * c);
X1 = (-b + sqrt(delta))/(2 * a);
X2 = (-b - sqrt(delta))/ (2 * a); */

#include <stdio.h>
#include <string.h>
#include <math.h>

main(){
	
	float a, b, c, delta, x1, x2;
	printf("Informe os coeficientes a, b, e c de uma equacao do segundo grau: \n ");
    scanf("%f %f %f", &a, &b, &c);

    delta = (pow(b,2) - 4 * a * c);

    x1 = ( -b + sqrt(delta)) / (2 * a);

    x2 = ( -b - sqrt(delta)) / (2 * a);

    if(delta == 0) {
        printf("raiz unica \n x1 = %.2f \n", x1);

    } else if(delta < 0) {
        printf("raizes imaginarias \n \n");

    } else if(delta > 0) {
        printf("raizes distintas \n \nx1 = %.2f \nx2 = %.2f \n", x1, x2);
    }

return 0;
	
	
	
	
	
}
