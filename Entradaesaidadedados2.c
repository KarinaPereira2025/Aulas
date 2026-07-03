#include <stdio.h>
#include <stdlib.h>
int main(){
    int idade, matricula;
    float altura;
    char nome[50];
    system("clear");

    printf("Sua idade: %d \n");
    scanf("%d", &idade);
    printf("Sua altura: %.2f \n");
    scanf("%f", &altura);
    printf("Seu nome: %s \n");
    scanf("%s",  &nome);
    printf("Sua matricula: %d \n");
    scanf("%d", &matricula);

    return 0;


}