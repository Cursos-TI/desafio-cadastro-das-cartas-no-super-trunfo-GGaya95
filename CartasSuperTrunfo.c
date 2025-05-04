#include <stdio.h>
#include <string.h>
typedef struct {
    char estado[10];
    char codigo[4];
    int populacao, pontosturisticos;
    float area; // tamanho da cidade
    float pib; // produto interno bruto que é a riqueza
    } Carta;  

    int main (){
// criar duas cartas
 Carta carta1;
 Carta carta2;

 //Informações da primeira carta
 printf("Informe os dados da primeira carta:\n");
 printf("Código:\n");
 scanf("%s", carta1.codigo);

 printf("Estado:\n");
 scanf("%s", carta1.estado);

 printf("Quantos habitantes?:\n");
 scanf("%d", carta1.populacao);

 printf("Digite a área (em km²): ");
 scanf("%f", &carta1.area);

 printf("Digite o PIB (em bilhões de dólares): ");
 scanf("%f", &carta1.pib);

 printf("Número de pontos turísticos: ");
 scanf("%d", &carta1.pontosturisticos);
 printf("\n");

 //Informações da segunda carta

 printf("Informe os dados da segunda carta:\n");
 printf("Código:\n");
 scanf("%s", carta2.codigo);

 printf("Estado:\n");
 scanf("%s", carta2.estado);

 printf("Quantos habitantes?:\n");
 scanf("%d", carta2.populacao);

 printf("Digite a área (em km²): ");
 scanf("%f", &carta2.area);

 printf("Digite o PIB (em bilhões de dólares): ");
 scanf("%f", &carta2.pib);

 printf("Número de pontos turísticos: ");
 scanf("%d", &carta2.pontosturisticos);
 printf("\n");


// Mostar primeira carta
printf(" Primeira Carta\n");
printf("Código: %s\n", carta1.codigo);
printf("População: %d habitantes\n", carta1.populacao);
printf("Área: %.2f km²\n", carta1.area);
printf("PIB: %.2f bilhões de dólares\n", carta1.pib);
printf("Pontos Turísticos: %d\n", carta1.pontosturisticos);
printf("\n");

// Mostrar segunda carta
printf("Segunda Carta \n");
printf("Código: %s\n", carta2.codigo);
printf("População: %d habitantes\n", carta2.populacao);
printf("Área: %.2f km²\n", carta2.area);
printf("PIB: %.2f bilhões de dólares\n", carta2.pib);
printf("Pontos Turísticos: %d\n", carta2.pontosturisticos);
printf("\n");


return 0

}