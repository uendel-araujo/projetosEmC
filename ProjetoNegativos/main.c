#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    int vet[N];

    for (int i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%d" , &vet[i]);
    }

    return 0;
}
