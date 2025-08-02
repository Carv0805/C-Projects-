/*Crie um programa que receba um número inteiro e informe se ele é par ou ímpar. 
Para isso, utilize a operação de módulo (%). Seu programa deve imprimir "impar" ou "par"
*/
#include <stdio.h>

int main()
{
int num;
scanf("%d",&num);
if(num%2 == 0){
    printf("par");
}else{
    printf("impar");
}
    return 0;
}