#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    double soma, media;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    char nomes[N][50];
    int idades[N];
    double alturas[N];

    for(int i = 0; i < N; i++) {
        printf("Dados da %dª pessoa \n",i + 1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nomes[i]);

        printf("Idade: ");
        scanf("%d", &idades[i]);

        printf("Altura: ");
        scanf("%lf", &alturas[i]);
    }

    soma = 0;
    for(int i = 0; i < N; i++) {
        soma = soma + alturas[i];
    }

    media = soma / N;

    return 0;
}
