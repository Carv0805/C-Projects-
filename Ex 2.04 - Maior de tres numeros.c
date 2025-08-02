/*Escreva um programa que leia três números inteiros e determine qual é o maior número entre eles. 
Caso haja empate, informe que há números iguais. 
Neste caso seu programa deve imprimir "Há números iguais"*/
#include <stdio.h>

int main()
{
int num_1, num_2, num_3;
scanf("%d",&num_1);
scanf("%d",&num_2);
scanf("%d",&num_3);
if (num_1>num_2 && num_1>num_3){
    printf("%d",num_1);
}else if(num_2>num_1 && num_2>num_3){
    printf("%d",num_2);
}else if(num_3>num_1 && num_3>num_2){
    printf("%d",num_3);
}else{
    printf("Ha numeros iguais");
}
    return 0;
}
