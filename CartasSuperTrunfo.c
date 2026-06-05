#include <stdio.h>

int mai() {
   //Variaveis da carta 1
   char estado1;
   char codigo1[4];
   char cidade1[50];
   int populaçao1;
   float area1;
   float pib1;
   int pontosTuristicos1;

   //Variaveis da carta 2
   char estado2;
   char codigo2[4];
   char cidade2[50];
   int populaçao2;
   float area2;
   float pib2;
   int pontosTuristicos2;

   // Cadastro carta 1
   printf("=== Cadastro da carta 1 ===\n");

   printf("Estado (A a H): ");
   scanf(" %c", &estado1);

   printf("Codigo da Carta (ex: A01): ");
   scanf("%s", codigo1);

   printf("Nome da Cidade: ");
   scanf(" %s", cidade1);

   printf("Populaçao: ");
   scanf("%d", &populaçao1);

   printf("Area (km²): ");
   scanf("%f", &area1);

   printf("PIB (em bilhoes de reais): ");
   scanf("%f", &pib1);

   printf("Numero de pontos turisticos: ");
   scanf("%d", &pontosTuristicos1);

   //Cadastro de carta 2
   printf("\n=== Cadastro da Carta 2 ===\n");

   printf("Estado (A a H): ");
   scanf(" %c", &estado2);

   printf("Codigo da Carta (ex: A01): ");
   scanf("%s", codigo2);

   printf("Nome da Cidade: ");
   scanf(" %s", cidade2);

   printf("Populaçao: ");
   scanf("%d", &populaçao2);

   printf("Area (km²): ");
   scanf("%f", &area2);

   printf("PIB (em bilhoes de reais): ");
   scanf("%f", &pib2);

   printf("Numero de pontos turisticos: ");
   scanf("%d", &pontosTuristicos2);


















}
