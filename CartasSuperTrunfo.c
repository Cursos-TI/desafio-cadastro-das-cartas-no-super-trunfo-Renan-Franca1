#include <stdio.h>

int main(){
    char carta;
    char estado;
    char codigodacarta[30];
    char nomedacidade[50];
    int populacao;
    float area;
    float pib;
    int numeropontosturisticos;

    printf("digite o nome da carta: \n");
    scanf("%s" , carta);

    printf("digite o nome do estado: \n");
    scanf("%s" , estado);

    printf("digite o codigo da carta: \n");
    scanf("%s" , codigodacarta);

    printf("digite o nome da cidade: \n");
    scanf("%s" , nomedacidade);

    printf("digite a populacao \n");
    scanf("%d" , populacao);

    printf("digite a area em metros quadrados \n");
    scanf("%f" , area);

    printf("digite o pib \n");
    scanf("%f" , pib);

    printf("digite o numero de pontos turisticos \n");
    scanf("%d" , numeropontosturisticos);

    printf("digite o nome da carta: %s - carta");
    printf("digite o nome do estado: %s - estado");
    printf("digite o codigo da carta: %s - codigodacarta");
    printf("digite o nome da cidade: %s - nomedacidade");
    printf("digite a populacao: %d - populacao");
    printf("digite a area em metros quadrados: %f - area");
    printf("digite o pib: %f - pib");
    printf("digite o numero de pontos turisticos: %d -  numeropontosturisticos");

     return 0;
}
