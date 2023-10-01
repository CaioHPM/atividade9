#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int vetor[10], vetorResultado[10], i;

    for ( i = 0; i < 10; i++)
    {
        printf("Digite o valor do %d° do vetor:\n", i + 1);
        scanf("%d", &vetor[i]);

        getchar();
    }

    for ( i = 0; i < 10; i++)
    {
        vetorResultado[i] = vetor[i] * vetor[i];
    }
    
    printf("Os valores no vetor sao:");

    for ( i = 0; i < 10; i++)
    {
        printf("%d - ", vetor[i]);
    }

    printf("\nE seus respectivos valores ao quadrado:"); 

    for ( i = 0; i < 10; i++)
    {
        printf("%d - ", vetorResultado[i]);
    }
       

    return 0;
}
