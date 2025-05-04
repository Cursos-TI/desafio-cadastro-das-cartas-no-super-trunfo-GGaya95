#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //Dados das variáveis das cartas
    char estado [10];
    char codigo [3]; // código da carta, pois cada carta tem um número
    char cidade[30];

    int populacao;
    int pontosturisticos;
    float area;
    float pib;

    printf("Digite seu Estado: \n");
    scanf("%s", &estado);

    printf("Código:" \n);
    scanf("%s", &codigo);

    printf("Nome da cidade:"\n);
    scanf("%s", &cidade);

    printf("Total de habitantes:\n");
    scanf("%d", &populacao);

    printf("Pontos turísticos:"\n);
    scanf("%f", &pontosturisticos);

    printf("Área:"\n);
    scanf("%f", &area);

    printf("PIB:"\n);
    scanf("%f", &pib);



    printf("Cartas Super Trunfo\n");
    printf("Novo commit\n");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
