#include <stdio.h>

int main() {
    // Desafio Super Trunfo - Cidades (Nível Aventureiro)
    // Comparação escolhida pelo usuário (menu com switch)

    char nome1[30], nome2[30];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;
    int opcao;

    // Cadastro das cidades
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

    // Menu
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional (menor vence)\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            if (populacao1 > populacao2) printf("Vencedora: %s\n", nome1);
            else if (populacao2 > populacao1) printf("Vencedora: %s\n", nome2);
            else printf("Empate!\n");
            break;
        case 2:
            if (area1 > area2) printf("Vencedora: %s\n", nome1);
            else if (area2 > area1) printf("Vencedora: %s\n", nome2);
            else printf("Empate!\n");
            break;
        case 3:
            if (pib1 > pib2) printf("Vencedora: %s\n", nome1);
            else if (pib2 > pib1) printf("Vencedora: %s\n", nome2);
            else printf("Empate!\n");
            break;
        case 4:
            if (pontos1 > pontos2) printf("Vencedora: %s\n", nome1);
            else if (pontos2 > pontos1) printf("Vencedora: %s\n", nome2);
            else printf("Empate!\n");
            break;
        case 5: {
            float dens1 = populacao1 / area1;
            float dens2 = populacao2 / area2;
            if (dens1 < dens2) printf("Vencedora: %s (menor densidade)\n", nome1);
            else if (dens2 < dens1) printf("Vencedora: %s (menor densidade)\n", nome2);
            else printf("Empate!\n");
            break;
        }
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}

