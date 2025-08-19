#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[30];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade; // população / área
} Carta;

int main() {
    // Duas cartas pré-cadastradas
    Carta carta1 = {"Brasil", 214000000, 8516000.0, 18470.0, 15, 214000000 / 8516000.0};
    Carta carta2 = {"Japão", 125000000, 377975.0, 5065.0, 20, 125000000 / 377975.0};

    int opcao;
    printf("=== SUPER TRUNFO ===\n");
    printf("Comparando cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha o atributo para comparação: ");
    scanf("%d", &opcao);

    printf("\nComparação entre %s e %s\n", carta1.nome, carta2.nome);

    switch (opcao) {
        case 1: // População
            printf("População: %s = %d | %s = %d\n", carta1.nome, carta1.populacao, carta2.nome, carta2.populacao);
            if (carta1.populacao > carta2.populacao)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta2.populacao > carta1.populacao)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 2: // Área
            printf("Área: %s = %.2f km² | %s = %.2f km²\n", carta1.nome, carta1.area, carta2.nome, carta2.area);
            if (carta1.area > carta2.area)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta2.area > carta1.area)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("PIB: %s = %.2f bi USD | %s = %.2f bi USD\n", carta1.nome, carta1.pib, carta2.nome, carta2.pib);
            if (carta1.pib > carta2.pib)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta2.pib > carta1.pib)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 4: // Pontos Turísticos
            printf("Pontos turísticos: %s = %d | %s = %d\n", carta1.nome, carta1.pontosTuristicos, carta2.nome, carta2.pontosTuristicos);
            if (carta1.pontosTuristicos > carta2.pontosTuristicos)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta2.pontosTuristicos > carta1.pontosTuristicos)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 5: // Densidade Demográfica (MENOR vence!)
            printf("Densidade: %s = %.2f hab/km² | %s = %.2f hab/km²\n", carta1.nome, carta1.densidade, carta2.nome, carta2.densidade);
            if (carta1.densidade < carta2.densidade)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta2.densidade < carta1.densidade)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Escolha um número entre 1 e 5.\n");
    }

    return 0;
}