#include <stdio.h>

double scalaire(const double u[], const double v[], size_t taille);

int main(void) {
    size_t const N_MAX = 10;
    double v1[N_MAX];
    double v2[N_MAX];
    
    double n = 0.0;
    do {
        printf("Taille des vecteurs : ");
        scanf("%lf", &n);
    } while (n<=0 || n>N_MAX);
    
    for(int i=0; i<n; ++i){
        printf("Composant %d de v1 : ", i+1);
        scanf("%lf", &v1[i]);
    }
    
    for(int i =0; i<n; ++i){
        printf("Composant %d de v2 : ", i+1);
        scanf("%lf", &v2[i]);
    }
    
    double result = scalaire(v1, v2, n);
    
    printf("Le produit scalair est : %lf", result);
    return 0;
}

double scalaire(const double u[], const double v[], size_t taille){
    double result = 0.0;
    for (size_t i=0; i<taille; ++i){
        result += u[i]*v[i];
    }
    return result;
}
