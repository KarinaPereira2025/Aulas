#include <stdio.h>
main(){

    int idade = 24;
    float altura = 1.70;
    double saldobancario = 234.56;
    char inicial = 'B';
    char nome[20] = "Bruno";

    printf("Idade: %d anos \n", idade);
    printf("Altura: %2.f \n", altura);
    printf("Saldobancario: %2.f  \n", saldobancario);
    printf("Inicial %c  \n", inicial);
    printf("Nome: %s ", nome);

    return 0;
}