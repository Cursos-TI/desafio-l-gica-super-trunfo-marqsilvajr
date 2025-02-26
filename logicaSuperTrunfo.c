#include <stdio.h>

int main() {
    char estado01[20], estado02[20];
    char codigo01[10], codigo02[10];
    char cidade01[30], cidade02[30];
    unsigned long int populacao01, populacao02;
    float area01, area02, pib01, pib02;
    int pontos01, pontos02;
    float densidade01, densidade02;
    int escolha;

    // Primeira carta
    printf("Digite o estado da primeira cidade: ");
    scanf("%s", estado01);
    printf("Digite o código da primeira carta: ");
    scanf("%s", codigo01);
    printf("Digite o nome da primeira cidade: ");
    scanf("%s", cidade01);
    printf("Digite a população, área, PIB e pontos turísticos da primeira cidade: ");
    scanf("%lu %f %f %d", &populacao01, &area01, &pib01, &pontos01);

    // Segunda carta
    printf("Digite o estado da segunda cidade:\n");
    scanf("%s", estado02);
    printf("Digite o código da segunda carta: ");
    scanf("%s", codigo02);
    printf("Digite o nome da segunda cidade: ");
    scanf("%s", cidade02);
    printf("Digite a população, área, PIB e pontos turísticos da segunda cidade: ");
    scanf("%lu %f %f %d", &populacao02, &area02, &pib02, &pontos02);

    // Densidade Populacional
    densidade01 = populacao01 / area01;
    densidade02 = populacao02 / area02;

    // Informação cadastradas
    printf("\n### Informações das Cartas ###\n");
    printf("Carta 1 - %s (%s) | População: %lu | Área: %.2f | PIB: %.2f | Pontos Turísticos: %d | Densidade: %.2f\n",
           cidade01, estado01, populacao01, area01, pib01, pontos01, densidade01);
    printf("Carta 2 - %s (%s) | População: %lu | Área: %.2f | PIB: %.2f | Pontos Turísticos: %d | Densidade: %.2f\n",
           cidade02, estado02, populacao02, area02, pib02, pontos02, densidade02);

    // Menu para comparação
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 # População\n");
    printf("2 # Área\n");
    printf("3 # PIB\n");
    printf("4 # Pontos Turísticos\n");
    printf("5 # Densidade Populacional\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    // Comparação da escolha do usuário
    printf("\n### Comparação de Cartas ###\n");

    switch (escolha) {
        case 1:  // Sobre a população
            printf("Comparação de População:\n");
            printf("Carta 1 - %s (%s): %lu habitantes\n", cidade01, estado01, populacao01);
            printf("Carta 2 - %s (%s): %lu habitantes\n", cidade02, estado02, populacao02);
            if (populacao01 > populacao02)
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade01);
            else if (populacao01 < populacao02)
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade02);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2:  // Sobre a área
            printf("Comparação de Área:\n");
            printf("Carta 1 - %s (%s): %.2f km²\n", cidade01, estado01, area01);
            printf("Carta 2 - %s (%s): %.2f km²\n", cidade02, estado02, area02);
            if (area01 > area02)
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade01);
            else if (area01 < area02)
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade02);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3:  // Sobre o PIB
            printf("Comparação de PIB:\n");
            printf("Carta 1 - %s (%s): %.2f\n", cidade01, estado01, pib01);
            printf("Carta 2 - %s (%s): %.2f\n", cidade02, estado02, pib02);
            if (pib01 > pib02)
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade01);
            else if (pib01 < pib02)
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade02);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4:  // Sobre os pontos turísticos
            printf("Comparação de Pontos Turísticos:\n");
            printf("Carta 1 - %s (%s): %d pontos turísticos\n", cidade01, estado01, pontos01);
            printf("Carta 2 - %s (%s): %d pontos turísticos\n", cidade02, estado02, pontos02);
            if (pontos01 > pontos02)
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade01);
            else if (pontos01 < pontos02)
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade02);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5:  // Sobre a densidade populacional (##inverso##)
            printf("Comparação de Densidade Populacional:\n");
            printf("Carta 1 - %s (%s): %.2f habitantes/km²\n", cidade01, estado01, densidade01);
            printf("Carta 2 - %s (%s): %.2f habitantes/km²\n", cidade02, estado02, densidade02);
            if (densidade01 < densidade02)
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade01);
            else if (densidade01 > densidade02)
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade02);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida! o programa irá iniciar novamente... Escolha uma opção válida.\n");
            break;
    }
    return 0;
}
