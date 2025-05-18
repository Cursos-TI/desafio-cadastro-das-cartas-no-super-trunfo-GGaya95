#include <stdio.h>
#include <string.h>

#define TAM_ESTADO 10
#define TAM_CODIGO 4
/*Ao compilar o código anterior ele parava em habitantes, juntava todas as linhas seguintes,
 pois estava consumindo os caractéres anteriores restantes no buffer. Agora para cada scanf %s tem um while para
 evitar qualquer caractere restante no buffer*/
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
   // Informações da segunda carta
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

     //Calcula a densidade populacional e p pib per capita
    carta1.densidade_populacional = carta1.populacao / carta1.area;
      printf("A densidade Populacional é: %.2f" , carta1.densidade_populacional);
      printf("\n");
    carta1.pib_per_capita = carta1.pib / carta1.populacao;
      printf("O PIB per capita é: %.2f" , carta1.pib_per_capita);
      printf("\n");

      // Calcula o SuperPoder da carta 1
    carta1.SuperPoder = carta1.populacao + carta1.pontosturisticos + carta1.area + carta1.pib + (1.0f / carta1.densidade_populacional) + carta1.pib_per_capita;
    printf("O SuperPoder da primeira carta é: %.2f\n", carta1.SuperPoder);



    // Informações da segunda carta
    printf("**** Informe os dados da segunda carta ****\n");
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
    
         //Calcula a densidade populacional e p pib per capita
    carta2.densidade_populacional = carta2.populacao / carta2.area;
        printf("A densidade populacional é: %.2f", carta2.densidade_populacional );
        printf("\n");
  
    carta2.pib_per_capita = carta2.pib / carta2.populacao;
        printf("O PIB per capita é: %.2f", carta2.pib_per_capita);
        printf("\n");

 // Calcula o SuperPoder da carta 2
    carta2.SuperPoder = carta2.populacao + carta2.pontosturisticos + carta2.area + carta2.pib + (1.0f / carta2.densidade_populacional) + carta2.pib_per_capita;
    printf("O SuperPoder da segunda carta é: %.2f\n", carta2.SuperPoder);

        return 0;
}