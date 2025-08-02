/******************************************************************************
Você deve escrever um programa que leia uma sequência de notas (valores inteiros) até que um número negativo seja digitado. 
O programa deve então exibir a maior e a menor nota lida, desconsiderando o número negativo que encerra a entrada.

#Entrada
Uma sequência de números inteiros, um por linha. 
A entrada termina quando um número negativo é lido. 
Há pelo menos um número válido antes do valor negativo.

#Saida
Dois números inteiros na mesma linha: o maior e o menor valor lidos, separados por um espaço.
*******************************************************************************/
#include <stdio.h>

int main() {
    int num_maior = 0, num_menor = 0, atual; 

    scanf("%d", &atual);
    
    if (atual > 0) {
        num_maior = num_menor = atual; 
    }
    while (atual > 0) {
        if (atual > num_maior) {
            num_maior = atual;
        }
        if (atual < num_menor) {
            num_menor = atual;
        }
        scanf("%d", &atual);
    }
    printf("%d %d\n", num_maior, num_menor);
    return 0;
}