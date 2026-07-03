#include <stdio.h>
#include <stdlib.h>
int main(){
    int idade, matricula;
    float altura;
    char nome[50];
    system("clear");

    printf("Sua idade: ");
    scanf("%d", &idade);
    printf("Sua altura: ");
    scanf("%f", &altura);
    printf("Seu nome: ");
    scanf("%s", &nome);
    printf("Sua matricula: ");
    scanf("%d", &matricula);
    printf("Nome do aluno:  %s - Matricula: %d  - Altura: %.2f Idade: %d \n", nome, matricula, altura, idade);
    printf("**Obrigada por informar seus dados!**");
    return 0;


}