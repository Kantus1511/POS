#include <stdio.h>
#include <math.h>

int main(void) {
	int n = 0;
	int d = 0;

	do {
		printf("Entrez un entier >1 :");
		scanf("%d", &n); 
	} while(n<=1);

	if (n%2 == 0 && n!= 2){ //0== n%2 est mieux
		d = 2;
	}else {
		for (int i=3; i<=sqrt(n); i+=2){
			if (n%i == 0){
				d = i;
			}
		}
	}

	if (d == 0) {
		printf("Je crois fortement que ce nombre est premier\n");
	} else {
		printf("Le nombre n'est pas premier, car il est divisible par %d\n",d);
	}
	return 0;
}
