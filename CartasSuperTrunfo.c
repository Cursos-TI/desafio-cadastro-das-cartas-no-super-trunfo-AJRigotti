#include <stdio.h>

int main () {

//variaveis:
    char nome_estado1[20], nome_estado2[20];
    char nome_cidade1[20], nome_cidade2[20];
    char codigo1[20], codigo2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    

//perguntando as informações da primeira carta para o jogador:
    printf("Qual o nome do estado da primeira carta?\n");
    scanf("%s", &nome_estado1);

    printf("Qual o nome da cidade da primeira carta?\n");
    scanf("%s", &nome_cidade1);

    printf("Qual o código cidade da primeira carta?\n");
    scanf("%s", &codigo1);

    printf("Qual população da cidade da primeira carta?\n");
    scanf("%d", &populacao1);

    printf("Qual área da cidade da primeira carta?\n");
    scanf("%f", &area1);

    printf("Qual o PIB da cidade da primeira carta?\n");
    scanf("%f", &pib1);

    printf("Quantos pontos turisticos tem na cidade da primeira carta?\n");
    scanf("%d", &pontos1);
 

//mostrando as informações da primeira carta:
    printf("Obrigado por responder! Aqui estão as informações da primeira carta:\n");
    printf("Nome do estado: %s \n", nome_estado1);
    printf("Cidade: %s \n", nome_cidade1);
    printf("População: %d \n", populacao1);
    printf("Área em km2: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Quantidade de pontos turisticos: %d \n", pontos1);
    printf("Código da carta: %s \n", codigo1);





//perguntando as informações da segunda carta para o jogador:
    printf("Agora, digite as informações da segunda carta. \n");

    printf("Qual o nome do estado da segunda carta?\n");
    scanf("%s", &nome_estado2);

    printf("Qual o nome da cidade da segunda carta?\n");
    scanf("%s", &nome_cidade2);

    printf("Qual o código cidade da segunda carta?\n");
    scanf("%s", &codigo2);

    printf("Qual população da cidade da segunda carta?\n");
    scanf("%d", &populacao2);

    printf("Qual área da cidade da segunda carta?\n");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade da segunda carta?\n");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos tem na cidade da segunda carta?\n");
    scanf("%d", &pontos2);
 

//mostrando as informações da segunda carta:
    printf("Obrigado por responder! Aqui estão as informações da segunda carta:\n");
    printf("Nome do estado: %s \n", nome_estado2);
    printf("Cidade: %s \n", nome_cidade2);
    printf("População: %d \n", populacao2);
    printf("Área em km2: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Quantidade de pontos turisticos: %d \n", pontos2);
    printf("Código da carta: %s \n", codigo2);


    return 0;
}