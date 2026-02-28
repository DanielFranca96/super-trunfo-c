#include <stdio.h>

int main() {
 

    // Declaração das Variaveis


    char estado1, estado2; // Uma letra de A a H
    char codigo1[10], codigo2[10], cidade1[50], cidade2[50]; //A letra do estado seguida de um número de 01 a 04, e o nome da cidade
    unsigned long int populacao1, populacao2; // Número de habitantes da cidade 
    int pontos_turisticos1, pontos_turisticos2; //Número de pontos turísticos da cidade
    float area1, area2, pib1, pib2, densidade1, densidade2, pibpercapita1, pibpercapita2, poder1, poder2; //Área da cidade em km² e PIB da cidade em bilhões de reais e densidade populacional e PIB per capita


    // Entrada de dados


    printf("\n\nVamos inserir os dados da primeira carta:\n\n");

    printf("Digite a letra do estado da carta (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da cidade (Letra do estado seguida de um número de 01 a 04): ");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade em bilhões de reais: ");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos a cidade possui? ");
    scanf("%d", &pontos_turisticos1);

    printf("\nAgora, vamos inserir os dados da segunda carta:\n\n");

    printf("Digite a letra do estado da carta (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da cidade (Letra do estado seguida de um número de 01 a 04): ");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade em bilhões de reais: ");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos a cidade possui? ");
    scanf("%d", &pontos_turisticos2);

    
    // Processamento de dados


    densidade1 = (float) populacao1 / area1; // Cálculo da densidade populacional da primeira cidade
    densidade2 = (float) populacao2 / area2; // Cálculo da densidade populacional da segunda cidade
    pibpercapita1 = ((float) pib1 / populacao1) * 1e9; // Cálculo do PIB per capita da primeira cidade (convertendo o PIB de bilhões para reais)
    pibpercapita2 = ((float) pib2 / populacao2) * 1e9; // Cálculo do PIB per capita da segunda cidade (convertendo o PIB de bilhões para reais)
    poder1 = (float) populacao1 + area1 + pib1 + pontos_turisticos1 + ( 1 / densidade1) + pibpercapita1; // Cálculo do poder da primeira carta
    poder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + ( 1 / densidade2) + pibpercapita2; // Cálculo do poder da segunda carta


    // Saída de dados

    
    printf("\nPrimeira carta:\n\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Possui %d Pontos turísticos\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita: %.2f reais por habitante\n", pibpercapita1);

    printf("\nSegunda carta:\n\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Possui %d Pontos turísticos\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita: %.2f reais por habitante\n", pibpercapita2);

    printf("\n\nComparação entre as cartas:\n\n");

    printf("População:                Primeira carta: %d -- Segunda carta: %d\n", populacao1 > populacao2, populacao2 > populacao1);
    printf("Área:                     Primeira carta: %d -- Segunda carta: %d\n", area1 > area2, area2 > area1);
    printf("PIB:                      Primeira carta: %d -- Segunda carta: %d\n", pib1 > pib2, pib2 > pib1);
    printf("Pontos turísticos:        Primeira carta: %d -- Segunda carta: %d\n", pontos_turisticos1 > pontos_turisticos2, pontos_turisticos2 > pontos_turisticos1);
    printf("Densidade populacional:   Primeira carta: %d -- Segunda carta: %d\n", densidade1 < densidade2, densidade2 < densidade1);
    printf("PIB per capita:           Primeira carta: %d -- Segunda carta: %d\n", pibpercapita1 > pibpercapita2, pibpercapita2 > pibpercapita1);
    printf("Super Poder:              Primeira carta: %d -- Segunda carta: %d\n", poder1 > poder2, poder2 > poder1);

    return 0;
}
