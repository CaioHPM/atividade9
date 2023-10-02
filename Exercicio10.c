#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int i;
    float vetor[15], media;

    for ( i = 0; i < 15; i++)
    {
        printf("Digite a nota do %d° aluno:\n", i + 1);
        scanf("%f", &vetor[i]);

        getchar();
    }

    for ( i = 0; i < 15; i++)
    {
        media += vetor[i];
    }
    
    media = media/15;

    printf("A media da turma e %.2f pontos.", media);

    return 0;
}
