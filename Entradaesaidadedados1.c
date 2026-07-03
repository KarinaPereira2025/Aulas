#include <stdio.h>
int main(){

    int idade = 24;
    float altura = 1.70;
    double saldobancario = 234.56;
    char inicial = 'B';
    char nome[20] = "Bruno";
    system("clear");

    printf("Idade: %d anos \n", idade);
    printf("Altura: %.2f \n", altura);
    printf("Saldobancario: %.2f  \n", saldobancario);
    printf("Inicial %c  \n", inicial);
    printf("Nome: %s ", nome);

    return 0;
}