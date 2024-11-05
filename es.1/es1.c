#include<stdio.h>
#define COST 1936.26
#define erli(x) COST * (x)
#define lier(x) (x) / COST
int main(){
    float e,ris;
    printf("inserisci un valore in euro\n");
    scanf("%f",&e);
    ris=erli(e);
    printf("il valore in lire e' %.2f\n",ris);
    printf("inserisci un valore in lire\n");
    scanf("%f",&e);
    ris=lier(e);
    printf("il valore in euro e' %.2f\n",ris);
}