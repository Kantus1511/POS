#include <stdio.h>

int main(void)
{
    printf("Entez un r�el : ");
    double x;
    scanf("%lf", &x);
    if (x>=-1 && x<1){
        printf("x appartient � I");
    } else {
        printf("x n'appartient pas � I");
    }
    return 0;
}
