#include<stdio.h>

int main(void){
    int *fac,num;
    *fac=1;

    printf("\nWrite a Number : ");scanf("%d",&num);

    for(int i=2;i<=num;i++){
        *fac *=i;
    }
    
    printf("\n%d! = %d",num,*fac);
}