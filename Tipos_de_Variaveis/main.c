#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int idade;
    double salario , altura;
    char genero;
    char nome[50];

    idade = 28;
    salario = 5800.5;
    altura = 1.79;
    genero = 'M';
    strcpy (nome, "Uendel Ives de Araujo");

    printf(" IDADE = %d\n", idade);
    printf(" SALARIO = %.2lf\n", salario);
    printf(" ALTURA = %.2lf\n", altura);
    printf(" GENERO = %c\n", genero);
    printf(" NOME = %s\n", nome);

    return 0;
}
