#include <stdio.h>

int main() {
    // Definição das variáveis das cartas
    // Definição das variáveis da carta 1
    char estado1;
    char cidade1[50];
    char codigo1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Definição das variáveis da carta 2
    char estado2;
    char cidade2[50];
    char codigo2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Cadastro das Cartas
    // Leitura dos dados da carta 1
    printf("Digite o estado da carta 1: ");
    scanf(" %c", &estado1);
    
    printf("Digite a cidade da carta 1: ");
    scanf("%s", cidade1);

    printf("Digite o codigo da carta 1: ");
    scanf("%s", codigo1);

    printf("Digite a população da carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade (em km²) da carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &pontos_turisticos1);

    // Leitura dos dados da carta 2
    printf("\nDigite o estado da carta 2: ");
    scanf(" %c", &estado2);
    
    printf("Digite a cidade da carta 2: ");
    scanf("%s", cidade2);

    printf("Digite o codigo da carta 2: ");
    scanf("%s", codigo2);

    printf("Digite a população da carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade (em km²) da carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos Dados das Cartas
    // Exibição dos dados da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f km² \n", area1);
    printf("PIB: %f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontos_turisticos1);

    // Exibição dos dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f km² \n", area2);
    printf("PIB: %f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontos_turisticos2);

    return 0;
}
