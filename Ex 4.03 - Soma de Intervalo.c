/******************************************************************************
Você deve ler dois números inteiros, x e y, e em seguida, exibir a soma de todos os números 
inteiros no intervalo de x a y, incluindo os próprios valores de x e y.
*******************************************************************************/
#include <stdio.h>

int main()
{   
    int x, y;
    int i=0,soma=0;
    scanf("%d%d", &x, &y);
    i=x;
    while(i<=y){
        soma+=i;
        i++;
    }
        printf("%d",soma);
    return 0;
}
