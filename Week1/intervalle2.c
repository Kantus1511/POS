#include <stdio.h>

int main(void)
{
    printf("Entez un r�el : ");
    double x = 0.0;
    scanf("%lf", &x);
    if ((!(x < 2) && x <3) || ((!(x<0) && !(x==0)) && (x<1 || x ==1))  || (!(x<-10) && (x<-2 || x ==-2))){
        printf("x appartient � I\n");
    } else {
        printf("x n'appartient pas � I\n");
    }
    return 0;
}
