#include <stdio.h>

int main(void)
{
    printf("Entez un r�el : ");
    double x = 0.0;
    scanf("%lf", &x);
    if (x>=-1.0 && x<1.0){
        printf("x appartient � I\n");
    } else {
        printf("x n'appartient pas � I\n");
    }
    return 0;
}
