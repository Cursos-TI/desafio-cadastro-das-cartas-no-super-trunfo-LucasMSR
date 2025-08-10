#include <stdio.h>

int main()
{
// Primeira Carta
   
    printf("Digite o estado (Apenas uma letra) \n");
    char estado = 'A';
    char codigo [4] = "A01";
    char cidade [20] = ("Belo Horizonte");
    int populacao = 2900000;
    float area = 1550.90;
    float pib = 750.355;
    int pontosTuristicos = 40;

    printf("Estado:");
    scanf(" %c", &estado);
    printf("CARTA 1 \n");
    printf("Código: %s\n" ,codigo);
    printf("Cidade: %s\n" ,cidade);
    printf("População %d\n" ,populacao);
    printf("Área: %.2f\n" ,area);
    printf("PIB: %.2f\n" ,pib);
    printf("Pontos Turísticos: %d\n" ,pontosTuristicos);

    printf("Digite o estado (Apenas uma letra) \n");



// Segunda Carta
    
    char estado2 = 'B';
    char codigo2 [4] = "B02";
    char cidade2 [15] = ("Fortaleza");
    int populacao2 = 2000000;
    float area2 = 4350.65;
    float pib2 = 130.780;
    int pontosTuristicos2 = 17;
    

    printf("Estado:");
    scanf(" %c", &estado2);
    printf("CARTA 2 \n");
    printf("Código: %s\n" ,codigo2);
    printf("Cidade: %s\n" ,cidade2);
    printf("População: %d\n" ,populacao2);
    printf("Área: %.2f\n" ,area2);
    printf("PIB: %.2f\n" ,pib2);
    printf("Pontos Turísticos: %d\n" ,pontosTuristicos2);

    return 0;
}