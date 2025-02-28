#include <stdio.h>

// Desafio Super Trunfo - Estados
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // variáveis para o primeiro conjunto de dados
    char estado[20];  // string 
    int codigo;  // inteiro
    char cidade[50];  // string
    int populacao;
    float areaEmKm;
    float pib;
    int pontosTuristicos;

    // Dados para o primeiro conjunto
    printf("Digite o Estado: \n");
    scanf("%s", estado);  // string

    printf("Digite o Codigo (número): \n");
    scanf("%d", &codigo);  // número inteiro

    printf("Digite a cidade: \n");
    scanf("%s", cidade);  // string (nome da cidade)

    printf("População: \n");
    scanf("%d", &populacao);  // número inteiro

    printf("Digite a área em km²: \n");
    scanf("%f", &areaEmKm);  // número de ponto flutuante

    printf("Digite o PIB: \n");
    scanf("%f", &pib);  // número de ponto flutuante

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);  // número inteiro


    printf("carta 2\n");

    // variáveis para o segundo conjunto de dados
    char estado2[20];  // String
    int codigo2;  // número inteiro
    char cidade2[50];  // String 
    int populacao2;
    float areaEmKm2;
    float pib2;
    int pontosTuristicos2;


    // Dados para o segundo conjunto
    printf("Digite o Estado: \n");
    scanf("%s", estado2);  // string

    printf("Digite o Codigo (número): \n");
    scanf("%d", &codigo2);  // número inteiro

    printf("Digite a cidade: \n");
    scanf("%s", cidade2);  // string (nome da cidade)

    printf("População:\n");
    scanf("%d", &populacao2);  // número inteiro

    printf("Digite a área em km²: \n");
    scanf("%f", &areaEmKm2);  // ponto flutuante

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);  // ponto flutuante

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);  // número inteiro


    // Exibição dos dados para confirmação
    printf("Dados do primeiro conjunto:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %d\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área em km²: %.2f\n", areaEmKm);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);

    printf("\nDados do segundo conjunto:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %d\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f\n", areaEmKm2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

}
