#include <stdio.h>

int main() {
    printf("Bem vindo ao Super Trunfo - Cidades\n");

    // variaveis

    char estado1[50], estado2[50];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turismo1, turismo2;
    float dens1, dens2;
    float pibc1, pibc2;
    float densInvertida1, densInvertida2;
    float super1, super2;
  
// dados cidade 1

    printf("Vamos cadastrar a primeira carta.\n");

        printf("Digite o nome do estado:\n");
        scanf(" %[^\n]", estado1);  //" %[^\n]" jeitinho descoberto pelo chat gpt e a deepseek pra capturar o nome do estado com espaços

        printf("Digite o nome da cidade:\n");
        scanf(" %[^\n]", cidade1);

        printf("Digite a população da cidade:\n");
        scanf("%d", &populacao1);

        printf("Digite a área da cidade:\n");
        scanf("%f", &area1);

        printf("Digite o PIB da cidade:\n");
        scanf("%f", &pib1);

        printf("Quantos pontos turísticos tem a cidade?\n\n");   // deveras interessante utilizar "\n\n"
        scanf("%d", &turismo1);

// dados cidade 2

    printf("Vamos cadastrar a segunda carta.\n");

        printf("Digite o nome do estado:\n");
        scanf(" %[^\n]", estado2); 

        printf("Digite o nome da cidade:\n");
        scanf(" %[^\n]", cidade2);

        printf("Digite a população da cidade:\n");
        scanf("%d", &populacao2);

        printf("Digite a área da cidade:\n");
        scanf("%f", &area2);

        printf("Digite o PIB da cidade:\n");
        scanf("%f", &pib2);

        printf("Quantos pontos turísticos tem a cidade?\n");
        scanf("%d", &turismo2);

// calculo das variaveis

dens1 = populacao1 / area1;
dens2 = populacao2 / area2;
pibc1 = pib1 / populacao1;
pibc2 = pib2 / populacao2;

// resultado cartas

    printf("Cartas cadastradas. Vejamos:\n\n");

    printf("Primeira carta:\n");
    printf("Estado: %s\nCidade: %s\nCódigo: %c01\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\n", 
           estado1, cidade1, cidade1[0], populacao1, area1, pib1, turismo1);
        printf("Densidade da primeira cidade: %.2f\n", dens1);       
        printf("Pib per capita da primeira cidade: %.2f\n\n", pibc1);

    printf("Segunda carta:\n");
    printf("Estado: %s\nCidade: %s\nCódigo: %c02\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\n", 
           estado2, cidade2, cidade2[0], populacao2, area2, pib2, turismo2);
        printf("Densidade da segunda cidade: %.2f\n", dens2);
        printf("Pib per capita da segunda cidade: %.2f\n\n", pibc2);  

//calculo super poder (soma população, área, pib, pibc, 1/densi)

    densInvertida1 = 1 / dens1; // nao entendi o proposito de fazer a densidade 1/x...
    densInvertida2 = 1 / dens2;

        super1 = populacao1 + area1 + pib1 + densInvertida1 + turismo1;
        super2 = populacao2 + area2 + pib2 + densInvertida2 + turismo2;

    printf("Pontos de super-poder da carta 1: %.0f\n", super1);  // usei %.0f porque as casas decimais nao são tão relevantes nesse resultado e %d não casou com o float
    printf("Pontos de super-poder da carta 2: %.0f\n\n", super2); 

//comparação

    printf("Vamos comparar as duas cartas:\n(Considere 1 como carta 1 venceu e 0 como carta 2 venceu)\n");

    float resultadoPopulacao, resultadoArea, resultadoPib, resultadoPibc, resultadoTurismo, resultadoDens, resultadoSuper;

        resultadoPopulacao = populacao1 > populacao2;
        resultadoArea = area1 > area2;
        resultadoPib = pib1 > pib2;
        resultadoPibc = pibc1 > pibc2;
        resultadoTurismo = turismo1 > turismo2;
        resultadoDens = densInvertida1 < densInvertida2;
        resultadoSuper = super1 > super2;

    printf("População: %.0f\nÁrea: %.0f\nPIB: %.0f\nPIB per capita: %.0f\nQuantidade de pontos turísticos: %.0f\nDensidade demográfica: %.0f\nTrunfo: %.0f\n\n",
            resultadoPopulacao, resultadoArea, resultadoPib, resultadoPibc, resultadoTurismo, resultadoDens, resultadoSuper);



    return 0;
}