#include <stdio.h>

int main() {

    // CARTA 1
    char estado1[20];
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    // CARTA 2
    char estado2[20];
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

   
   
    // ================= CARTA 1 =================
    printf("=== Carta 1 ===\n");

    printf("Estado:");
    scanf("%19s", estado1);

    printf("Codigo:");
    scanf("%9s", codigo1);

    printf("Cidade:");
    scanf(" %49[^\n]", cidade1);

    printf("Populacao:");
    scanf("%d", &populacao1);

    printf("Area:");
    scanf("%f", &area1);

    printf("PIB:");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // CÁLCULOS CARTA 1
    densidadePopulacional1 = (float) populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // SAÍDA CARTA 1
    printf("\n=== RESULTADO CARTA 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    // ================= CARTA 2 =================
    printf("\n=== Carta 2 ===\n");

    printf("Estado:");
    scanf("%19s", estado2);

    printf("Codigo:");
    scanf("%9s", codigo2);

    printf("Cidade:");
    scanf(" %49[^\n]", cidade2);

    printf("Populacao:");
    scanf("%d", &populacao2);

    printf("Area:");
    scanf("%f", &area2);

    printf("PIB:");
    scanf("%f", &pib2);

    printf("Pontos Turisticos:");
    scanf("%d", &pontosTuristicos2);

    // CÁLCULOS CARTA 2
    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // SAÍDA CARTA 2
    printf("\n=== RESULTADO CARTA 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    return 0;
}