#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){

/*
    Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
 
    Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
 
    Nome da Cidade: O nome da cidade. Tipo: char[] (string)
 
    População: O número de habitantes da cidade. Tipo: int
 
    Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
 
    PIB: O Produto Interno Bruto da cidade. Tipo: float
 
    Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
*/

  // Área para definição das variáveis para armazenar as propriedades das cidades

    int populacao1, populacao2, p_turisticos1, p_turisticos2; //Variável que define "População" e "N° de Pontos Turísticos".

    char letra1, letra2; //Define a letra que representa um dos 8 estados.

    char codigo1[5], codigo2[5], cidade1[20], cidade2[20]; //Define o código (Exemplo, 01 à 04) e a cidade, com limite de 20 caracteres (contado \0)

    float area1, area2, pib1, pib2; //Define a área em km² e o pib da cidade.

  // Área para entrada de dados

    printf("Hora de definir as cartas do SuperTrunfo!\n"); //Começo da introdução ao SuperTrunfo

    printf("\nVamos começar pela primeira carta, defina para mim: \n"); //Fim da introdução ao SuperTrunfo

        //Começo da descrição da primeira carta.

    printf("\nA letra correspondente ao ESTADO (de A à H): ");
        scanf(" %c", &letra1);
    
    printf("\nDefina o código da cidade (de 01 à 04): ");
        scanf("%s", codigo1);

    printf("\nDiga o nome da cidade escolhida: ");
        scanf("%s", cidade1);

    printf("\nQual a população da cidade? ");
        scanf("%d", &populacao1);

    printf("\nQual é a área (em Km²) da cidade? ");
        scanf("%f", &area1);

    printf("\nQual o PIB (Produto Interno Bruto) da cidade? ");
        scanf("%f", &pib1);
    
    printf("\nQuantos pontos turísticos essa cidade possui? ");
        scanf("%d", &p_turisticos1);

        //Começo da descrição da primeira carta.

    printf("\n\n------------------------------------------------\n");

        //Começo da descrição da segunda carta.

    printf("\n\nAgora vamos para a segunda carta, defina para mim: \n");

    printf("\nA letra correspondente ao ESTADO (de A à H): ");
        scanf(" %c", &letra2);
    
    printf("\nDefina o código da cidade (de 01 à 04): ");
        scanf("%s", codigo2);

    printf("\nDiga o nome da cidade escolhida: ");
        scanf("%s", cidade2);

    printf("\nQual a população da cidade? ");
        scanf("%d", &populacao2);

    printf("\nQual é a área (em Km²) da cidade? ");
        scanf("%f", &area2);

    printf("\nQual o PIB (Produto Interno Bruto) da cidade? ");
        scanf("%f", &pib2);
    
    printf("\nQuantos pontos turísticos essa cidade possui? ");
        scanf("%d", &p_turisticos2);

        //Fim da descrição da segunda carta.

    printf("\n\n------------------------------------------------\n");

    /*
    Agora você visualizará as cartas com as informações ditas pelo usuário.
    
    Cada carta seguirá esse padrão:

    Carta 1:
    Estado: A (letra)
    Código: A01 (codigo)
    Nome da Cidade: São Paulo (cidade)
    População: 12325000 (populacao)
    Área: 1521.11 km² (area)
    PIB: 699.28 bilhões de reais (pib)
    Número de Pontos Turísticos: 50 (p_turisticos)
    */

    // Area para exibição dos dados da cidade

    printf("\n\nVamos ver a descrição das cartas: \n");

    printf("Carta 1:\n\n"); //Começo da Carta 1

    printf("Estado: %c\n", letra1);

    printf("Código: %c%s\n", letra1, codigo1);

    printf("Nome da Cidade: %s\n", cidade1);

    printf("População: %d\n", populacao1);

    printf("Área: %.2f Km²\n", area1);

    printf("PIB: R$%.2f\n", pib1);

    printf("Número de pontos turísticos: %d\n", p_turisticos1); //Fim da Carta 1



    printf("\nCarta 2:"); //Começo da Carta 2

    printf("Estado: %c\n", letra2);

    printf("Código: %c%s\n", letra2, codigo2);

    printf("Nome da Cidade: %s\n", cidade2);

    printf("População: %d\n", populacao2);

    printf("Área: %.1f Km²\n", area2);

    printf("PIB: R$%.2f\n", pib2);

    printf("Número de pontos turísticos: %d\n", p_turisticos2); //Fim da Carta 2


return 0;



}