#include <stdio.h>

    int main() {

        printf("Bem vindo ao Super Trunfo - Cidades\n");

/*variaveis*/
    
        char estado1[50], estado2[50];
        char cidade1[50], cidade2[50];
        char cod1[4], cod2[4];
        int populacao1, populacao2;
        float area1, area2;
        float pib1, pib2;
        int turismo1, turismo2;
    

// dados cidade 1

        printf("Vamos cadastrar a primeira carta.\n");

        printf("Digite o nome do estado:\n");
        scanf(" %[^\n]", &estado1);

        printf("Digite o nome da cidade:\n");
        scanf(" %[^\n]", &cidade1);

        printf("Digite o código da carta\n");
        scanf("%3s", &cod1);

        printf("Digite a população da cidade:\n");
        scanf("%d", &populacao1);

        printf("Digite área da cidade:\n");
        scanf("%f", &area1);

        printf("Digite o PIB da cidade:\n");
        scanf("%f", &pib1);

        printf("Quantos pontos turísticos tem a cidade\n");
        scanf("%d", &turismo1);

// dados cidade 2

        printf("Vamos cadastrar a segunda carta.\n");

        printf("Digite o nome do estado:\n");
        scanf(" %[^\n]", &estado2);

        printf("Digite o nome da cidade:\n");
        scanf(" %[^\n]", &cidade2);

        printf("Digite o código da carta\n");
        scanf("%3s", &cod2);

        printf("Digite a população da cidade:\n");
        scanf("%d", &populacao2);

        printf("Digite área da cidade:\n");
        scanf("%f", &area2);

        printf("Digite o PIB da cidade:\n");
        scanf("%f", &pib2);

        printf("Quantos pontos turísticos tem a cidade\n");
        scanf("%d", &turismo2);

// resultado cartas

printf("Cartas cadastradas. Vejamos:\n");
printf("Primeira carta:\n");
printf("Estado: %s\nCidade: %s\nCodigo: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\n", estado1, cidade1, cod1, populacao1, area1, pib1, turismo1);
printf("Segunda carta:\n");
printf("Estado: %s\nCidade: %s\nCodigo: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\n", estado2, cidade2, cod2, populacao2, area2, pib2, turismo2);

        return 0;
}
