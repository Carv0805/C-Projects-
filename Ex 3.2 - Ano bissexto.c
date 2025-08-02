/******************************************************************************

Escreva um programa que leia um ano e determine se ele é bissexto ou não. 
Um ano é bissexto se for divisível por 4, mas não por 100, exceto se for divisível por 400. 
A saída do programa deve ser "e ano bissexto" ou "nao e ano bissexto".

*******************************************************************************/
#include <stdio.h>
int main()
{
int ano;
scanf("%d",&ano);
if(ano%100 == 0){
    if(ano%400 == 0){
        printf("e ano bissexto");
    }else{
    printf("nao e ano bissexto");
    }
}else if((ano%4 == 0)){
    printf("e ano bissexto");
}else{
    printf("nao e ano bissexto");
}
return 0;
}
