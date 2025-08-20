#include <stdio.h>
#include <string.h>

int main()
{
// PRIMEIRA CARTA

char estado = 'A';
char codigo[5] = ("A01");
char cidade[20] = ("Belo Horizonte");
int populacao = 1245000;
float area = 1340.95;
float pib = 15.325000;
int pontosTuristicos = 16;

// SEGUNDA CARTA

char estado2 = 'B';
char codigo2[5] = ("B02");
char cidade2[20] = ("Fortaleza");
int populacao2 = 321000;
float area2 =1445.60;
float pib2 = 17.67000;
int pontosTuristicos2 = 25;




// DADOS DA PRIMEIRA CARTA

    printf("Digite o número da sua carta: ");

    printf("Estado: %c\n" ,estado); scanf("%c" ,&estado);
    
    printf("Código da carta: %s\n" ,codigo); fgets(codigo, 5, stdin);
    
    printf("Nome da cidade: %s\n" ,cidade); fgets(cidade, 20, stdin);

    printf("População: %d\n" ,populacao); scanf("%d", &populacao);

    printf("Área: %f\n" ,area); scanf("%f" ,&area);
    
    printf("PIB: %.2f\n" ,pib); scanf("%f" ,&pib);
    
    printf("Pontos turísticos: %d\n" ,pontosTuristicos); scanf("%d" ,&pontosTuristicos);

// DADOS DA SEGUNDA CARTA

    printf("Estado: %c\n" ,estado2); scanf("%c" ,&estado2);

    printf("Código da carta: %s\n" ,codigo2); fgets(codigo2, 5, stdin);;
    
    printf("Nome da cidade: %s\n" ,cidade2); fgets(cidade2, 15, stdin);

    printf("População: %d\n" ,populacao2); scanf("%d", &populacao2);

    printf("Área: %.2f\n" ,area2); scanf("%f" ,&area2);
    
    printf("PIB: %.2f\n" ,pib2); scanf("%f" ,&pib2);
    
    printf("Pontos turísticos: %d\n" ,pontosTuristicos2); scanf("%d" ,&pontosTuristicos2);




   return 0;
}
