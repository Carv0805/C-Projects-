/******************************************************************************
Você deve escrever um programa que, dado um ano inicial e um ano final, imprima todos os anos bissextos (calendário gregoriano) no intervalo, 
incluindo o ano inicial e o ano final, se for o caso

A entrada consiste em duas linhas. A primeira linha contém um número inteiro A (1900 ≤ A ≤ 9999), representando o ano inicial. 
A segunda linha contém um número inteiro B (1900 ≤ B ≤ 9999), representando o ano final.

*******************************************************************************/
#include <stdio.h>

int main() {
    int ano_1, ano_2;
    scanf("%d %d", &ano_1, &ano_2);
    
    while (ano_1 % 4 != 0 || (ano_1 % 100 == 0 && ano_1 % 400 != 0)) {
        ano_1++;
    }
    
    while (ano_1 <= ano_2) {
        if (ano_1 % 100 != 0 || ano_1 % 400 == 0) {
            printf("%d\n", ano_1);
        }
        ano_1 += 4;
    }
    
    return 0;
}
