#include <stdio.h>
#include <stdlib.h>

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


    return 0;
}
