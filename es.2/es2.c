#include<stdio.h>
#define ABSOLUTE(num) num<0 ? (num)*-1 : (num)
int main(){
    int a;
    printf("inserisci un numero che faccio il valore assoluto\n");
    scanf("%d",&a);
    int ris=ABSOLUTE(a);
    printf("il valore assoluto di %d e' %d",a,ris);
}