#include <stdio.h>

int main() {
    /*
    Super Trunfo - Nível Aventureiro
    Adiciona menu interativo para escolha do atributo de comparação
    */

    // Dados das cartas (pré-cadastrados)
    char estado1 = 'A', estado2 = 'B';
    char codigo1[4] = "A01", codigo2[4] = "B02";
    char cidade1[50] = "São Paulo", cidade2[50] = "Rio de Janeiro";
    int populacao1 = 12300000, populacao2 = 6000000;
    float area1 = 1521.11, area2 = 1200.25;
    float pib1 = 699.28, pib2 = 300.50;
    int pontos_turisticos1 = 50, pontos_turisticos2 = 30;
    
    // Variáveis calculadas
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;

    int opcao;
    
    // Menu interativo
    printf("=== SUPER TRUNFO - MENU DE COMPARAÇÃO ===\n\n");
    printf("Cartas disponíveis:\n");
    printf("1. %s (%c)\n", cidade1, estado1);
    printf("2. %s (%c)\n\n", cidade2, estado2);
    
    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per capita\n");
    printf("0 - Sair\n");
    printf("\nDigite sua opção: ");
    scanf("%d", &opcao);

    // Limpar buffer do teclado
    while(getchar() != '\n');

    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");
    printf("Carta 1: %s (%c)\n", cidade1, estado1);
    printf("Carta 2: %s (%c)\n\n", cidade2, estado2);

    // Lógica de comparação com switch
    switch(opcao) {
        case 1: // População
            printf("Atributo: POPULAÇÃO\n");
            printf("%s: %d habitantes\n", cidade1, populacao1);
            printf("%s: %d habitantes\n", cidade2, populacao2);
            
            if(populacao1 > populacao2) {
                printf("\nResultado: %s venceu!\n", cidade1);
            } 
            else if(populacao2 > populacao1) {
                printf("\nResultado: %s venceu!\n", cidade2);
            } 
            else {
                printf("\nResultado: Empate!\n");
            }
            break;
            
        case 2: // Área
            printf("Atributo: ÁREA\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            
            if(area1 > area2) {
                printf("\nResultado: %s venceu!\n", cidade1);
            } 
            else if(area2 > area1) {
                printf("\nResultado: %s venceu!\n", cidade2);
            } 
            else {
                printf("\nResultado: Empate!\n");
            }
            break;
            
        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", cidade1, pib1);
            printf("%s: %.2f bilhões\n", cidade2, pib2);
            
            if(pib1 > pib2) {
                printf("\nResultado: %s venceu!\n", cidade1);
            } 
            else if(pib2 > pib1) {
                printf("\nResultado: %s venceu!\n", cidade2);
            } 
            else {
                printf("\nResultado: Empate!\n");
            }
            break;
            
        case 4: // Pontos Turísticos
            printf("Atributo: PONTOS TURÍSTICOS\n");
            printf("%s: %d pontos\n", cidade1, pontos_turisticos1);
            printf("%s: %d pontos\n", cidade2, pontos_turisticos2);
            
            if(pontos_turisticos1 > pontos_turisticos2) {
                printf("\nResultado: %s venceu!\n", cidade1);
            } 
            else if(pontos_turisticos2 > pontos_turisticos1) {
                printf("\nResultado: %s venceu!\n", cidade2);
            } 
            else {
                printf("\nResultado: Empate!\n");
            }
            break;
            
        case 5: // Densidade Demográfica (menor vence)
            printf("Atributo: DENSIDADE DEMOGRÁFICA (menor vence)\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);
            
            if(densidade1 < densidade2) {
                printf("\nResultado: %s venceu!\n", cidade1);
            } 
            else if(densidade2 < densidade1) {
                printf("\nResultado: %s venceu!\n", cidade2);
            } 
            else {
                printf("\nResultado: Empate!\n");
            }
            break;
            
        case 6: // PIB per capita
            printf("Atributo: PIB PER CAPITA\n");
            printf("%s: %.8f bilhões/hab\n", cidade1, pib_per_capita1);
            printf("%s: %.8f bilhões/hab\n", cidade2, pib_per_capita2);
            
            if(pib_per_capita1 > pib_per_capita2) {
                printf("\nResultado: %s venceu!\n", cidade1);
            } 
            else if(pib_per_capita2 > pib_per_capita1) {
                printf("\nResultado: %s venceu!\n", cidade2);
            } 
            else {
                printf("\nResultado: Empate!\n");
            }
            break;
            
        case 0: // Sair
            printf("Saindo do jogo...\n");
            break;
            
        default:
            printf("Opção inválida! Por favor, escolha uma opção de 0 a 6.\n");
    }

    return 0;
}