#include <stdio.h>

int main() {
    // variáveis para o primeiro conjunto de Dados
    char estado[20];  // string 
    int codigo;  // inteiro
    char cidade[50];  // string
    int populacao;
    float areaEmKm;
    float pib;
    int pontosTuristicos;

    // variáveis para armazenar os cálculos
    float densidadePopulacional;
    float pibPerCapita;

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

    // Calculando Densidade Populacional e PIB per Capita
    densidadePopulacional = populacao / areaEmKm;
    pibPerCapita = pib * 200000000 / populacao;  // PIB convertido em reais


    printf("carta 2\n");

    // variáveis para o segundo conjunto de dados
    char estado2[20];  // String
    int codigo2;  // número inteiro
    char cidade2[50];  // String 
    int populacao2;
    float areaEmKm2;
    float pib2;
    int pontosTuristicos2;

    // variáveis para o segundo conjunto
    float densidadePopulacional2;
    float pibPerCapita2;

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

    // Calculando Densidade Populacional e PIB per Capita do segundo conjunto
    densidadePopulacional2 = populacao2 / areaEmKm2;
    pibPerCapita2 = pib2 * 1000000000 / populacao2;  // PIB convertido para reais

    // Exibição dos dados para confirmação
    printf("Dados do primeiro conjunto:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %d\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área em km²: %.2f\n", areaEmKm);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);

    printf("\nDados do segundo conjunto:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %d\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f\n", areaEmKm2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);



    return 0;
}