#include<stdio.h>

void Sort(int *series,int N){
    int i,j,temp;
    for (int i=0;i<N;i++)
       for(int j=0;j< N-1;j++){
             if (series[j]>series[j+1]){
                temp=*(series+j);
                series[j]=*(series+j+1);
                series[j+1]=temp;
             }
       }
}
int main(){
    int series[10];
    for(int i=0;i<10;i++){
        printf("\nWrite %d. Number : ",i+1);scanf("%d",&series[i]);
    }
    Sort(series,sizeof(series)/4);
    printf("\n");
    for(int j=0;j<10;j++){
       printf("%d ",*(series+j));
    }

}