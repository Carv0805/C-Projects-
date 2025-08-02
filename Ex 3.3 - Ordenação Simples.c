/******************************************************************************

Dado três números inteiros distintos, sua tarefa é escrevê-los em ordem crescente.

A entrada consiste em uma única linha contendo três inteiros A, B e C 
(-1000 ≤ A, B, C ≤ 1000), separados por um espaço.

Imprima os três números em ordem crescente, separados por um espaço.
*******************************************************************************/
#include <stdio.h>
int main()
{
int num_1, num_2, num_3;
scanf("%d%d%d",&num_1, &num_2, &num_3);
if((num_1==num_3) || (num_1==num_2) || (num_2==num_3)){
    printf("Erro: os numeros devem ser distintos.");
}else if((num_3<num_2) && (num_3<num_1) ){
    printf("%d ",num_3);
    if((num_2<num_1)){
        printf("%d ",num_2);
        printf("%d",num_1);
    }else{
        printf("%d",num_1);
        printf("%d",num_2);
    }
}else if((num_2<num_3) && (num_2<num_1)){
    printf("%d ",num_2);
    if((num_3<num_1)){
        printf("%d ",num_3);
        printf("%d",num_1);
    }else{
        printf("%d ",num_1);
        printf("%d",num_2);
    }
    ;
}else if((num_1<num_2) && (num_1<num_3)){
    printf("%d ",num_1);
    if((num_2<num_3)){
        printf("%d ",num_2);
        printf("%d",num_3);
    }else{
        printf("%d ",num_3);
        printf("%d",num_2);
    }
}
    return 0;
}
