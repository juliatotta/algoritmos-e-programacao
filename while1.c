/*Fazer um programa para que o usuário possa digitar uma palavra e imprimir as 4 primeiras letras da palavra.*/


#include <stdio.h>
#include <string.h>


int main(){

    char palavra[10] = {};
    int letras = 0;

    printf("Digite uma palavra: \n");
    gets(palavra);

    while(letras <= 3){

        printf("%c", palavra[letras]);
        letras++;
    }

    return 0;
}
