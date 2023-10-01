#include<stdio.h>
#include<stdlib.h>

int main(){
    int vetor[6], i;

    for ( i = 0; i < 6; i++)
    {
        printf("Digite o valor do %d° do vetor:\n", i + 1);
        scanf("%d", &vetor[i]);

        getchar();
    }
    
    printf("Os valores lidos foram:");

    for ( i = 0; i < 6; i++)
    {
        printf("%d - ", vetor[i]);
    }
    

    return 0;
}
