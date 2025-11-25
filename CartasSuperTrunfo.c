#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

    char codigo1[5], codigo2[5]; // codigo de cada carta
    char letra1, letra2; // letra de cada carta
    char nome1[40], nome2[40]; // nome de cada cidade
    int populacao1, populacao2; // populacao de cada cidade
    float area1, area2; // area de cada cidade
    float pib1, pib2; // pib de cada cidade
    int turistico1, turistico2; // pontos turisticos de cada cidade

    //Aqui vai começar o recebimento de inputs da primeira carta

    printf("Insira os atributos da carta 1: \n"); 
    printf("Qual o nome da cidade?\n");
    fgets(nome1, 40, stdin); // fgets usado para ler strings com espaços, usa como parâmetro a variavel, o tamanho máximo e o stdin

    printf("Qual a letra da carta?\n");
    scanf("%c", &letra1);

    printf("Qual o codigo da carta?\n");
    scanf("%s", &codigo1);

    printf("Qual a população da cidade?\n");
    scanf("%d", &populacao1);

    printf("Qual a área da cidade (em km²)?\n");
    scanf("%f", &area1);

    printf("Qual o PIB da cidade (em bilhões de R$)?\n");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos a cidade possui?\n");
    scanf("%d", &turistico1);

    printf("\nA carta 1 possui os seguintes atributos:\n \n");
    printf("Código: %s\n", codigo1);
    printf("Letra: %c\n", letra1);
    printf("Nome da cidade: %s", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.1f bilhões de R$\n", pib1);
    printf("Pontos turísticos: %d\n", turistico1);

// Aqui vai começar o recebimento de inputs da segunda carta

    getchar(); //limpa o buffer do teclado para o próximo fgets


  printf("\n \nInsira os atributos da carta 2: \n"); 
    printf("Qual o nome da cidade?\n");
    fgets(nome2, 40, stdin); // fgets usado para ler strings com espaços, usa como parâmetro a variavel, o tamanho máximo e o stdin

    printf("Qual a letra da carta?\n");
    scanf("%c", &letra2);

    printf("Qual o codigo da carta?\n");
    scanf("%s", &codigo2);

    printf("Qual a população da cidade?\n");
    scanf("%d", &populacao2);

    printf("Qual a área da cidade (em km²)?\n");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade (em bilhões de R$)?\n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos a cidade possui?\n");
    scanf("%d", &turistico2);

    printf("\nA carta 2 possui os seguintes atributos:\n \n");
    printf("Código: %s\n", codigo2);
    printf("Letra: %c\n", letra2);
    printf("Nome da cidade: %s", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.1f bilhões de R$\n", pib2);
    printf("Pontos turísticos: %d\n", turistico2);


    return 0;

}