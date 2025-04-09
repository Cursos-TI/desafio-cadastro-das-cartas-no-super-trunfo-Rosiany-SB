#include <stdio.h>

int main() {
    //carta 2
    char estado [10]= "g";
    char codigoDaCarta[19] = "A02";
    char nomeDaCidade[50] = "Formosa";
    int populacao = 3000;
    float area = 20.000;
    float pib = 40.000;
    int pontosTuristicos = 20;

    printf("Digite o nome do Estado: \n");
    scanf("%9s", &estado);

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

    printf("\n--- DADOS CADASTRADOS ---\n");
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", codigoDaCarta);
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.3f\n", area);
    printf("PIB: %.3f\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

    return 0;
}

