#include <stdio.h>
#include <math.h>

int main(void) {
    float x = 0.0;
    double result = 0.0;
	
	printf("Entrez un réel :");
	scanf("%f", &x);
	
	//Expr1
	printf("Expr 1 : ");
	if (x != 0){
		result = x/(1-exp(x));
		printf("%f\n", result);
	} else {
		printf("indéfinie\n");
	}
    
    //Expr2
    printf("Expr 2 : ");
	if (x > 0 && x!=1) {
	    result = x*log(x)*exp(2/(x-1));
	    printf("%f\n", result);
	} else {
	    printf("indéfinie\n");
	}
	
	//Expr3
	printf("Expr 3 : ");
	if (x>=8 || x<=0.0) {
	    result = (-x - sqrt(x*x-8*x))/(2-x);
	    printf("%f\n", result);
	} else{
	    printf("indéfinie\n");
	}
	
	//Expr4
	printf("Expr 4 : ");
	if (x>1 || x<0){
	    result = (sin(x) - x/20.0)*(log(sqrt(x*x - 1.0/x)));
	    if (result > 0){
	        printf("%f\n", result);
	    } else {
	        printf("indéfinie\n");
	    }
	} else {
	    printf("indéfinie\n");
	}
	
	return 0;
}
