#include <stdio.h>
int main(){
    //operadores matematicos

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Entre com o numero1: \n");
    scanf("%d", &numero1);
    printf("Entre com o numero2: \n");
    scanf("%d", &numero2);

    //Opereadores de soma
    soma =  numero1 + numero2;
    //Operadores de subtracao
    subtracao = numero1 - numero2;
    //Operadores de multiplicacao
    multiplicacao = numero1 * numero2;
    //Operadores de divisao
    divisao = numero1 / numero2;

    printf("A soma e: %d\n", soma);
    printf("A subtracao e: %d\n", subtracao);
    printf("A multiplicacao e: %d\n", multiplicacao);
    printf("A divisao e: %d\n", divisao);

}