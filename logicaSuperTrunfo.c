#include <stdio.h>

//Variáveis das cartas
int main(){
    //Carta 1
    char estado1[2];
    char carta1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    //Carta 2
    char estado2[2];
    char carta2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    //Dados carta 1
    printf("Primeira carta :)\n");

    printf("Digite o estado (1 letra): \n");
    scanf("%s", estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", carta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em KM: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

      //Dados carta 2
    printf("Segunda carta :)\n");

    printf("Digite o estado (1 letra): \n");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em KM: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

//calculando a densidade populacional e PIB per capita

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // exibindo as cartas

    printf("RESULTADO DA PRIMEIRA CARTA\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", carta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);

    printf("RESULTADO DA SEGUNDA CARTA\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", carta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);

// comparando as cartas


    printf("\n==== Comparação de Cartas (Atributo: População) ====\n");
    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);

    // Determinando a carta vencedora
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    }

    if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    return 0;
}
