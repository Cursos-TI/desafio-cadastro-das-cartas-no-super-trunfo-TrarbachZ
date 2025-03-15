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
    int result1, result2;
    int resultC1, resultC2;
  
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

        printf("Quantos pontos turísticos tem a cidade?\n");   // deveras interessante utilizar "\n\n"
        scanf("%d", &turismo1);

// dados cidade 2

    printf("\nVamos cadastrar a segunda carta.\n");

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

    printf("\nCartas cadastradas. Vejamos:\n\n");

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


printf("Vamos comparar atributos das duas cartas!\n");
printf("Escolha o primeiro atributo que você quer comparar?\n1. População\n2. Área\n3. PIB\n4. PIB per capita\n5. Quantidade de pontos turísticos\n6. Densidade populacional\n7. Pontos de TRUNFO\nEntre apenas com o número: \n");
scanf("%d", &result1);
printf("Escolha um atributo diferente para a segunda comparação: \n1. População\n2. Área\n3. PIB\n4. PIB per capita\n5. Quantidade de pontos turísticos\n6. Densidade populacional\n7. Pontos de TRUNFO\nEntre apenas com o número: \n");
scanf("%d", &result2);

if (result1 == result2) {
printf("Você não pode escolher dois atributos iguais! Tente novamente");
}
else 
{
    switch (result1)
    {
        case 1:
            printf("População da cidade 1: %d\nPopulação da cidade 2: %d\n", populacao1, populacao2);
            resultC1 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            printf("Área da cidade 1: %.2f\nÁrea da cidade 2: %.2f\n", area1, area2);
            resultC1 = area1 > area2 ? 1 : 0;
            break;
        case 3:
            printf("PIB da cidade 1: %.2f\nPIB da cidade 2: %.2f\n", pib1, pib2);
            resultC1 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            printf("PIB per capita da cidade 1: %.2f\nPIB per capita da cidade 2: %.2f\n", pibc1, pibc2);
            resultC1 = pibc1 > pibc2 ? 1 : 0;
            break;
        case 5:
            printf("Quantidade de pontos turísticos da cidade 1: %d\nQuantidade de pontos turísticos da cidade 2: %d\n", turismo1, turismo2);
            resultC1 = turismo1 > turismo2 ? 1 : 0;
            break;
        case 6:    
            printf("Densidade populacional da cidade 1: %.2f\nDensidade populacional da cidade 2: %.2f\n", dens1, dens2);
            resultC1 = densInvertida1 > densInvertida2 ? 1 : 0;
            break;
        case 7:
            printf("TRUNFO da cidade 1: %f\nTRUNFO da cidade 2: %f\n", super1, super2);
            resultC1 = super1 > super2 ? 1 : 0;
            break;
        default:
        printf("Opção inválida!\n");
        break;
    }

    switch (result2)
    {
        case 1:
            printf("População da cidade 1: %d\nPopulação da cidade 2: %d\n", populacao1, populacao2);
            resultC1 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            printf("Área da cidade 1: %.2f\nÁrea da cidade 2: %.2f\n", area1, area2);
            resultC1 = area1 > area2 ? 1 : 0;
            break;
        case 3:
            printf("PIB da cidade 1: %.2f\nPIB da cidade 2: %.2f\n", pib1, pib2);
            resultC1 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            printf("PIB per capita da cidade 1: %.2f\nPIB per capita da cidade 2: %.2f\n", pibc1, pibc2);
            resultC1 = pibc1 > pibc2 ? 1 : 0;
            break;
        case 5:
            printf("Quantidade de pontos turísticos da cidade 1: %d\nQuantidade de pontos turísticos da cidade 2: %d\n", turismo1, turismo2);
            resultC1 = turismo1 > turismo2 ? 1 : 0;
            break;
        case 6:    
            printf("Densidade populacional da cidade 1: %.2f\nDensidade populacional da cidade 2: %.2f\n", dens1, dens2);
            resultC1 = densInvertida1 > densInvertida2 ? 1 : 0;
            break;
        case 7:
            printf("TRUNFO da cidade 1: %f\nTRUNFO da cidade 2: %f\n", super1, super2);
            resultC1 = super1 > super2 ? 1 : 0;
            break;
        default:
        printf("Opção inválida!\n");
        break;
    }
}

if (resultC1 && resultC2)
{
    printf("A primeira cidade ganhou nos dois atributos");
} else if (resultC1 != resultC2) {
    printf("Cada cidade ganhou 1 ponto");
} else {
    printf("A segunda cidade ganhou nos dois atributos");
}

return 0;
}

   