#include <stdio.h>

int main()
{
    // informações para carta 1
    int carta1 = 1;
    char estado1[20], codigoCarta1[4], nomeCidade1[30];
    int pontoTuristico1;
    float pib1, areaKm1, pibPerCapita1, densidade1, superPoder1;
    unsigned long int populacao1;

    // informações para carta 2
    int carta2 = 2;
    char estado2[20], codigoCarta2[4], nomeCidade2[30];
    int pontoTuristico2;
    float pib2, areaKm2, pibPerCapita2, densidade2, superPoder2;
    unsigned long int populacao2;

    // Entrada de Dados Carta 1
    printf("OLÁ, ABAIXO PEÇO PREENCHA OS CAMPOS COM OS DADOS DO SEU ESTADO !!!\nCarta: %d\n", carta1);

    printf("Estado:\n");
    scanf(" %s", estado1);

    printf("Código: (LETRA DO ESTADO MAIS UM NUMERO DE 01 A 04)\n");
    scanf(" %s", codigoCarta1);

    printf("Nome da Cidade:\n");
    scanf(" %s", nomeCidade1);

    printf("População:\n");
    scanf("%lu", &populacao1);

    printf("Área (km²):\n");
    scanf("%f", &areaKm1);

    printf("PIB (PRODUTO INTERNO BRUTO):\n");
    scanf("%f", &pib1);

    printf("Números de Pontos Turísticos:\n");
    scanf("%d", &pontoTuristico1);

    // CALCULA A DENSIDADE POPULACIONAL
    densidade1 = populacao1 / areaKm1;
    // CALCULA O PIB PER CAPITA
    pibPerCapita1 = pib1 / populacao1;

    printf("Informações Salvas ! ! !\n\nPRÓXIMA CARTA !\n\n");

    // Entrada de Dados Carta 2
    printf("Carta: %d\n", carta2);

    printf("Estado:\n");
    scanf(" %s", estado2);

    printf("Código: (LETRA DO ESTADO MAIS UM NUMERO DE 01 A 04)\n");
    scanf(" %s", codigoCarta2);

    printf("Nome da Cidade:\n");
    scanf(" %s", nomeCidade2);

    printf("População:\n");
    scanf("%lu", &populacao2);

    printf("Área (km²):\n");
    scanf("%f", &areaKm2);

    printf("PIB (PRODUTO INTERNO BRUTO):\n");
    scanf("%f", &pib2);

    printf("Números de Pontos Turísticos:\n");
    scanf("%d", &pontoTuristico2);

    // CALCULA A DENSIDADE POPULACIONAL
    densidade2 = populacao2 / areaKm2;
    // CALCULA O PIB PER CAPITA
    pibPerCapita2 = pib2 / populacao2;

    // CALCULA O SUPER PODER
    superPoder1 = (float)(populacao1 + areaKm1 + pib1 + pontoTuristico1 + pibPerCapita1);
    superPoder2 = (float)(populacao2 + areaKm2 + pib2 + pontoTuristico2 + pibPerCapita2);

    printf("Informações Salvas ! ! !\n\nDetalhe das Cartas !\n\n");

    // Exibe dados da carta 1
    printf(" Carta: %d\n Estado: %s\n Código: %s\n Nome da Cidade: %s\n", carta1, estado1, codigoCarta1, nomeCidade1);
    printf(" População: %lu\n Área: %.2f km²\n PIB: %.2f reais\n Número de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n Super Poder: %.2f\n\n",
           populacao1, areaKm1, pib1, pontoTuristico1, densidade1, pibPerCapita1, superPoder1);

    // Exibe dados da carta 2
    printf(" Carta: %d\n Estado: %s\n Código: %s\n Nome da Cidade: %s\n", carta2, estado2, codigoCarta2, nomeCidade2);
    printf(" População: %lu\n Área: %.2f km²\n PIB: %.2f reais\n Número de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n Super Poder: %.2f\n\n",
           populacao2, areaKm2, pib2, pontoTuristico2, densidade2, pibPerCapita2, superPoder2);

    // COMPARAÇÃO DE CARTAS
    printf("Comparação de Cartas:\n\n");

    printf("População: Carta %d venceu (%lu)\n", (populacao1 > populacao2 ? 1 : 2), (populacao1 > populacao2));
    printf("Área: Carta %d venceu (%d)\n", (areaKm1 > areaKm2 ? 1 : 2), (areaKm1 > areaKm2));
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2 ? 1 : 2), (pib1 > pib2));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontoTuristico1 > pontoTuristico2 ? 1 : 2), (pontoTuristico1 > pontoTuristico2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2 ? 1 : 2), (densidade1 < densidade2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2 ? 1 : 2), (pibPerCapita1 > pibPerCapita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2 ? 1 : 2), (superPoder1 > superPoder2));

    return 0;
}