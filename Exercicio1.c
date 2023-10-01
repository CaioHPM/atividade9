#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[6] = {1, 0, 5, -2, -5, -7}, soma = 0, i;

    for (i = 0; i < 6; i++)
    {
        soma += a[i];
    }

    printf("A soma dos valores do vetor e %d\n", soma);

    a[3] = 100;

    for ( i = 0; i < 6; i++)
    {
        printf("O %d° numero do vetor e %d\n", i + 1, a[i]);
    }


    return 0;
}
