#include <stdio.h>

int main() {
    //carta1
    char codigoDaCarta1[19] = "A01";
    char estado1 [10]= "c";
    char nomeDaCidade1[50] = "Fortaleza";
    int populacao1 = 2000;
    float area1 = 10.000;
    float pib1 = 30.000;
    int pontosTuristicos1 = 50;

    //carta2
    char codigoDaCarta2[19] = "A02";
    char estado2 [10]= "g";
    char nomeDaCidade2[50] = "Formosa";
    int populacao2 = 3000;
    float area2 = 20.000;
    float pib2 = 40.000;
    int pontosTuristicos2 = 20;

    printf("--DADOS CARTA 1\n");
    printf("Digite o código da Carta: \n");
    scanf("%18s", &codigoDaCarta1);

    printf("Digite o nome do Estado: \n");
    scanf("%9s", &estado1);

    printf("Digite o nome da Cidade: \n");
    scanf(" %49s", nomeDaCidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    //métodos leitura carta 2

    printf("--DADOS CARTA2\n");
    printf("Digite o código da Carta: \n");
    scanf("%18s", &codigoDaCarta2);

    printf("Digite o nome do Estado: \n");
    scanf("%9s", &estado2);

    printf("Digite o nome da Cidade: \n");
    scanf(" %49s", nomeDaCidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    printf("\n--- DADOS CADASTRADOS ---\n");
    printf("Código da Carta: %s\n", codigoDaCarta1);
    printf("Estado: %s\n", estado1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f\n", area1);
    printf("PIB: %.3f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n--- DADOS CADASTRADOS ---\n");
    printf("Código da Carta: %s\n", codigoDaCarta2);
    printf("Estado: %s\n", estado2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f\n", area2);
    printf("PIB: %.3f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("\n--- FINAL DO CODIGO ---\n");

    return 0;
}