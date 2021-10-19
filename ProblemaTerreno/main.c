#include <stdio.h>
#include <stdlib.h>

int main()
{
    double largura, comprimento, valorMetroQuad, precoTerreno, areaTerreno;

    printf("Digite a Largura do Terreno :");
    scanf("%lf",&largura);
    printf("Digite o Comprimento do Terreno :");
    scanf("%lf",&comprimento);
    printf("Digite o valor do Metro Quadrado :");
    scanf("%lf",&valorMetroQuad);

    precoTerreno = 0;
    areaTerreno = 0;

    areaTerreno = largura * comprimento;
    precoTerreno = valorMetroQuad * areaTerreno;

    printf("Area do terreno = %.2lf \n", areaTerreno);
    printf("Preco do terreno = %.2lf \n", precoTerreno);

}
