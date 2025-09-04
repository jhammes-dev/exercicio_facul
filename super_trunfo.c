#include <stdio.h>

int main()
{

    // informações para carta 1
    int carta1 = 1;
    char estado1[20], codigoCarta1[4], nomeCidade1[30];
    int populacao1, pontoTuristico1;
    float pib1, areaKm1,CalcPIB1;

    // informações para carta 2
    int carta2 = 2;
    char estado2[20], codigoCarta2[4], nomeCidade2[30];
    int populacao2, pontoTuristico2;
    float pib2, areaKm2, CalcPIB2;

    //  Entrada de Dados Carta 1
    printf("OLÁ, ABAIXO PEÇO PREENCHA OS CAMPOS COM OS DADOS DO SEU ESTADO !!!\nCarta: %d\n", carta1);

    printf("Estado:\n");
    scanf(" %s", estado1);

    printf("Código: (LETRA DO ESTADO MAIS UM NUMERO DE 01 A 04)\n");
    scanf(" %s", codigoCarta1);

    printf("Nome da Cidade:\n");
    scanf(" %s", nomeCidade1);

    printf("População:\n");
    scanf("%d", &populacao1);

    printf("Área (km²):\n");
    scanf("%f", &areaKm1);

    printf("PIB (PRODUTO INTERNO BRUTO):\n");
    scanf("%f", &pib1);
    // CALCULA O PIB PER CAPITA
    CalcPIB1 = pib1 / populacao1;

    printf("Números de Pontos Turísticos:\n");
    scanf("%d", &pontoTuristico1);

    printf("Informações Salvas ! ! !\n\nPRÓXIMA CARTA !\n\n");


    //  Entrada de Dados Carta 2
    printf("Carta: %d\n", carta2);

    printf("Estado:\n");
    scanf(" %s", estado2);

    printf("Código: (LETRA DO ESTADO MAIS UM NUMERO DE 01 A 04)\n");
    scanf(" %s", codigoCarta2);

    printf("Nome da Cidade:\n");
    scanf(" %s", nomeCidade2);

    printf("População:\n");
    scanf("%d", &populacao2);

    printf("Área (km²):\n");
    scanf("%f", &areaKm2);

    printf("PIB (PRODUTO INTERNO BRUTO):\n");
    scanf("%f", &pib2);
    // CALCULA O PIB PER CAPITA
    CalcPIB2 = pib2 / populacao2;

    printf("Números de Pontos Turísticos:\n");
    scanf("%d", &pontoTuristico2);

    printf("Informações Salvas ! ! !\n\nDetalhe das Cartas !\n\n");



    // EXIBI DADOS DA CARTA 1 // SEPAREI OS PRINTF POR TIPO DE DADO, FICANDO MELHOR PARA ORGANIZAR PARA EXIBIÇÃO E ORGANIZAÇÃO DO COD
    printf(" Carta: %d\n Estado: %s\n Código: %s\n Nome da Cidade: %s\n", carta1, estado1, codigoCarta1, nomeCidade1);
    printf(" População: %d\n Área (km²): %.2f\n PIB PER CAPITA: %.2f\n Número de Ponto Turísticos: %d\n\n", populacao1, areaKm1, CalcPIB1, pontoTuristico1);

    // EXIBI DADOS DA CARTA 2 // SEPAREI OS PRINTF POR TIPO DE DADO, FICANDO MELHOR PARA ORGANIZAR PARA EXIBIÇÃO E ORGANIZAÇÃO DO COD
    printf(" Carta: %d\n Estado: %s\n Código: %s\n Nome da Cidade: %s\n", carta2, estado2, codigoCarta2, nomeCidade2);
    printf(" População: %d\n Área (km²): %.2f\n PIB PER CAPITA: %.2f\n Número de Ponto Turísticos: %d\n", populacao2, areaKm2, CalcPIB2, pontoTuristico2);
}