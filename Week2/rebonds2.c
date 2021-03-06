#include <stdio.h>
#include <math.h>

const float g = 9.81;

int main(void){

	float h0 = 0.0;
	float eps = 0.0;
	float hF = 0.0;
	int NBR = 0;

	float v = 0.0;
	float h1 = 0.0;
	float v1 = 0.0;

	do{
		printf("Hauteur initiale (>= 0) \n");
		scanf("%f", &h0);
	} while(h0 < 0);

	do{
		printf("  coefficient de rebond (entre 0 et 1) \n");
		scanf("%f", &eps);
	} while(eps <0 || eps > 1);

	do{
		printf("Hauteur de fin (entre h0 et 0) \n");
		scanf("%f", &hF);
	} while(NBR < 0);

	h1 = h0;
	do{
		v = sqrt(2*h1*g);
		v1 = eps*v;
		h1 = v1*v1/(2*g);
		NBR++;
	} while (h1 > hF);

	printf("Nombre de rebond : %d\n", NBR);  
	
	return 0;
}
