#include <stdio.h>

int main()
{
    printf("Carta 1: \n");
    
    char estado = 'A';
    char codigo [4] = "A01";
    char cidade [15] = ("Belo Horizonte");
    int populacao = 35500000;
    float area = 1550.90;
    float pib = 750.35;
    int pontosTuristicos = 40;

    printf("Estado: %c\n" ,estado);
    printf("Código: %s\n" ,codigo);
    printf("Cidade: %s\n" ,cidade);
    printf("População %d\n" ,populacao);
    printf("Área: %f\n" ,area);
    printf("PIB: %f\n" ,pib);
    printf("Pontos Turísticos: %d\n" ,pontosTuristicos);


    return 0;
}