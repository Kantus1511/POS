#include <stdio.h>
#include <math.h>

int main(void) {
	float x = 0.0;

	
	printf("Entrez un réel :");
	scanf("%f", &x);
	
	if (x != 0){
		float e = x/(1-exp(x));
		printf("Expr 1 : %f\n", e);
	} else {
		printf("Expr 1 inéfinie");
	}

	if (x > 0
	return 0;
}
