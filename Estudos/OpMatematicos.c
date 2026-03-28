#include<stdio.h>

int main(void){

    /*
        Operadores matemáticos:
            Soma (+)
            subtração (-)
            Multiplicação (*)
            Divisão (/)
    */

    int num1, num2;
    int soma, multiplicacao, subtracao, divisao;


    printf("Digite o primeiro número: ");
        scanf("%d", &num1);

    printf("Agora digite o segundo número: ");
        scanf("%d", &num2);


    soma = num1 + num2;

    subtracao = num1 - num2;

    multiplicacao = num1 * num2;

    divisao = num1 / num2;

    printf("Soma: %d\n\n", soma);
    printf("Subtração: %d\n\n", subtracao);
    printf("Multiplicação: %d\n\n", multiplicacao);
    printf("Divisão: %d\n\n", divisao);

}