#include <stdio.h>

int main() {
    // Desafio Super Trunfo - Cidades (Nível Novato)
    // Cadastro de 2 cartas e comparação fixa de população

    // Variáveis da carta 1
    char codigo1[10], nome1[30];
    int populacao1, pontos1;
    float area1, pib1;

    // Variáveis da carta 2
    char codigo2[10], nome2[30];
    int populacao2, pontos2;
    float area2, pib2;

    // Cadastro da primeira carta
    printf("Digite o código da cidade 1: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade 1: ");
    scanf("%s", nome1);
    printf("Digite a população da cidade 1: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade 1: ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade 1: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &pontos1);

    // Cadastro da segunda carta
    printf("\nDigite o código da cidade 2: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade 2: ");
    scanf("%s", nome2);
    printf("Digite a população da cidade 2: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade 2: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%d", &pontos2);

    // Comparação fixa: População
    printf("\nComparando População...\n");
    if (populacao1 > populacao2) {
        printf("A cidade vencedora é: %s (maior população)\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("A cidade vencedora é: %s (maior população)\n", nome2);
    } else {
        printf("As duas cidades possuem a mesma população.\n");
    }

    return 0;
}