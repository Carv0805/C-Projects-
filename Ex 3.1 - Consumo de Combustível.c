/******************************************************************************
Um carro percorreu uma certa distância consumindo uma quantidade específica de litros de gasolina. 
Seu objetivo é calcular o consumo médio do carro em quilômetros por litro (Km/l) e 
exibir uma mensagem correspondente, conforme a tabela abaixo:




*******************************************************************************/
#include <stdio.h>

int main()
{
float D, L, KM_L;
scanf("%f%f", &D, &L);
KM_L = D/L;
if (KM_L < 8){
    printf("Venda o carro!");
} else if ((KM_L>=8)&&(KM_L<=12)){
    printf("Economico!");
} else if(KM_L>12){
    printf("Super economico!");
} else{
    ;
}
    return 0;
}