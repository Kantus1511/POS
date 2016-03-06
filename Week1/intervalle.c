#include <stdio.h>

int main(void)
{
    printf("Entez un réel : ");
    double x = 0.0;
    scanf("%lf", &x);
    if (x>=-1.0 && x<1.0){
        printf("x appartient à I\n");
    } else {
        printf("x n'appartient pas à I\n");
    }
    return 0;
}
