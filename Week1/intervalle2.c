#include <stdio.h>

int main(void)
{
    printf("Entez un r�el : ");
    double x;
    scanf("%lf", &x);
    if ((!(x < 2) && x <3) || ((!(x<0) && !(x==0)) && (x<1 || x ==1))  || (!(x<-10) && (x<-2 || x ==-2))){
        printf("x appartient � I");
    } else {
        printf("x n'appartient pas � I");
    }
    return 0;
}
