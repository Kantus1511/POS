#include <stdio.h>

void demander_choix(double v1, double v2, double v3);

double* choix;

int main(void){
	double valeur1 = 2.1;
	double valeur2 = 3.141592653;
	double valeur3 = 18.94;
	
	demander_choix(valeur1, valeur2, valeur3);
	
	printf("Vous avez choisi %lf\n", *choix);
  return 0;
}

void demander_choix(double v1, double v2, double v3) {
	int rep = 0;
	do {
		printf("Entrez un chiffre entre 1 et 3 :");
		scanf("%d", &rep);
	} while (rep < 1 || rep>3);
	switch(rep) {
		case 1: choix = &v1; break;
		case 2: choix = &v2; break;
		case 3: choix = &v3; break;
	}
	return;
}
