#include<stdio.h>
#include<string.h>

int main(void){
    char Text[300];
    printf("\nWrite a Text : ");gets(Text);
    printf("\nOriginal Text : %s\nReversed Original Text : ",Text);
    for(int i=strlen(Text)-1;i>=0;i--){
       printf("%c",*(Text+i));
    }

    
}