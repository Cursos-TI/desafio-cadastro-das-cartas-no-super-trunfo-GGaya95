#include <stdio.h>
#include <string.h>

#define TAM_ESTADO 10
#define TAM_CODIGO 4

typedef struct {
    char estado[TAM_ESTADO];
    char codigo[TAM_CODIGO];
    int populacao, pontosturisticos;
    float area; // tamanho da cidade
    float pib; // produto interno bruto que é a riqueza
    //novas variáveis
    float densidade_populacional;
    float pib_per_capita;
    float SuperPoder; //cálculo de todas as variáveis com a densidade populacional invertida
} Carta;

int main() {
    // criar duas cartas
    Carta carta1;
    Carta carta2;
    int leitura_ok;
    int escolha_jogador1;

    // Informações da primeira carta
    printf("**** Informe os dados da primeira carta ****\n");
    printf("Código: ");
    scanf("%3s", carta1.codigo);

    printf("Estado:");
    scanf("%9s", carta1.estado);

    printf("Quantos habitantes?:");
    scanf("%d", &carta1.populacao);

    printf("Digite a área (em km²):");
    scanf("%f", &carta1.area);

    printf("Digite o PIB (em  reais):");
    scanf("%f", &carta1.pib);

    printf("Digite o número de pontos turísticos:");
    scanf("%d", &carta1.pontosturisticos);

    // Calcula a densidade populacional e o pib per capita
    carta1.densidade_populacional = carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / carta1.populacao;

    // Calcula o SuperPoder da carta 1
    carta1.SuperPoder = carta1.populacao + carta1.pontosturisticos + carta1.area + carta1.pib + (1.0f / carta1.densidade_populacional) + carta1.pib_per_capita;

    // Exibe todos os atributos da primeira carta
    printf("\n**** Dados da Primeira Carta ****\n");
    printf("Código: %s\n", carta1.codigo);
    printf("Estado: %s\n", carta1.estado);
    printf("Habitantes: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade_populacional);
    printf("PIB Per Capita: %.2f\n", carta1.pib_per_capita);
    printf("SuperPoder: %.2f\n", carta1.SuperPoder);

    // Informações da segunda carta
    printf("\n**** Informe os dados da segunda carta ****\n");
    printf("Código: ");
    scanf("%3s", carta2.codigo);

    printf("Estado:");
    scanf("%9s", carta2.estado);

    printf("Quantos habitantes?:");
    scanf("%d", &carta2.populacao);

    printf("Digite a área (em km²):");
    scanf("%f", &carta2.area);

    printf("Digite o PIB (em  reais):");
    scanf("%f", &carta2.pib);

    printf("Digite o número de pontos turísticos:");
    scanf("%d", &carta2.pontosturisticos);

    // Calcula a densidade populacional e o pib per capita
    carta2.densidade_populacional = carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;

    // Calcula o SuperPoder da carta 2
    carta2.SuperPoder = carta2.populacao + carta2.pontosturisticos + carta2.area + carta2.pib + (1.0f / carta2.densidade_populacional) + carta2.pib_per_capita;

    // Exibe todos os atributos da segunda carta
    printf("\n**** Dados da Segunda Carta ****\n");
    printf("Código: %s\n", carta2.codigo);
    printf("Estado: %s\n", carta2.estado);
    printf("Habitantes: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade_populacional);
    printf("PIB Per Capita: %.2f\n", carta2.pib_per_capita);
    printf("SuperPoder: %.2f\n", carta2.SuperPoder);

    return 0;
}