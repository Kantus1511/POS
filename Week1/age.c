#include <stdio.h>

int main(void)
{
    int age = 0;
    printf("Quel age avez vous ?");
    scanf("%d", &age);
    int annee = 0;
    annee = 2016 - age;
    printf("Vous etes nez en %d", annee);
    return 0;
}
