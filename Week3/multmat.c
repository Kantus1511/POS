#include <stdio.h>

//Const + type
#define N 10

typedef struct {
    int tab[N][N];
    unsigned int col;
    unsigned int line;
} Matrice;

//Prototype
Matrice lire_matrice(void);
Matrice multiplication(const Matrice a, const Matrice b);
void affiche_matrice(const Matrice m);

int main(void){
    Matrice m1 = lire_matrice();
    Matrice m2 = lire_matrice();
    
    if (m1.col != m2.line){
        printf("Multiplication de matrices impossible !\n");
        return 0;
    }
    
    Matrice result = multiplication(m1, m2); 
    
    affiche_matrice(result);
    
    return 0;
}



//Some functions
Matrice lire_matrice(void){
    printf("Saisie d'une matrice : \n");
    Matrice m;
    printf("nombre de lignes :");
    scanf("%u", &m.line);
    printf("nombre de colonnes :");
    scanf("%u", &m.col);
    
    for (int l=0; l<m.line; ++l){
        for (int c=0; c<m.col; ++c) {
            printf("m[%d][%d]=", l+1,c+1);
            scanf("%d", &m.tab[l][c]);
        }
    }
    
    return m;
}

Matrice multiplication(const Matrice a, const Matrice b) {
    Matrice result;
    
    for (int i=0; i<a.line; ++i){
        for (int j=0; j<b.col; ++j){
            result.tab[i][j] = 0;
            for (int k=0; k<a.col;++k){
                result.tab[i][j] += a.tab[i][k]*b.tab[k][j]; 
            }
        }
    }
    result.line = a.line;
    result.col = b.col;
    return result;
}

void affiche_matrice(const Matrice m){
    printf("Résultat : \n");
    for(int l=0; l<m.line;++l){
        for (int c=0; c<m.col; ++c){
            printf("%d ", m.tab[l][c]);
        }
        printf("\n");
    }
}
