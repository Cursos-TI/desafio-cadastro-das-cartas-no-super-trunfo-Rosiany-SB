#include <stdio.h>

int main() {
    //carta 1
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

    return 0;

}