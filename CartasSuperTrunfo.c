#include <stdio.h>

int main() {
    int populacao, pontotur, populacao2, pontotur2;
    float pib, areakm, pib2, areakm2;
    char cidade[50], estado[2], cidade2[50], estado2[2];

    printf("Desafio Super Trunfo\n");
    
    // Input for carta 1
    printf("Informe o estado da carta 1, de A a H: \n");
    scanf("%s", estado); 
    printf("Informe o nome da cidade: \n");
    scanf("%s", cidade); 
    printf("Informe a populacao da cidade: \n");
    scanf("%d", &populacao);
    printf("Informe a area da cidade (em Km²): \n");
    scanf("%f", &areakm);
    printf("Informe o PIB: \n");
    scanf("%f", &pib);
    printf("Informe o numero de pontos turisticos: \n");
    scanf("%d", &pontotur);

    printf("Desafio Super Trunfo\n");
    
    // Input for carta 2
    printf("Informe o estado da carta 2, de A a H: \n");
    scanf("%s", estado2); 
    printf("Informe o nome da cidade: \n");
    scanf("%s", cidade2); // 
    printf("Informe a populacao da cidade: \n");
    scanf("%d", &populacao2);
    printf("Informe a area da cidade (em Km²): \n");
    scanf("%f", &areakm2);
    printf("Informe o PIB: \n");
    scanf("%f", &pib2);
    printf("Informe o numero de pontos turisticos: \n");
    scanf("%d", &pontotur2);

   
    printf("\nCarta 1\n");
    printf("Estado: %s\nCodigo: %s01\n", estado, estado);
    printf("Nome da cidade: %s\nPopulacao: %d\n", cidade, populacao);
    printf("Area: %.2f Km²\nPIB: %.2f\nNumero de Pontos Turisticos: %d\n", areakm, pib, pontotur);

    printf("\nCarta 2\n");
    printf("Estado: %s\nCodigo: %s01\n", estado2, estado2);
    printf("Nome da cidade: %s\nPopulacao: %d\n", cidade2, populacao2);
    printf("Area: %.2f Km²\nPIB: %.2f\nNumero de Pontos Turisticos: %d\n", areakm2, pib2, pontotur2);

    return 0;
}
