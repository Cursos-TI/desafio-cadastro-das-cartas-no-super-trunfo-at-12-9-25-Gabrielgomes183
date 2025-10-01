#include <stdio.h>

int main() {
    // Carta 1
    char codigo1[4], nome1[30];
    int pontosTuristicos1;
    int populacao1;
    float area1, pib1;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Código da cidade: "); scanf("%s", codigo1);
    printf("Nome da cidade: "); scanf("%s", nome1);
    printf("População: "); scanf("%d", &populacao1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB (bilhões): "); scanf("%f", &pib1);
    printf("Pontos turísticos: "); scanf("%d", &pontosTuristicos1);

    // Carta 2
    char codigo2[4], nome2[30];
    int pontosTuristicos2;
    int populacao2;
    float area2, pib2;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Código da cidade: "); scanf("%s", codigo2);
    printf("Nome da cidade: "); scanf("%s", nome2);
    printf("População: "); scanf("%d", &populacao2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("PIB (bilhões): "); scanf("%f", &pib2);
    printf("Pontos turísticos: "); scanf("%d", &pontosTuristicos2);

    // Exibição
    printf("\n=== Dados das Cartas ===\n");
    printf("Carta 1: %s, %s, População: %d, Área: %.2f km², PIB: %.2f, Pontos Turísticos: %d\n",
           codigo1, nome1, populacao1, area1, pib1, pontosTuristicos1);
    printf("Carta 2: %s, %s, População: %d, Área: %.2f km², PIB: %.2f, Pontos Turísticos: %d\n",
           codigo2, nome2, populacao2, area2, pib2, pontosTuristicos2);

    return 0;
}

#include <stdio.h>

int main() {
    // Mesmas variáveis do Novato
    char codigo1[4], nome1[30], codigo2[4], nome2[30];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2;

    // Cadastro (igual ao Novato)
    printf("=== Cadastro da Carta 1 ===\n");
    scanf("%s %s %d %f %f %d", codigo1, nome1, &populacao1, &area1, &pib1, &pontosTuristicos1);

    printf("=== Cadastro da Carta 2 ===\n");
    scanf("%s %s %d %f %f %d", codigo2, nome2, &populacao2, &area2, &pib2, &pontosTuristicos2);

    // Cálculo de atributos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // Exibição
    printf("\n=== Dados das Cartas com Atributos Calculados ===\n");
    printf("Carta 1: %s, %s, População: %d, Área: %.2f km², PIB: %.2f, Pontos Turísticos: %d, Densidade: %.2f, PIB per Capita: %.2f\n",
           codigo1, nome1, populacao1, area1, pib1, pontosTuristicos1, densidade1, pibPerCapita1);
    printf("Carta 2: %s, %s, População: %d, Área: %.2f km², PIB: %.2f, Pontos Turísticos: %d, Densidade: %.2f, PIB per Capita: %.2f\n",
           codigo2, nome2, populacao2, area2, pib2, pontosTuristicos2, densidade2, pibPerCapita2);

    return 0;
}

#include <stdio.h>

int main() {
    char codigo1[4], nome1[30], codigo2[4], nome2[30];
    unsigned long int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2;

    // Cadastro
    printf("Carta 1: "); scanf("%s %s %lu %f %f %d", codigo1, nome1, &populacao1, &area1, &pib1, &pontosTuristicos1);
    printf("Carta 2: "); scanf("%s %s %lu %f %f %d", codigo2, nome2, &populacao2, &area2, &pib2, &pontosTuristicos2);

    // Cálculo de atributos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // Comparação
    printf("\nComparações:\n");
    printf("População: %d\n", populacao1 > populacao2 ? 1 : 0);
    printf("Área: %d\n", area1 > area2 ? 1 : 0);
    printf("PIB: %d\n", pib1 > pib2 ? 1 : 0);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 0);
    printf("Densidade Populacional: %d\n", densidade1 < densidade2 ? 1 : 0);
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2 ? 1 : 0);

    // Super Poder
    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + (1/densidade1) + pibPerCapita1;
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + (1/densidade2) + pibPerCapita2;
    printf("Super Poder: %d\n", superPoder1 > superPoder2 ? 1 : 0);

    return 0;
}

