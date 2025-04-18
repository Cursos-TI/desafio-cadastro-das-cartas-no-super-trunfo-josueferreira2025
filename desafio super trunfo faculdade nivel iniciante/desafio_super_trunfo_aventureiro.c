#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2;

    printf("Cadastro da Carta 1:\n");
    
    printf("Estado (A-H): \n");
    scanf(" %c", &estado1);
    
    printf("Código da Carta (ex: A01, B03): \n");
    scanf("%s", codigo1);
   
    printf("Nome da Cidade: \n");
    scanf(" %[^\n]", cidade1);
    
    printf("População: \n");
    scanf("%d", &populacao1);
    
    printf("Área (em km²): \n");
    scanf("%f", &area1);
    
    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);
    
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01, B03): \n");
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: \n");
    scanf(" %[^\n]", cidade2);
    
    printf("População: \n");
    scanf("%d", &populacao2);
    
    printf("Área (em km²): \n");
    scanf("%f", &area2);
    
    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);
    
    
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / populacao1;
    
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;

    printf("\nInformações das Cartas:\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}