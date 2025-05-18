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

    //avenureiro
    float densidade1 = (float) populacao1 / area1;
    float pib_c1 = (float) pib1 / populacao1;

//carta_2
    char estado2= 'B';
    char carta2[15]= "B01";
    char cidade2[15]= "Andradas";
    int populacao2= 133325;
    float area2= 3151.00;
    float pib2= 169.18;
    int pontos_turisticos2= 10;

    //avenureiro
    float densidade2 = (float)populacao2 / area2;
    float pib_c2 = (float) pib2 / populacao2;
           
// Exibe cartas
    printf("                  carta 1             -            carta 2\n");
    printf("Est:                %c                             %c\n", estado1, estado2);
    printf("Car:                %s                             %s\n", carta1, carta2);
    printf("Cid:                %s                             %s\n", cidade1, cidade2);
    printf("Pop:                %d                             %d\n", populacao1, populacao2);
    printf("Área:               %.2f                           %.2f\n", area1, area2);
    printf("PIB:                %.2f                           %.2f\n", pib1, pib2);
    printf("P.T.:               %d                             %d\n", pontos_turisticos1, pontos_turisticos2);


    //avenureiro
    printf ("D.P.:              %.2f                          %.2f\n", densidade1, densidade2);
    printf ("PIBpC:             %f                          %f\n", pib_c1, pib_c2 );

    return 0;

    }
