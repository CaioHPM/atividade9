#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int i, vetor[5], maior = 0, menor = 9999;
    float media;

    for ( i = 0; i < 5; i++)
    {
        printf("Digite o %d° numero do vetor:\n", i + 1);
        scanf("%d", &vetor[i]);

        getchar();
    }

    for ( i = 0; i < 5; i++)
    {
       if (vetor[i] > maior)
       {
        maior = vetor[i];
       }
       if (vetor[i] < menor)
       {
        menor = vetor[i];
       }
       media += vetor[i];
    }

    media = media/5;

    printf("O maior valor do vetor e %d, o menor %d, e a media dos valores %.2f.", maior, menor, media);

    return 0;
}
