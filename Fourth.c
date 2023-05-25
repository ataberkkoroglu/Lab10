#include<stdio.h>

void Process(char *Alphabet);

int main(void){
    char Alphabet[50];
    Process(Alphabet);
    for(int i=0;i<50;i++){
        printf("\n%c",*(Alphabet+i));
    }
}

void Process(char *Alphabet){
    for(int i=65;i<91;i++)
       Alphabet[i-65]=i;
    for(int j=97;j<123;j++)
      Alphabet[j-71]=j;
}