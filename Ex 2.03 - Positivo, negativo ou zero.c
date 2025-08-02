/*Seu programa deve receber um número inteiro e deve informar se o 
número é "positivo", "negativo" ou se é "zero".*/
#include <stdio.h>

int main()
{
signed int num;
scanf("%d",&num);
if(num>0){
    printf("positivo");
}else if(num<0){
    printf("negativo");
}else{
    printf("zero");
}
    return 0;
}
