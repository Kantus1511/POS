#include <stdio.h>
#include <math.h>


typedef struct {
  double a;
  double b;
} Complexe;

typedef struct{
  Complexe c1;
  Complexe c2;
} Solutions;

void affiche(const Complexe c);
Complexe addition(const Complexe c1, const Complexe c2);
Complexe soustraction(const Complexe c1, const Complexe c2);
Complexe div(const Complexe c1, const Complexe c2);
Complexe mult(const Complexe c1, const Complexe c2);
Complexe sqrtC(const Complexe c); 
int sgn(double x);
Solution resourdre_second_degre(const Complexe b, const Complex c);

int main(void){
  Complexe c1 = {-1,0};
  Complexe c2 = sqrtC(c1);
  affiche(c2);
  return 0;   
}

void affiche(const Complexe c){
  printf("(%lf,%lf)\n", c.a,c.b);
}

Complexe addition(const Complexe c1, const Complexe c2){
  Complexe r = {c1.a+c2.a, c1.b+c2.b};
  return r;
}

Complexe soustraction(const Complexe c1, const Complexe c2){
  Complexe r = {c1.a-c2.a, c1.b-c2.b};
  return r;
}

Complexe div(const Complexe c1, const Complexe c2){
  double a = (c1.a*c2.a + c1.b*c2.b)/(c2.a*c2.a + c2.b*c2.b);
  double b = (c1.b*c2.a - c1.a*c2.b)/(c2.a*c2.a + c2.b*c2.b);
  Complexe r = {a,b};
  return r;
}

Complexe mult(const Complexe c1, const Complexe c2){
  double a = c1.a*c2.a - c1.b*c2.b;
  double b = c1.a*c2.b + c1.b*c2.a;
  Complexe r = {a,b};
  return r;
}

Complexe sqrtC(const Complexe c){
  double a = sqrt((sqrt(c.a*c.a+c.b*c.b) + c.a)/2);
  double b = sgn(c.b)*sqrt((sqrt(c.a*c.a+c.b*c.b) - c.a)/2);
  printf("%lf",b);
  Complexe r = {a,b};
  return r;
} 

int sgn(double x) {
  if (x<0){
    return -1;
  } else {
    return 1;
  }
}


