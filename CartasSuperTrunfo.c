#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nome [50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o nome da cidade: %c\n");
    scanf("%s", &nome);

    printf("Digite a população da cidade: %d\n");
    scanf("%d", &populacao);

    printf("Digite a area da cidade: %f\n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: %f\n");
    scanf("%f", &pib);
    
    printf("Digite quantos pontos turisticos a cidade tem: %d\n");
    scanf("%d", &pontosTuristicos);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Nome: %s - População: %d - Área: %f\n", nome, populacao, area);
    printf("PIB: %f - Pontos Turisiticos: %d", pib, pontosTuristicos);
    return 0;
}
