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
        scanf("%s[50]", &estado1);

        printf("Digite o nome da cidade:\n");
        scanf("%s", &cidade1);

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

        //resultado cidade 1

        printf("Primeira carta cadastrada. Vejamos:\n");
        printf("Estado: %s\nCidade: %s\nCodigo: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\n",estado1, cidade1, cod1, populacao1, area1, pib1, turismo1);


        return 0;
}
