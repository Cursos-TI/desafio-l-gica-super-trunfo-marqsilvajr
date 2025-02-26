#include <stdio.h>

int main() {
    char estado01[20], estado02[20];
    char codigo01[10], codigo02[10];
    char cidade01[30], cidade02[30];
    unsigned long int populacao01, populacao02;
    float area01, area02, pib01, pib02;
    int pontostur01, pontostur02;
    float densidade01, densidade02;
    int escolha01 = 0, escolha02 = 0;
    float valor01_carta01, valor01_carta02, valor02_carta01, valor02_carta02, soma01, soma02;

// Primeira carta...
    printf("Digite o estado da primeira cidade: ");
    scanf("%s", estado01);
    printf("Digite o código da primeira carta: ");
    scanf("%s", codigo01);
    printf("Digite o nome da primeira cidade: ");
    scanf("%s", cidade01);
    printf("Digite a população, área, PIB e pontos turísticos da primeira cidade:\n");
    scanf("%lu %f %f %d", &populacao01, &area01, &pib01, &pontostur01);

// Segunda carta...
    printf("Digite o estado da segunda cidade:\n");
    scanf("%s", estado02);
    printf("Digite o código da segunda carta: ");
    scanf("%s", codigo02);
    printf("Digite o nome da segunda cidade: ");
    scanf("%s", cidade02);
    printf("Digite a população, área, PIB e pontos turísticos da segunda cidade:\n");
    scanf("%lu %f %f %d", &populacao02, &area02, &pib02, &pontostur02);

// Densidade Populacional...
    densidade01 = populacao01 / area01;
    densidade02 = populacao02 / area02;

// Informação cadastradas...
    printf("\n### Informações das Cartas ###\n");
    printf("Carta 1 - %s (%s) | População: %lu | Área: %.2f | PIB: %.2f | Pontos Turísticos: %d | Densidade: %.2f\n",
           cidade01, estado01, populacao01, area01, pib01, pontostur01, densidade01);
    printf("Carta 2 - %s (%s) | População: %lu | Área: %.2f | PIB: %.2f | Pontos Turísticos: %d | Densidade: %.2f\n",
           cidade02, estado02, populacao02, area02, pib02, pontostur02, densidade02);

// Menu escolhendo o primeiro atributo...
   printf("\nEscolha o primeiro atributo para comparar:\n");
   printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n");
   printf("Digite sua escolha: ");
   scanf("%d", &escolha01);

// Verificando a escolha01...
   if (escolha01 < 1 || escolha01 > 5) {
       printf("Opção inválida! O programa será reiniciado.\n");
       return 1;
   }

// Menu escolhendo o segundo atributo...
   printf("\nEscolha o segundo atributo diferente para comparar:\n");
   printf("Digite sua escolha: ");
   scanf("%d", &escolha02);

// Verificando a escolha02...
   if (escolha02 < 1 || escolha02 > 5 || escolha02 == escolha01) {
       printf("Opção inválida! O programa será encerrado.\n");
       return 1;

// Obter os valores escolhidos para cada carta
if (escolha01 == 1) {
    valor01_carta01 = populacao01;
    valor01_carta02 = populacao02;
} else if (escolha01 == 2) {
    valor01_carta01 = area01;
    valor01_carta02 = area02;
} else if (escolha01 == 3) {
    valor01_carta01 = pib01;
    valor01_carta02 = pib02;
} else if (escolha01 == 4) {
    valor01_carta01 = pontostur01;
    valor01_carta02 = pontostur02;
} else {
    valor01_carta01 = densidade01;
    valor01_carta02 = densidade02;
}

if (escolha02 == 1) {
    valor02_carta01 = populacao01;
    valor02_carta02 = populacao02;
} else if (escolha02 == 2) {
    valor02_carta01 = area01;
    valor02_carta02 = area02;
} else if (escolha02 == 3) {
    valor02_carta01 = pib01;
    valor02_carta02 = pib02;
} else if (escolha02 == 4) {
    valor02_carta01 = pontostur01;
    valor02_carta02 = pontostur02;
} else {
    valor02_carta01 = densidade01;
    valor02_carta02 = densidade02;
}

// Somando os atributos...
soma01 = valor01_carta01 + valor02_carta01;
soma02 = valor01_carta02 + valor02_carta02;

// Comparação da escolha do usuário...
    printf("\n### Comparação de Cartas ###\n");

    printf("Atributos 1: %d - Carta 1: %.2f | Carta 2: %.2f\n", escolha01, valor01_carta01, valor01_carta02);
    printf("Atributos 2: %d - Carta 1: %.2f | Carta 2: %.2f\n", escolha02, valor02_carta01, valor02_carta02);
    
    printf("Soma dos atributos é: - Carta 1: %.2f | Carta 2: %.2f\n", soma01, soma02);

    // Vencedor...
    if (soma01 > soma02) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade01);
    } else if (soma01 < soma02) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade02);
    } else {
        printf("Resultado: Empate!\n");
    }
    return 0;
}
