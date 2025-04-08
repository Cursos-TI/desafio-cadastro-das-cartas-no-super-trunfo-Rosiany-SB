#include <stdio.h>

int main() {
    //carta 1
    char estado [3]=;
    char codigoDaCarta[19];
    char nomeDaCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    
    printf("Digite o nome do Estado: \n");
    scanf("%s", &estado);

    printf("Digite o código da Carta: \n");
    scanf("%18s", &codigoDaCarta);

    printf("Digite o nome da Cidade: \n");
    scanf(" %49s", nomeDaCidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);

}