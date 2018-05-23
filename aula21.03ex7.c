#include<stdio.h>

main ()
{
    char nome[30];
    char sexo;
    int idade = 0;
    
inicio:
    printf("Digite seu nome: ");
    scanf("%s", nome);
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if ((idade <= 0) || (idade > 100)){
        printf ("Invalido, favor informar novos dados.\n");
        goto inicio;
    }
    
    printf("Digite seu sexo m ou f: ");
    scanf(" %c", &sexo);
    if ((sexo != 'm') && (sexo != 'f')){
        printf("Invalido, favor informar novos dados.\n");
        goto inicio;
    }

     if ((idade>18) && (idade<35) && (sexo=='f')){
        printf("%s esta aceito no projeto.", nome);
    }
    else{
        printf("Nao aceito no projeto.");

    }
}
