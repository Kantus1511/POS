#include <stdio.h>

int main(void)
{
    printf("Entez un réel : ");
    double x;
    scanf("%lf", &x);
    if (x>=-1 && x<1){
        printf("x appartient à I");
    } else {
        printf("x n'appartient pas à I");
    }
    return 0;
}
