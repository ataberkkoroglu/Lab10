#include<stdio.h>

void division(int diviend,int divisor,int *quotient,int *remainder);

int main(void){
  int quotient,diviend,divisor,remainder;
  printf("\n\e[1;36mWrite a diviend :\e[0m ");scanf("%d",&diviend);
  printf("\n\e[1;35mWrite a Divisor:\e[0m ");scanf("%d",&divisor);
  division(diviend,divisor,&quotient,&remainder);
  printf("\nDiviend: %d\nDivisor: %d\nQuotient: %d\nRemainder: %d",diviend,divisor,quotient,remainder);
  
}

void division(int diviend,int divisor,int *quotient,int *remainder){
      *remainder=diviend %divisor;
      *quotient=diviend;

}