#include <stdio.h>
#include <string.h>

int main(void) {
  char nom_fichier[] = "data.dat";
  FILE* entree = fopen(nom_fichier, "r");
  if (NULL == entree) {
    fprintf(stderr, "Erreur : Impossible de lire dans le fichier %s\n", nom_fichier);
  } else {
    #define TAILLE_MAX 10
    char mot[TAILLE_MAX+1];   
    while (fscanf(entree, "%10s", mot) == 1) {
      printf("lu : ->%-10s<-\n", mot);
    }
    fclose(entree) ;
  }
  return 0;
}
