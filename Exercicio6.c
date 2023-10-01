#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int vetor[10], i, maior = 0, menor = 9999;

    for ( i = 0; i < 10; i++)
    {
        printf("Digite o valor do %d° do vetor:\n", i + 1);
        scanf("%d", &vetor[i]);

        getchar();
    }

    for ( i = 0; i < 10; i++)
    {
       if (vetor[i] > maior)
       {
        maior = vetor[i];
       }
       if (vetor[i] < menor)
       {
        menor = vetor[i];
       }
       
    }
    
    printf("No vetor, o maior valor e %d, e o menor e %d.", maior, menor);

    return 0;
}
