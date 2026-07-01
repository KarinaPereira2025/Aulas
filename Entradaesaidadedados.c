#include <stdio.h>
int main(){

    int idade; 
    float altura;
    double saldobancario;
    char inicial;
    //char nome[20] = "Bruno"; 

    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    
    printf("Digite sua altura: \n");
    scanf("%f", &altura);
    
    printf("Digite seu saldobancario: \n");
    scanf("%lf", &saldobancario);

   printf("digite a inicialdonome: \n");
   scanf(" %c", &inicial);
    //printf("nome: %s \n", nome);

    return 0;

}