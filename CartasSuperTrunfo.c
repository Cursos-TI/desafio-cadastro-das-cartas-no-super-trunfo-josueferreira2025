#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4],codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2; 
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    printf("Cadastro da Carta 1:\n");
    scanf("%d", &cadastro1);
    printf("Estado: \n");
    scanf("%c", &estado1);
    printf("Código da Carta: \n");
    scanf("%s" codigo1);
    printf("Nome da Cidade: \n");
    scanf("%[^\n]" );
    printf("população: \n");
    scanf("%d", &populacao1);
    printf("Área (em km²): \n");
    scanf("%f", &area1);
    printf("PIB: \n");
    scanf("%f", &pib1);
    printf("Número de pontos Turísticos: \n");
    Scanf("%d", &pontosTuristicos1);

    printf("\nCadastro da Carta 2: \n");
    scanf("%d", &cadastro2);
    printf("Estado: \n");
    scanf("%c", &estado2);
    printf("Código da Carta: \n");
    scanf("%s" codigo2);
    printf("Nome da Cidade: \n");
    scanf("%[^\n]" );
    printf("população: \n");
    scanf("%d", &populacao2);
    printf("Área (em km²): \n");
    scanf("%f", &area2);
    printf("PIB: \n");
    scanf("%f", &pib2);
    printf("Número de pontos Turísticos: \n");
    Scanf("%d", &pontosTuristicos2);

        return 0;
}