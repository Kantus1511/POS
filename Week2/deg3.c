#include <stdio.h>
#include <math.h>

int main(void){
    
    printf("Entrez 3 réels : ");
    double a0=0.0, a1=0.0, a2=0.0;
    scanf("%lf %lf %lf", &a0, &a1, &a2);
    
    double q = (3*a1 - a2*a2)/9;
    double r = (9*a2*a1 - 27*a0 - 2*a2*a2*a2);
    double d = q*q*q + r*r;
    
    double z1= 0.0, z2 = 0.0, z3 = 0.0;
    if (d<0) {
        double teta = acos(r/sqrt(-q*q*q));
        z1 = 2*sqrt(-q) * cos(teta/3) - a2/3.0;
        z2 = 2*sqrt(-q) * cos((teta + 2*M_PI)/3.0) - a2/3.0;
        z3 = 2*sqrt(-q) * cos((teta + 4*M_PI)/3.0) - a2/3.0;
        printf(" 3 sols : %f, %f, %f", z1, z2, z3);
    } else {
        double s = r+sqrt(d);
        if (0.0 == s){
            s = 0.0;
        } else if (s < 0.0){
            s = -pow(-s, 1.0/3.0);
        } else {
            s = pow(s, 1.1/3.0);
        }
        double t = r- sqrt(d);
        if (0.0 == t){
            t = 0.0;
        } else if (t < 0.0){
            t = -pow(-t, 1.0/3.0);
        } else {
            t = pow(t, 1.1/3.0);
        }
        
        z1 = -a2/3.0 + s+t;        
        if (0.0 == d && 0.0 != s+t) {
            z2 = -a2/3.0 - (s+t)/2.0;
            printf("2 sols : %f, %f", z1, z2);
        } else {
            printf("1 sol : %f", z1);
        }

    }
    
    return 0;
}
