#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int i, negativos = 0;
    float vetor[10], soma = 0;

    for ( i = 0; i < 10; i++)
    {
        printf("Digite o %d° numero do vetor:\n", i + 1);
        scanf("%f", &vetor[i]);

        getchar();
    }

    for ( i = 0; i < 10; i++)
    {
        if (vetor[i] < 0)
        {
            negativos++;
        }
        if (vetor[i] > 0)
        {
            soma += vetor[i];
        }
        
    }

    printf("A soma dos valores positivos e %.2f, e o vetor possui %d numeros negativos.", soma, negativos);

    return 0;
}
