#include<stdio.h>
#include<time.h>

int main(void){
    int num_series[10],i;
    srand(time(NULL));
    for(i=0;i<10;i++)
       *(num_series+i)=rand();
    for(int k=0;k<10;k++){
       printf("\n%d",*(num_series+k));
    }
}