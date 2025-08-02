/******************************************************************************

O programa deve ler os três lados de um triângulo e verificar se os lados informados podem formar um triângulo válido. 
Para isso, a soma de dois lados deve ser maior que o terceiro. 
O programa deve exibir "Triangulo Valido" ou "Triangulo Invalido", dependendo do resultado.

*******************************************************************************/
#include <stdio.h>

int main()
{
int a, b, c, soma_ab, soma_ac, soma_bc;
scanf("%d%d%d", &a, &b, &c);
soma_ab = a+b;
soma_ac = a+c;
soma_bc = b+c;
if ((soma_ab>c) && (soma_bc>a) && (soma_ac>b)){
    printf("Triangulo Valido");
}else{
    printf("Triangulo Invalido");
}
    return 0;
}
