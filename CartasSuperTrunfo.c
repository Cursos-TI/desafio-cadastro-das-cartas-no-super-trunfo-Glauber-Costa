#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1 [4]= "CE";
    char codigo1 [5]= "A01";
    char cidade1 [50]= "FORTALEZA"; 
    int populacao1= 2500000;
    float area1= 313800, pib1=73000000000;
    int pontos_turisticos1 = 8;

    // Declaração das variáveis para a segunda carta
    char estado2 [4] = "MG";
    char codigo2[5] ="B02";
    char cidade2[50] = "BELOHORIZONTE";
    int populacao2 = 2300000;
    float area2= 331000, pib2=105000000000;
    int pontos_turisticos2 = 7;

    float densidade1, densidade2, pibpercapita1, pibpercapita2;

    // Calcula densidade populacional e PIB PER CAPITA
    densidade1= (populacao1 / area1);
    
    densidade2 = (populacao2 / area2);
     
    pibpercapita1= (pib1 / populacao1);

    pibpercapita2= (pib2/ populacao2);

    // Calculando super poder 

    float superpodercidade1 = (float) populacao1 + area1 + pib1 + pontos_turisticos1 - densidade1;
    float superpodercidade2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 - densidade2;   

    // Comparando as cartas  

    printf ("Area: cidade de BELO HORIZONTE venceu : %d \n", area1 > area2 );
    printf ("População: cidade de BELO HORIZONTE venceu : %d \n", populacao1 > populacao2 );
    printf ("Pib: cidade de BELO HORIZONTE venceu : %d \n", pib1 > pib2 );
    printf ("Densidade: cidade de BELO HORIZONTE venceu : %d \n", densidade1 > densidade2  );
    printf ("Pontos turisticos: cidade de BELO HORIZONTE venceu : %d \n", pontos_turisticos1 >pontos_turisticos2 );
    printf ("Pib per capta: cidade de BELO HORIZONTE venceu : %d \n", pibpercapita1 > pibpercapita2 );
    
    // DESCIDI FAZER O SUPER PODER COM IF ELSE PORQUE ACHO QUE A UM DESTAQUE MAIOR 

    if (pibpercapita1>pibpercapita2){
        printf ("\n O VENCEDOR É: %s com maior super poder de %.2f\n", cidade1, superpodercidade1);
    } else { printf ("O VENCEDOR É: %s com maior super poder de %.2f\n", cidade2, superpodercidade2);

    }




}
