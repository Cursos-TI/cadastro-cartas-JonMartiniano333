#include <stdio.h>

int main() {
    //Aqui é onde sera informado os dados da primeira carta
    char estadoUm[50];
    char codigoUm[50];
    char nomeCidadeUm[50];
    int habitantesUm;
    float areaUm;
    float PIBUm;
    int pontosTuristicosUm;

    //Aqui é onde sera informado os dados da segunda carta
    char estadoDois[50];
    char codigoDois[50];
    char nomeCidadeDois[50];
    int habitantesDois;
    float areaDois;
    float PIBDois;
    int pontosTuristicosDois;


    //entrada e saida da primeira carta
    printf("Digite uma letra de A até H para representar um de oitos estados: \n");
    scanf("%s", estadoUm);

    printf("Digite um Código para a carta, sendo de 01 a 04 e de A até Z: \n");
    scanf("%s", codigoUm);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidadeUm);

    printf("Digite o Número de habitantes da cidade: \n");
    scanf("%d", &habitantesUm);

    printf("Digite a Área em KM² da sua cidade: \n");
    scanf("%f", &areaUm);

    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &PIBUm);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosTuristicosUm);
    printf("Vamos iniciar a proxima carta \n\n");

    //Aqui começa a segunda carta
    printf("Digite uma letra de A até H para representar um de oitos estados: \n");
    scanf("%s", estadoDois);

    printf("Digite um Código para a carta, sendo de 01 a 04 e de A até Z: \n");
    scanf("%s", codigoDois);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidadeDois);

    printf("Digite o Número de habitantes da cidade: \n");
    scanf("%d", &habitantesDois);

    printf("Digite a Área em KM² da sua cidade: \n");
    scanf("%f", &areaDois);

    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &PIBDois);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosTuristicosDois);

    //aqui sera mostrado as informações das duas cartas

    printf("Carta 1: \n");
    printf("Estado:%s \n", estadoUm);
    printf("Código:%s \n", codigoUm);
    printf("Nome da Cidade:%s \n", nomeCidadeUm);
    printf("População:%d \n", habitantesUm);
    printf("Área:%.2f KM² \n", areaUm);
    printf("Número de pontos Turísticos: %d \n\n", pontosTuristicosUm);
    printf("\n");

    printf("Carta 2: \n");
    printf("Estado:%s \n", estadoDois);
    printf("Código:%s \n", codigoDois);
    printf("Nome da Cidade:%s \n", nomeCidadeDois);
    printf("População:%d \n", habitantesDois);
    printf("Área:%.2f KM² \n", areaDois);
    printf("Número de pontos Turísticos: %d \n", pontosTuristicosDois);





}
