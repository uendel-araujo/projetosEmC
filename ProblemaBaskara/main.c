#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, delta, x1, x2;


    printf("Coeficiente A :");
    scanf("%lf", a);
    printf("Coeficiente B :");
    scanf("%lf", b);
    printf("Coeficiente C :");
    scanf("%lf", c);

    delta = pow(b, 2.0) - 4 * a * c;

    if (a == 0 || delta < 0) {
        printf("Essa equação não possui raizes reais \n");
    }
    else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
    }

    return 0;
}
