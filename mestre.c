#include <stdio.h>

int main() {
    // Desafio Super Trunfo - Cidades (Nível Mestre)
    // Comparação de DOIS atributos escolhidos

    char nome1[30], nome2[30];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;
    int a1, a2;

    // Cadastro
    printf("Digite o nome da cidade 1: ");
    scanf("%s", nome1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

    printf("\nDigite o nome da cidade 2: ");
    scanf("%s", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

    // Menu de atributos
    printf("\nAtributos disponíveis:\n");
    printf("1 - População (maior vence)\n");
    printf("2 - Área (maior vence)\n");
    printf("3 - PIB (maior vence)\n");
    printf("4 - Pontos turísticos (maior vence)\n");
    printf("5 - Densidade populacional (menor vence)\n");

    printf("Escolha o 1º atributo: ");
    scanf("%d", &a1);
    printf("Escolha o 2º atributo (desempate): ");
    scanf("%d", &a2);

    // Função simples para comparar
    int comparar(int opcao) {
        switch (opcao) {
            case 1: return (populacao1 > populacao2) ? 1 : (populacao2 > populacao1 ? 2 : 0);
            case 2: return (area1 > area2) ? 1 : (area2 > area1 ? 2 : 0);
            case 3: return (pib1 > pib2) ? 1 : (pib2 > pib1 ? 2 : 0);
            case 4: return (pontos1 > pontos2) ? 1 : (pontos2 > pontos1 ? 2 : 0);
            case 5: {
                float d1 = populacao1 / area1, d2 = populacao2 / area2;
                return (d1 < d2) ? 1 : (d2 < d1 ? 2 : 0);
            }
            default: return 0;
        }
    }

    // Comparação Mestre
    int r1 = comparar(a1);
    int vencedor = (r1 != 0) ? r1 : comparar(a2);

    if (vencedor == 1) printf("\nA vencedora é: %s\n", nome1);
    else if (vencedor == 2) printf("\nA vencedora é: %s\n", nome2);
    else printf("\nEmpate mesmo após dois critérios.\n");

    return 0;
}
