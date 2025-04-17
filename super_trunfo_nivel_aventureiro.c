#include <stdio.h>

int main() {
    /*
    Programa para cadastrar e exibir duas cartas do jogo Super Trunfo de Países - Nível Aventureiro
   
    */

    // Variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1;
    float pib_per_capita1;

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;

    printf("=== SUPER TRUNFO DE PAÍSES ===\n\n");

    // Leitura Carta 1
    printf("--- Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Código (ex: %c01): ", estado1);
    scanf("%s", codigo1);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    
    printf("População: ");
    scanf("%d", &populacao1);
    
    printf("Área (km²): ");
    scanf("%f", &area1);
    
    printf("PIB (bilhões R$): ");
    scanf("%f", &pib1);
    
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos Carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // Leitura Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Código (ex: %c02): ", estado2);
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    
    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área (km²): ");
    scanf("%f", &area2);
    
    printf("PIB (bilhões R$): ");
    scanf("%f", &pib2);
    
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos Carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Exibição Carta 1
    printf("\n=== CARTAS CADASTRADAS ===\n");
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões R$\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.8f bilhões R$\n", pib_per_capita1);

    // Exibição Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões R$\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.8f bilhões R$\n", pib_per_capita2);

    return 0;
}
