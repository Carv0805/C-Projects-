/*Escreva um programa que leia dois números inteiros e exiba qual é o maior deles. 
Caso os números sejam iguais, informe que são iguais imprimindo a mensagem "igual".*/

#include <stdio.h>

int main()
{
signed int num_1, num_2;
    scanf("%d %d", &num_1, &num_2);
    if(num_1>num_2){
        printf("%d", num_1);
    }else if(num_1<num_2){
        printf("%d", num_2);
    }else{
        printf("igual");
    }
    return 0;
}