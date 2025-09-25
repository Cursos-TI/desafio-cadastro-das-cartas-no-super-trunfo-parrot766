#include <stdio.h>

int main() {
    // Definição das variáveis das cartas
    // Definição das variáveis da carta 1
    char estado1;
    char cidade1[50];
    char codigo1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_pop1;
    float pib_per_capita1;
    float superPoder1;

    // Definição das variáveis da carta 2
    char estado2;
    char cidade2[50];
    char codigo2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_pop2;
    float pib_per_capita2;
    float superPoder2;

    // Cadastro das Cartas
    // Leitura dos dados da carta 1
    printf("Digite o estado da carta 1: ");
    scanf(" %c", &estado1);
    
    printf("Digite a cidade da carta 1: ");
    scanf("%s", cidade1);

    printf("Digite o codigo da carta 1: ");
    scanf("%s", codigo1);

    printf("Digite a população da carta 1: ");
    scanf("%ld", &populacao1);

    printf("Digite a area da cidade (em km²) da carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculo de valores e atribuição dos resultados às variáveis
    densidade_pop1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // Cálculo do super poder da carta 1
    superPoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1/densidade_pop1);

    // Leitura dos dados da carta 2
    printf("\nDigite o estado da carta 2: ");
    scanf(" %c", &estado2);
    
    printf("Digite a cidade da carta 2: ");
    scanf("%s", cidade2);

    printf("Digite o codigo da carta 2: ");
    scanf("%s", codigo2);

    printf("Digite a população da carta 2: ");
    scanf("%ld", &populacao2);

    printf("Digite a area da cidade (em km²) da carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo de valores e atribuição dos resultados às variáveis
    densidade_pop2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Cálculo do super poder da carta 2
    superPoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1/densidade_pop2);

    // Exibição dos Dados das Cartas
    // Exibição dos dados da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %ld \n", populacao1);
    printf("Área: %f km² \n", area1);
    printf("PIB: %f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontos_turisticos1);
    printf("Densidade populacional: %.2f \n", densidade_pop1);
    printf("Pib per capita: R$%.2f \n", pib_per_capita1);
    printf("Super poder: %f\n", superPoder1);

    // Exibição dos dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %ld \n", populacao2);
    printf("Área: %f km² \n", area2);
    printf("PIB: %f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontos_turisticos2);
    printf("Densidade populacional: %.2f \n", densidade_pop2);
    printf("Pib per capita: R$%.2f \n", pib_per_capita2);
    printf("Super poder: %f\n", superPoder2);

    // Comparação de atributos das cartas
    printf("\nComparação de cartas:\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade populacional: %d\n", densidade_pop1 < densidade_pop2);
    printf("Pib per capita: %d\n", pib_per_capita1 > pib_per_capita2);
    printf("Super poder: %d\n", superPoder1 > superPoder2);

    return 0;
}
