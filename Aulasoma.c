
#include <stdio.h>
int main(){
    int num1, num2, soma;
    
    //Lendo dois números do usúario
    printf("Digite o primeiro numero:  ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    //Calculando a soma dos dois números

    soma = num1 + num2;

    //Exibindo a soma

    printf("A soma de %d e %d é: %d/n", num1, num2, soma);
    return 0;
    
}