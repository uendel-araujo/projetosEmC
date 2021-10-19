#include <stdio.h>
#include <math.h>

int main()
{
    double base, altura, area, perimetro, diagonal;

    printf("Digite o valor da base do Retangulo :");
    scanf("%lf", &base);

    printf("Digite o valor da altura do Retangulo :");
    scanf("%lf", &altura);

    area = 0;
    perimetro = 0;
    diagonal = 0;

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));

    printf("AREA = %.4lf\n", area);
    printf("PERIMETRO = %.4lf\n", perimetro);
    printf("DIAGONAL = %.4lf\n", diagonal);

    return 0;
}
