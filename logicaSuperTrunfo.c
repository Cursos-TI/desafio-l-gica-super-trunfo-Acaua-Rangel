#include <stdio.h>  // Biblioteca padrão de entrada e saída

int main() {
    // === Declaração de variáveis das cartas ===
    char estado1, estado2;                  // Estado representado por uma letra de A a H
    char codigo1[4], codigo2[4];            // Código da carta no formato 'A01'
    int numero_carta1, numero_carta2;       // Número da carta (1 a 4)
    char cidade1[50], cidade2[50];          // Nome da cidade

    unsigned long int populacao1, populacao2;  // População

    float area1, area2;                     // Área da cidade em km²
    float densidade1, densidade2;           // Densidade populacional
    float pib1, pib2;                       // PIB da cidade (em bilhões)
    float percapta1, percapta2;             // PIB per capita
    int num_pontos1, num_pontos2;           // Pontos turísticos

    // ==== Cadastro da Carta 1 ====
    printf("=========  Carta 1  =========\n\n");
    printf("Digite o estado da carta (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o número da carta (1-4): ");
    scanf("%d", &numero_carta1);
    sprintf(codigo1, "%c%02d", estado1, numero_carta1);  // Gera código como A01

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade1);

    printf("Digite o tamanho da população: ");
    scanf("%lu", &populacao1);

    printf("Digite o tamanho da cidade em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &num_pontos1);

    // Calculando densidade e PIB per capita da Carta 1
    densidade1 = (float)populacao1 / area1;
    percapta1 = pib1 / (float)populacao1;

    // ==== Cadastro da Carta 2 ====
    printf("\n\n=========  Carta 2  =========\n\n");
    printf("Digite o estado da carta (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o número da carta (1-4): ");
    scanf("%d", &numero_carta2);
    sprintf(codigo2, "%c%02d", estado2, numero_carta2);  // Gera código como B02

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Digite o tamanho da população: ");
    scanf("%lu", &populacao2);

    printf("Digite o tamanho da cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &num_pontos2);

    // Calculando densidade e PIB per capita da Carta 2
    densidade2 = (float)populacao2 / area2;
    percapta2 = pib2 / (float)populacao2;

    // ==== Comparação entre as Cartas (usando atributo fixo: PIB per capita) ====
    printf("\n\n=========  Comparação de Cartas  =========\n");

    printf("Atributo utilizado: PIB per capita\n\n");

    printf("Carta 1 - %s (%c): R$ %.2f bilhões por habitante\n", cidade1, estado1, percapta1);
    printf("Carta 2 - %s (%c): R$ %.2f bilhões por habitante\n", cidade2, estado2, percapta2);

    // Determinando a carta vencedora
    if (percapta1 > percapta2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (percapta2 > percapta1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate entre as cartas!\n");
    }

    return 0;
}
