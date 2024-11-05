#include<stdio.h>
#define CUBE(x) (x)*(x)*(x)
int main(){
    int a,ris;
    printf("inserisci un numero che vuoi fare al cubo\n");
    scanf("%d",&a);
    ris=CUBE(a);
    printf("in cubo di %d e' %d\n",a,ris);
}