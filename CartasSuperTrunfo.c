#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Desafio-Cadastro-das-Cartas \n");

    char estado;
    char codigo[2];
    char nome[10];
    int populacao;
    float area;
    float PIB;
    int pontosturisticos;

    printf("Digite seu estado: \n");
    scanf("%c", &estado);

    printf("Digite seu codigo: \n");
    scanf("%s", &codigo);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);

    printf("Digite seu nome \n");
    scanf("%s", &nome);

    printf("Digite sua area: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite quantos pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    
    return 0;
}
