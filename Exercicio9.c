#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int vetor[6], i;

    for ( i = 0; i < 6; i++)
    {
        printf("Digite um valor par para a %d° posicao do vetor:\n", i + 1);
        scanf("%d", &vetor[i]);

        getchar();

        if (vetor[i]%2 != 0)
        {
            printf("Valor invalido!");
            i -= 1;
        }
        
    }
    
    printf("A ordem do vetor inversamente e:");

    for ( i = 5; i > -1; i = i - 1)
    {
        printf("%d - ", vetor[i]);
    }
    

    return 0;
}
