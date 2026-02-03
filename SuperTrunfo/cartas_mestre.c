#include <stdio.h>

int main(){

    char pais1[20], pais2[20], codigocarta1[20], codigocarta2[20];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2, resultado;
    float area1, area2, densidadePopulac1, densidadePopulac2;
    double pib1, pib2, pibPerCapita1, pibPerCapita2;
    int opcao1, opcao2;

    // Menu de entrada/informações do jogo.
    printf(".::Jogo de cartas Super trunfo::.\n");
    printf("Escolha uma opção.\n");
    printf("1. Entrar e jogar.\n");
    printf("2. Ler as regras.\n");
    printf("3. Sair do Jogo.\n");
    printf("Digite sua escolha: ");
    scanf("%d", &opcao1);

    printf("\n");

    //Coleta de dados do jogo.
    switch (opcao1)
    {
    case 1:
        printf("Informe os Dados da carta 1.\n");
        printf("País: ");
        scanf("%s", pais1);
        printf("Código da Carta(Exemplo:01, 02, 03...): ");
        scanf("%s", codigocarta1);
        printf("População: ");
        scanf("%d", &populacao1);
        printf("Área: ");
        scanf("%f", &area1);
        printf("PIB: ");
        scanf("%lf", &pib1);
        printf("Pontos Turisticos: ");
        scanf("%d", &pontosTuristicos1);

        printf("\n");

        printf("Informe os Dados da carta 2.\n");
        printf("País: ");
        scanf("%s", pais2);
        printf("Código da Carta(Exemplo:01, 02, 03...): ");
        scanf("%s", codigocarta2);
        printf("População: ");
        scanf("%d", &populacao2);
        printf("Área: ");
        scanf("%f", &area2);
        printf("PIB: ");
        scanf("%lf", &pib2);
        printf("Pontos Turisticos: ");
        scanf("%d", &pontosTuristicos2);
        break;
    case 2:
        printf("Você selecionou: Regras do jogo...\n");
        break;
    case 3:
        printf("Saindo do jogo...\n");
        break;
    default:
        printf("Opção inválida, Tente novamente.\n");
        break;
    }
    pibPerCapita1 = pib1 / populacao1;
    densidadePopulac1 = area1 / populacao1;
    printf(".::Dados da carta 1::.\n");
    printf("País: %s\n", pais1);
    printf("Código da carta: %s\n", codigocarta1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("Densidade Populacional: %f", densidadePopulac1);
    printf("PIB: %.2f\n", pib1);
    printf("PIB per Capita: %.2f", pibPerCapita1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n");

    printf(".::Dados da carta 2::.\n");
    pibPerCapita1 = pib1 / populacao1;
    densidadePopulac1 = area1 / populacao1;
    printf("País: %s\n", pais2);
    printf("Código da carta: %s\n", codigocarta2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("Densidade Populacional: %f", densidadePopulac2);
    printf("PIB: %.2f\n", pib2);
    printf("PIB per Capita: %.2f", pibPerCapita2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    printf("\n");

    printf(".::Comparando as Duas Cartas::.\n");
    printf("1. População Carta 1 %d x População Carta 2 %d.\n", populacao1, populacao2);
    printf("2. Área Carta 1 %.2f x Área Carta 2 %d.\n", area1, area2);
    printf("3. Densidade Populacional Carta 1 %f x Densidade Populacional Carta 2 %f.\n", densidadePopulac1, densidadePopulac2);
    printf("4. PIB Carta 1 %.2f x PIB Carta 2 %.2f.\n", pib1, pib2);
    printf("5. PIB per Capita carta 1 %.2f x PIB per Capita carta 2 %.2f.\n", pibPerCapita1, pibPerCapita2);
    printf("6. Pontos Turisticos Carta 1 %d x Pontos Turisticos Carta 2 %d.\n", pontosTuristicos1, pontosTuristicos2);
    printf("Digite a sua escolha: ");
    scanf("%d", opcao2);

    switch (opcao2)
    {
    case 1:
        resultado = populacao1 > populacao2 ? 1 : 0;
        if (resultado == 1) {
        printf("População carta 1 %d População carta 2 %d:Carta 1 é o Vencedor!\n", populacao1, populacao2);
        } else {
        printf("População carta 1 %d População carta 2 %d:Carta 2 é o Vencedor!\n", populacao1, populacao2);
        }
        break;
    case 2:
        resultado = area1 > area2 ? 1 : 0;
        if (resultado == 1)
        {
            printf("Área Carta 1 %.2f Área Carta 2 %.2f:Carta 1 é o Vencedor!\n", area1, area2);
        } else {
            printf("Área Carta 1 %.2f Área Carta 2 %.2f:Carta 2 é o Vencedor!\n", area1, area2);
        }
        
        break;
    case 3:
        resultado = densidadePopulac1 < densidadePopulac2 ? 1 : 0;
        if (resultado == 1)
        {
            printf("Área Carta 1 %.2f Área Carta 2 %.2f:Carta 1 ");
        }
        break;
    case 4:
        resultado = pib1 > pib2 ? 1 : 0;
        if (resultado == 1)
        {
            printf("Área Carta 1 %.2f Área Carta 2 %.2f:Carta 1 ");
        }
        break;
    case 5:
        resultado = pibPerCapita1 > pibPerCapita2 ? 1 : 0;
        if (resultado == 1)
        {
            printf("Área Carta 1 %.2f Área Carta 2 %.2f:Carta 1 ");
        }
        break;
    case 6:
        resultado = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
        if (resultado == 1)
        {
            printf("Área Carta 1 %.2f Área Carta 2 %.2f:Carta 1 ");
        }
        break;
    default:
        printf("Opção inválida, tente novamente.\n");
        break; 
    }

    
    
}