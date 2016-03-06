#include <stdio.h>
#include <math.h>

const float g = 9.81;

int main(void){

	float h0 = 0.0;
	float eps = 0.0;
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
		printf("nombre de rebonds (>= 0) \n");
		scanf("%d", &NBR);
	} while(NBR < 0);

	h1 = h0;
	for (int i=0; i<NBR; ++i){
		v = sqrt(2*h1*g);
		v1 = eps*v;
		h1 = v1*v1/(2*g);
	}

	printf("Au %dème rebond, la hauteur sera de %f m", NBR, h1);  
	
	return 0;
}
