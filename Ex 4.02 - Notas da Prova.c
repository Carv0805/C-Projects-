/******************************************************************************
Dada uma sequência de notas de uma prova, escreva um programa que processe os dados conforme as seguintes regras:
seguintes regras:

    A entrada consiste em uma sequência de números reais representando as notas dos alunos.
    A leitura das notas deve continuar até que um valor negativo seja digitado (esse valor não deve ser considerado).
    O programa deve calcular e exibir:
        O número de alunos com nota baixa (nota < 5.0).
        O número de alunos com nota alta (nota >= 5.0).
        A média geral das notas.
        A porcentagem dos alunos que obtiveram nota maior ou igual a 5.


*******************************************************************************/
#include <stdio.h>

int main()
{
    float nota, nota_baixa=0, nota_alta=0, media, porcent,total=0;
    long long int cont=0;
    scanf("%f",&nota);
    while(nota>=0){
        total = total + nota;
        if(nota<5.0){
            nota_baixa++;
        }else if(nota>=5.0){
            nota_alta++;
        }
        cont++;
        scanf("%f",&nota);
    }
    if (cont > 0) {
        media = total / cont;
        porcent = (nota_alta * 100.0) / cont;
        printf("%.f\n%.f\n%.2f\n%.1f%%\n", nota_baixa, nota_alta, media, porcent);
    } else {
        ;
    }
    return 0;
}
