#include <stdio.h>

int main(void){
	float s0 = 0.0;
	float r = 0.0;
	float ir = 0.0;

	float s = 0.0;
	float sum = 0.0;
	int month = 0;

	do{
		printf("Montant (>= 0) \n");
		scanf("%f", &s0);
	} while(s0<0);

	do{
		printf("Montant/ mois (>0) \n");
		scanf("%f", &r);
	} while(r < 0);

	do{
		printf("Taux d'intéret (entre 0 et 1) \n");
		scanf("%f", &ir);
	} while(ir <= 0 || ir >1);
	
	s = s0;
	while(s > 0) {
		float interet = ir*s;
		s -= r;
		sum += interet;
		month++;
	}

	printf("Somme des interet encaissé : %f (sur %d mois)", sum, month);

	return 0;
}
