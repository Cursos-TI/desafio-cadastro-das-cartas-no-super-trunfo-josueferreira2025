#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4],codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H0): ");
    scanf("%c", &estado1);
    printf("Código da Carta (ex: A01, B03): ");
    scanf( "%s" codigo1);
    printf("Nome da Cidade: ");
    scanf("%[^\n]" );
    printf("população: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos Turísticos: ");
    Scanf("%d", &pontosTuristicos1);

    printf("\nCadastro da Carta 2: \n");
    printf("Estado (A-H): ");
    scanf("%c", &estado2);
    printf("Código da Carta (ex: A01,B03): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%[^\n]", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km): ");
    scanf("%f", &area2);
    print("PiB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\nInformações das Cartas:\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}