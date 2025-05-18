#include <stdio.h>

int main() {

//carta1
    char estado1= 'A';
    char carta1[15]= "A01";
    char cidade1[15]= "Campinas";
    int populacao1= 1000000;
    float area1= 1682.00;
    float pib1= 699.28;
    int pontos_turisticos1= 50;

//carta_2
    char estado2= 'B';
    char carta2[15]= "B01";
    char cidade2[15]= "Andradas";
    int populacao2= 133325;
    float area2= 3151.00;
    float pib2= 169.18;
    int pontos_turisticos2= 10;
           
// Exibe cartas
    printf("                     carta 1                -            carta 2\n");
    printf("estados:                %c                             %c\n", estado1, estado2);
    printf("cartas:                %s                            %s\n", carta1, carta2);
    printf("cidade:               %s                        %s\n", cidade1, cidade2);
    printf("populacao:              %d                    %d\n", populacao1, populacao2);
    printf("area:                %.2f                      %.2f\n", area1, area2);
    printf("pib:                %.2f                        %.2f\n", pib1, pib2);
    printf("pontos turisticos:        %d                        %d\n", pontos_turisticos1, pontos_turisticos2);

    return 0;

    }
