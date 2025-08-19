#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Estrutura para armazenar os dados de uma carta de cidade
typedef struct {
    char estado[50];
    char codigo[10];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
} Carta;

int main() {
    
    // Nível Novato - Comparação das Cartas
    /*
    Carta carta1, carta2;

    printf("--- Nivel Novato: Comparacao de Cartas Simples ---\n\n");
    
    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf("%s", carta1.estado);
    printf("Codigo da carta: ");
    scanf("%s", carta1.codigo);
    printf("Nome da cidade: ");
    scanf("%s", carta1.nome_cidade);
    printf("Populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Area (km2): ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Pontos turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    printf("\n");

    // Cadastro da Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Estado: ");
    scanf("%s", carta2.estado);
    printf("Codigo da carta: ");
    scanf("%s", carta2.codigo);
    printf("Nome da cidade: ");
    scanf("%s", carta2.nome_cidade);
    printf("Populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Area (km2): ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Pontos turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);
    printf("\n");

    // Exibição das propriedades (simplificada)
    printf("Dados da Carta 1:\n");
    printf("Cidade: %s, Populacao: %d\n", carta1.nome_cidade, carta1.populacao);
    printf("Dados da Carta 2:\n");
    printf("Cidade: %s, Populacao: %d\n", carta2.nome_cidade, carta2.populacao);
    printf("\n");

    // Comparação de Cartas (if e if-else)
    printf("Resultado da comparacao (populacao):\n");
    if (carta1.populacao > carta2.populacao) {
        printf("A cidade vencedora e: %s\n", carta1.nome_cidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("A cidade vencedora e: %s\n", carta2.nome_cidade);
    } else {
        printf("As cidades tem a mesma populacao.\n");
    }
    printf("\n");
    */

    // Nível Aventureiro - Menu Interativo
    /*
    Carta cartaA, cartaB;
    int escolha;

    printf("--- Nivel Aventureiro: Menu Interativo e Comparacao Aninhada ---\n\n");

    // Dados de exemplo para simplificar a demonstração
    strcpy(cartaA.nome_cidade, "Cidade_A");
    cartaA.populacao = 250000;
    cartaA.area = 150.0;
    cartaA.pib = 50.5;
    cartaA.densidade_populacional = cartaA.populacao / cartaA.area;

    strcpy(cartaB.nome_cidade, "Cidade_B");
    cartaB.populacao = 300000;
    cartaB.area = 120.0;
    cartaB.pib = 45.0;
    cartaB.densidade_populacional = cartaB.populacao / cartaB.area;

    // Menu interativo com switch
    printf("Escolha o atributo para a comparacao:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Densidade Populacional\n");
    printf("Opcao: ");
    scanf("%d", &escolha);
    printf("\n");

    printf("Resultado da comparacao:\n");
    switch (escolha) {
        case 1:
            if (cartaA.populacao > cartaB.populacao) {
                printf("%s venceu com maior populacao!\n", cartaA.nome_cidade);
            } else {
                printf("%s venceu com maior populacao!\n", cartaB.nome_cidade);
            }
            break;
        case 2:
            if (cartaA.area > cartaB.area) {
                printf("%s venceu com maior area!\n", cartaA.nome_cidade);
            } else {
                printf("%s venceu com maior area!\n", cartaB.nome_cidade);
            }
            break;
        case 3:
            if (cartaA.pib > cartaB.pib) {
                printf("%s venceu com maior PIB!\n", cartaA.nome_cidade);
            } else {
                printf("%s venceu com maior PIB!\n", cartaB.nome_cidade);
            }
            break;
        case 4:
            // Comparação aninhada para densidade populacional (menor valor vence)
            if (cartaA.densidade_populacional < cartaB.densidade_populacional) {
                printf("%s venceu com menor densidade populacional!\n", cartaA.nome_cidade);
            } else {
                printf("%s venceu com menor densidade populacional!\n", cartaB.nome_cidade);
            }
            break;
        default:
            printf("Opcao invalida!\n");
    }
    printf("\n");
    */

    // Nível Mestre - Lógica de Decisão Complexa
    /*
    Carta cartaX, cartaY;
    int escolha1, escolha2;

    printf("--- Nivel Mestre: Logica de Decisao Complexa ---\n\n");

    // Dados de exemplo para simplificar a demonstração
    strcpy(cartaX.nome_cidade, "Cidade_X");
    cartaX.populacao = 500000;
    cartaX.area = 300.0;
    cartaX.pib = 70.0;
    cartaX.pontos_turisticos = 5;

    strcpy(cartaY.nome_cidade, "Cidade_Y");
    cartaY.populacao = 500000;
    cartaY.area = 300.0;
    cartaY.pib = 85.0;
    cartaY.pontos_turisticos = 8;
    
    // Menu dinâmico para escolha de dois atributos
    printf("Escolha dois atributos para comparar:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("Opcao 1: ");
    scanf("%d", &escolha1);
    printf("Opcao 2: ");
    scanf("%d", &escolha2);
    printf("\n");

    // Lógica de comparação aninhada e ternária
    printf("Resultado da comparacao:\n");
    // Primeira comparação (exemplo: populacao)
    char* vencedor = (cartaX.populacao > cartaY.populacao) ? cartaX.nome_cidade :
                     (cartaY.populacao > cartaX.populacao) ? cartaY.nome_cidade : "Empate";
    
    // Caso haja empate na primeira comparação, usa a segunda (exemplo: pib)
    if (strcmp(vencedor, "Empate") == 0) {
        vencedor = (cartaX.pib > cartaY.pib) ? cartaX.nome_cidade :
                   (cartaY.pib > cartaX.pib) ? cartaY.nome_cidade : "Empate Geral";
    }

    printf("A carta vencedora e: %s\n", vencedor);
    printf("Atributos comparados: Opcao %d e Opcao %d\n", escolha1, escolha2);
    printf("\n");
    */

    return 0;
}