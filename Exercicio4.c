#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int vetor[8], resultado, i, x, y;

    for ( i = 0; i < 8; i++)
    {
        printf("Digite o valor do %d° do vetor:\n", i + 1);
        scanf("%d", &vetor[i]);

        getchar();
    }

    printf("Digite a posicao dos dois numero do vetor que voce que somar:");
    scanf("%d %d", &x, &y);

    resultado = vetor[x - 1] + vetor[y - 1];

    printf("A soma das posicoes %d e %d gera o valor %d", x, y, resultado);

    return 0;
}
