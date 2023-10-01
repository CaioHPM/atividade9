#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int vetor[10], i, par = 0;

    for ( i = 0; i < 10; i++)
    {
        printf("Digite o valor do %d° do vetor:\n", i + 1);
        scanf("%d", &vetor[i]);

        getchar();
    }

    for ( i = 0; i < 10; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            par++;
        }
        
    }
    
    printf("No vetor tem %d numeros pares.", par);

    return 0;
}
