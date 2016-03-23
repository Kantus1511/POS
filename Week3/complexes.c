#include <stdio.h>


typedef struct {
  double a;
  double b;
} Complexe;

void affiche(const Complexe c);
Complexe addition(const Complexe c1, const Complexe c2);
Complexe soustraction(const Complexe c1, const Complexe c2);
Complexe div(const Complexe c1, const Complexe c2);
Complexe mult(const Complexe c1, const Complexe c2);

int main(void){
  Complexe c1 = {1,0};
  Complexe c2 = {0,1};
  Complexe c3 = addition(c1,c2);
  affiche(c3);
  affiche(mult(c2,c2));
  Complexe c4 = mult(c3,c3);
  affiche(c4);
  affiche(div(c4,c2));
  Complexe c5 = {2,-3};
  affiche(div(c5,c3));
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
