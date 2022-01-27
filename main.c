#include<stdio.h>

int somma(int x, int y);

int main(){
   printf("Programma che calcola la somma di due numeri");
   int x, y;
   printf("\n inserire due valori :");
   scanf("%d, %d",&x, &y);
   int s = somma(x,y);
   printf("la somma vale : %d\n", s);
   return 0; 
}
int somma(int x, int y){
   return x+y;
}

