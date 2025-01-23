#include <stdio.h>
#include <string.h>

// Estrutura para armazenar as propriedades de uma cidade
typedef struct {
    char nome[50];
    int populacao;  // em milhares
    float area;     // em km²
    float pib;      // em bilhões de reais
} Cidade;

int main() {
    // Declaração de duas cidades
    Cidade cidade1, cidade2;

    // Cadastro das cidades
    printf("Cadastro da Cidade 1:\n");
    printf("Digite o nome da cidade: ");
    scanf(" %[^"]", cidade1.nome);
    printf("Digite a população (em milhares): ");
    scanf("%d", &cidade1.populacao);
    printf("Digite a área (em km²): ");
    scanf("%f", &cidade1.area);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &cidade1.pib);

    printf("\nCadastro da Cidade 2:\n");
    printf("Digite o nome da cidade: ");
    scanf(" %[^"]", cidade2.nome);
    printf("Digite a população (em milhares): ");
    scanf("%d", &cidade2.populacao);
    printf("Digite a área (em km²): ");
    scanf("%f", &cidade2.area);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &cidade2.pib);

    // Comparação de atributos
    printf("\nComparação de Atributos:\n");

    // Comparar população
    if (cidade1.populacao > cidade2.populacao) {
        printf("%s tem maior população que %s.\n", cidade1.nome, cidade2.nome);
    } else if (cidade1.populacao < cidade2.populacao) {
        printf("%s tem maior população que %s.\n", cidade2.nome, cidade1.nome);
    } else {
        printf("Ambas as cidades têm a mesma população.\n");
    }

    // Comparar área
    if (cidade1.area > cidade2.area) {
        printf("%s tem maior área que %s.\n", cidade1.nome, cidade2.nome);
    } else if (cidade1.area < cidade2.area) {
        printf("%s tem maior área que %s.\n", cidade2.nome, cidade1.nome);
    } else {
        printf("Ambas as cidades têm a mesma área.\n");
    }

    // Comparar PIB
    if (cidade1.pib > cidade2.pib) {
        printf("%s tem maior PIB que %s.\n", cidade1.nome, cidade2.nome);
    } else if (cidade1.pib < cidade2.pib) {
        printf("%s tem maior PIB que %s.\n", cidade2.nome, cidade1.nome);
    } else {
        printf("Ambas as cidades têm o mesmo PIB.\n");
    }

    // Determinação da cidade vencedora
    int pontosCidade1 = 0, pontosCidade2 = 0;

    // Atribuir pontos para cada atributo
    if (cidade1.populacao > cidade2.populacao) pontosCidade1++;
    else if (cidade1.populacao < cidade2.populacao) pontosCidade2++;

    if (cidade1.area > cidade2.area) pontosCidade1++;
    else if (cidade1.area < cidade2.area) pontosCidade2++;

    if (cidade1.pib > cidade2.pib) pontosCidade1++;
    else if (cidade1.pib < cidade2.pib) pontosCidade2++;

    printf("\nResultado Final:\n");
    if (pontosCidade1 > pontosCidade2) {
        printf("A cidade vencedora é: %s\n", cidade1.nome);
    } else if (pontosCidade1 < pontosCidade2) {
        printf("A cidade vencedora é: %s\n", cidade2.nome);
    } else {
        printf("As cidades estão empatadas!\n");
    }

    return 0;
}
