#include<stdio.h>
#include<math.h>
#define PERIMETRO(x) (x)*2*M_PI
#define AREA(x) M_PI*pow(x,2);
int main(){
    float r,p,a;
    printf("inserisci il raggio del cerchio\n");
    scanf("%f",&r);
    p=PERIMETRO(r);
    a=AREA (r);
    printf("l'area e' %.2f\nil perimetro e' %.2f",a,p);
}