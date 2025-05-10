#include <stdio.h>
#include <string.h>

#define TAM_ESTADO 10
#define TAM_CODIGO 4
/*Ao compilar o código anterior ele parava em habitantes, juntava todas as linhas seguintes,
 pois estava consumindo oos caractéres anteriores restantes no buffer. Agora para cada scanf %s tem um while para
 evitar qualquer caractere restante no buffer*/
typedef struct {
    char estado[TAM_ESTADO];
    char codigo[TAM_CODIGO];
    int populacao, pontosturisticos;
    float area; // tamanho da cidade
    float pib; // produto interno bruto que é a riqueza
} Carta;

int main() {
    // criar duas cartas
    Carta carta1;
    Carta carta2;
    int leitura_ok;

    // Informações da primeira carta
    printf("Informe os dados da primeira carta:\n");
    printf("Código: "); 
    leitura_ok = scanf("%3s", carta1.codigo);
    if (leitura_ok != 1) return 1;
    while (getchar() != '\n'); 
    printf("Estado: "); 
    leitura_ok = scanf("%9s", carta1.estado);
    if (leitura_ok != 1) return 1;
    while (getchar() != '\n'); 

    printf("Quantos habitantes?: "); 
    leitura_ok = scanf("%d", &carta1.populacao);
    if (leitura_ok != 1) return 1;

    printf("Digite a área (em km²): "); 
    leitura_ok = scanf("%f", &carta1.area);
    if (leitura_ok != 1) return 1;

    printf("Digite o PIB (em  reais): "); 
    leitura_ok = scanf("%f", &carta1.pib);
    if (leitura_ok != 1) return 1;

    printf("Digite o número de pontos turísticos: "); 
    leitura_ok = scanf("%d", &carta1.pontosturisticos);
    if (leitura_ok != 1) return 1;
    printf("\n");

    // Informações da segunda carta
    printf("Informe os dados da segunda carta:\n");
    printf("Código: ");  Removi a quebra de linha
    leitura_ok = scanf("%3s", carta2.codigo);
    if (leitura_ok != 1) return 1;
    while (getchar() != '\n'); 

    printf("Estado: ");
    leitura_ok = scanf("%9s", carta2.estado);
    if (leitura_ok != 1) return 1;
    while (getchar() != '\n'); 

    printf("Quantos habitantes?: "); 
    leitura_ok = scanf("%d", &carta2.populacao);
    if (leitura_ok != 1) return 1;

    printf("Digite a área (em km²): "); 
    leitura_ok = scanf("%f", &carta2.area);
    if (leitura_ok != 1) return 1;

    printf("Digite o PIB (em reais): "); 
    leitura_ok = scanf("%f", &carta2.pib);
    if (leitura_ok != 1) return 1;

    printf("Digite o número de pontos turísticos: ");
    leitura_ok = scanf("%d", &carta2.pontosturisticos);
    if (leitura_ok != 1) return 1;
    printf("\n");
 return 0;
}