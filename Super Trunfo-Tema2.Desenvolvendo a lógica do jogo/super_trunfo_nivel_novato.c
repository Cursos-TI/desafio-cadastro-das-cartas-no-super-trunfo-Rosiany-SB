#include <stdio.h>

int main() {
    /*
    Super Trunfo - Comparação de Cartas (Nível Novato)
    Foco em if, -if-else
    */

    // Dados da Carta 1 (São Paulo)
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char cidade1[50] = "São Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos_turisticos1 = 50;
    
    // Dados da Carta 2 (Rio de Janeiro)
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6000000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontos_turisticos2 = 30;
    
    // Cálculos básicos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;

    // Atributo escolhido para comparação
    // Altere para o atributo desejado:
    // 1-População, 2-Área, 3-PIB, 4-Densidade, 5-PIB per capita, 6-Pontos Turísticos
    int atributo = 1; 

    printf("=== SUPER TRUNFO - COMPARAÇÃO DE CARTAS ===\n\n");

    // Comparação por POPULAÇÃO
    if(atributo == 1) {
        printf("Comparando POPULAÇÃO:\n");
        printf("%s: %d habitantes\n", cidade1, populacao1);
        printf("%s: %d habitantes\n", cidade2, populacao2);
        
        if(populacao1 > populacao2) {
            printf("Vencedor: %s (%c)\n", cidade1, estado1);
        } 
        else if(populacao2 > populacao1) {
            printf("Vencedor: %s (%c)\n", cidade2, estado2);
        } 
        else {
            printf("Empate!\n");
        }
    }
    
    // Comparação por ÁREA
    else if(atributo == 2) {
        printf("Comparando ÁREA:\n");
        printf("%s: %.2f km²\n", cidade1, area1);
        printf("%s: %.2f km²\n", cidade2, area2);
        
        if(area1 > area2) {
            printf("Vencedor: %s (%c)\n", cidade1, estado1);
        } 
        else if(area2 > area1) {
            printf("Vencedor: %s (%c)\n", cidade2, estado2);
        } 
        else {
            printf("Empate!\n");
        }
    }
    
    // Comparação por PIB
    else if(atributo == 3) {
        printf("Comparando PIB:\n");
        printf("%s: %.2f bilhões\n", cidade1, pib1);
        printf("%s: %.2f bilhões\n", cidade2, pib2);
        
        if(pib1 > pib2) {
            printf("Vencedor: %s (%c)\n", cidade1, estado1);
        } 
        else if(pib2 > pib1) {
            printf("Vencedor: %s (%c)\n", cidade2, estado2);
        } 
        else {
            printf("Empate!\n");
        }
    }
    
    // Comparação por DENSIDADE (menor valor vence)
    else if(atributo == 4) {
        printf("Comparando DENSIDADE (menor vence):\n");
        printf("%s: %.2f hab/km²\n", cidade1, densidade1);
        printf("%s: %.2f hab/km²\n", cidade2, densidade2);
        
        if(densidade1 < densidade2) {
            printf("Vencedor: %s (%c)\n", cidade1, estado1);
        } 
        else if(densidade2 < densidade1) {
            printf("Vencedor: %s (%c)\n", cidade2, estado2);
        } 
        else {
            printf("Empate!\n");
        }
    }
    
    // Comparação por PIB PER CAPITA
    else if(atributo == 5) {
        printf("Comparando PIB PER CAPITA:\n");
        printf("%s: %.8f bilhões/hab\n", cidade1, pib_per_capita1);
        printf("%s: %.8f bilhões/hab\n", cidade2, pib_per_capita2);
        
        if(pib_per_capita1 > pib_per_capita2) {
            printf("Vencedor: %s (%c)\n", cidade1, estado1);
        } 
        else if(pib_per_capita2 > pib_per_capita1) {
            printf("Vencedor: %s (%c)\n", cidade2, estado2);
        } 
        else {
            printf("Empate!\n");
        }
    }
    
    // Comparação por PONTOS TURÍSTICOS
    else if(atributo == 6) {
        printf("Comparando PONTOS TURÍSTICOS:\n");
        printf("%s: %d pontos\n", cidade1, pontos_turisticos1);
        printf("%s: %d pontos\n", cidade2, pontos_turisticos2);
        
        if(pontos_turisticos1 > pontos_turisticos2) {
            printf("Vencedor: %s (%c)\n", cidade1, estado1);
        } 
        else if(pontos_turisticos2 > pontos_turisticos1) {
            printf("Vencedor: %s (%c)\n", cidade2, estado2);
        } 
        else {
            printf("Empate!\n");
        }
    }
    
    // Atributo inválido
    else {
        printf("Atributo inválido selecionado!\n");
    }

    return 0;
}