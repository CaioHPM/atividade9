#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int vetor[10], i, maior = 0, posicao;

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
        posicao = i + 1;
       }
       
    }
    
    printf("Os valores do vetor sao:");

    for ( i = 0; i < 10; i++)
    {
        printf("%d - ", vetor[i]);
    }
    
    printf("\nNo vetor, o maior valor e %d, e esta na %d° posicao.", maior, posicao);

    return 0;
}
