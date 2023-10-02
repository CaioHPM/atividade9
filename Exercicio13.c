#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int i, vetor[5], maior = 0, menor = 9999, iMaior, iMenor;

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
        iMaior = i;
       }
       if (vetor[i] < menor)
       {
        menor = vetor[i];
        iMenor = i;
       }
    }

    printf("O maior valor do vetor fica na %d° posicao, e o menor na %d° posicao.", iMaior + 1, iMenor + 1);

    return 0;
}
