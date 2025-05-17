#include <stdio.h>

int main() {
    // Dados da Carta 1
    char nome1[50] = "Brasil";
    int populacao1 = 213000000;
    float area1 = 8515767.0;
    float pib1 = 2490.0; // em bilhões de dólares
    int pontos_turisticos1 = 25;

    // Dados da Carta 2
    char nome2[50] = "Argentina";
    int populacao2 = 45100000;
    float area2 = 2780400.0;
    float pib2 = 487.0;
    int pontos_turisticos2 = 18;

    // Cálculo da densidade demográfica
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int opcao;

    printf("=== SUPER TRUNFO DOS PAÍSES ===\n");
    printf("Escolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\nComparando %s e %s:\n", nome1, nome2);

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d\n", nome1, populacao1);
            printf("%s: %d\n", nome2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área (km²)\n");
            printf("%s: %.2f\n", nome1, area1);
            printf("%s: %.2f\n", nome2, area2);
            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB (bilhões US$)\n");
            printf("%s: %.2f\n", nome1, pib1);
            printf("%s: %.2f\n", nome2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", nome1, pontos_turisticos1);
            printf("%s: %d\n", nome2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demográfica (hab/km²)\n");
            printf("%s: %.4f\n", nome1, densidade1);
            printf("%s: %.4f\n", nome2, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
    }

    return 0;
}
