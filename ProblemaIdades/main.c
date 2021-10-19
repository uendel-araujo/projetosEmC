#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade1 , idade2;
    char nome1[40], nome2[40];
    double idadeMedia = 0;

    printf("Dados da primeira pessoa: \n");
    printf("Nome :");
    gets(nome1);
    printf("Idade :");
    scanf("%d", &idade1);

    printf("Dados da segunda pessoa: \n");
    printf("Nome :");
    fseek(stdin, 0, SEEK_END);
    gets(nome2);
    printf("Idade :");
    scanf("%d", &idade2);

    idadeMedia = (double) (idade1 + idade2) / 2;

    printf("A idade media de %s e %s eh de %.1lf anos", nome1, nome2, idadeMedia);


    return 0;
}
