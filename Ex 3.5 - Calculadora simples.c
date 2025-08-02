/******************************************************************************

O programa deve dois números inteiros e uma operação matemática (+, -, *, /). 
Em seguida, deve exibir o resultado da operação escolhida. 
Caso o usuário escolha uma operação inválida, deve exibir a mensagem de erro. 
As mensagens de erro são: "Erro: divisao por zero"  
Quando ocorre uma divisão por zero 
"Erro: operacao invalida" 
Quando um operador inválido é escolhido (que não seja +, -, * ou / ). 
Utilize printf("%.2f) para limitar apenas 2 casas decimais quando for uma operação de / . 
As demais operações são inteiras e não precisam exibir casas decimais.

*******************************************************************************/
#include <stdio.h>

int main()
{
int num_1, num_2, soma, sub, mult;
float divi;
char operacoes;
scanf("%d%d ", &num_1, &num_2);
scanf("%c",&operacoes);
soma = num_1 + num_2;
sub = num_1 - num_2;
mult = num_1 * num_2;
divi = (float) num_1 / num_2;
switch(operacoes){
    case'+': printf("%d",soma);
        break;
    case'-': printf("%d",sub);
        break;
    case'*': printf("%d",mult);
        break;
    case'/': 
        if(num_2!=0){
            printf("%.2f",divi);
        }else{
            printf("Erro: divisao por zero");
        }
        break;
    default: printf("Erro: operacao invalida");
}
    return 0;
}