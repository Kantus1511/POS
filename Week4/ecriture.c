#include <stdio.h>
#include <string.h>

// VOIR CORR


int main(void){
  char nom_fichier[] = "data.dat";
  FILE* sortie = fopen(nom_fichier, "w");
  if (NULL == sortie) {
    fprintf(stderr, "Erreur : Impossible d'écrire dans le fichier %s\n", nom_fichier);
  } else {
    #define MAX_SIZE 30
    char name[MAX_SIZE] = "";
    
    do {
      printf("Entrez un nom (CTRL+D pour terminer) :");
      int j = scanf("%s", &name);
      if (1 != j){
        printf("Je vous demande un nom pas n'importe quoi !\nCet enregistrement est annulé.\n");
        while (!feof(stdin) && !ferror(stdin) && getc(stdin) != '\n');
      } else {
        printf("âge : ");
        int age = 0;
        int k = scanf("%d", &age);
        if (1 != k){
          printf("Je vous demande un age pas n'importe quoi !\nCet enregistrement est annulé.\n");
          while (!feof(stdin) && !ferror(stdin) && getc(stdin) != '\n');
        } else {
          fprintf(sortie, "%-10s %d\n", name, age);
        }
      }
    } while(!feof(stdin) && !ferror(stdin) && name != "EOF");
    fclose(sortie);
  }
  return 0;
}
