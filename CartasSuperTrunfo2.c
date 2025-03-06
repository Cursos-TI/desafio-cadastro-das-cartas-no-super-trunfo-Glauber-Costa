#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1 [4]= "CE";
    char codigo1 [5]= "A01";
    char cidade1 [50]= "FORTALEZA"; 
    int populacao1= 2500000;
    float area1= 313800, pib1=73000000000;
    int pontos_turisticos1;

    // Declaração das variáveis para a segunda carta
    char estado2 [4] = "MG";
    char codigo2[5] ="B02";
    char cidade2[50] = "BELOHORIZONTE";
    int populacao2 = 2300000;
    float area2= 331000, pib2=105000000000;
    int pontos_turisticos2;

    float densidade1, densidade2, pibpercapita1, pibpercapita2;

    // Calcula densidade populacional e PIB PER CAPITA
    densidade1= (populacao1 / area1);
    
    densidade2 = (populacao2 / area2);
     
    pibpercapita1= (pib1 / populacao1);

    pibpercapita2= (pib2/ populacao2);

    // Comparando as cartas  

    printf ("Carta de: %s (%s)- %.2f \n",cidade1,estado1, pibpercapita1);
    printf ("Carta de: %s (%s)- %.2f \n",cidade2,estado2, pibpercapita2);

    if (pibpercapita1>pibpercapita2){
        printf ("O VENCEDOR É: %s com pib per capita de %.2f\n", cidade1, pibpercapita1);
    } else { printf ("O VENCEDOR É: %s com pib per capita de %.2f\n", cidade2, pibpercapita2);

    }

