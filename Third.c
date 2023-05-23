#include<stdio.h>
#include<string.h>
#include<time.h>
#include<Windows.h>

int main(void){
    time_t Time;
    Time=time(NULL);
    struct tm *Tm=localtime(&Time);
    printf("\e[1mWelcome To Program...\n%.2d : %.2d : %.2d  %.2d / %.2d / %.2d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
    char Text[32],ch;
    int counter;

    while(1){

    counter=0;
    printf("\n\e[1;36mWrite a Text :\e[0m ");scanf("%s",Text);

    for(int i=0;i<strlen(Text);i++){
        
        if (*(Text+i)=='a' || *(Text+i)=='A' || *(Text+i)=='e' || *(Text+i)=='E' || *(Text+i)=='I' || *(Text+i)=='i' || *(Text+i)=='U' || *(Text+i)=='u' || *(Text+i)=='O' || *(Text+i)=='o'){
            if (counter!=0){
                Text[i]="?";
            }
            else{
                counter++;
            }
        }
    
    }

    char Out[strlen(Text)];
    strcpy(Out,Text);
    printf("\n\e[1;32mResult Of Process : ");

    for(int i=0;i<strlen(Out);i++){
        if((Out[i]>64 && Out[i]<91) || (Out[i]>96 && Out[i]<123))
            printf("%c",*(Out+i));
    }

    while(1){
        printf("\n\e[1;36mWould You Like To Contunie (Y/N) ? :\e[0m ");scanf(" %c",&ch);
        if(ch=='Y' || ch=='y'){
            Sleep(2000);break;
        }
        else if (ch=='N' || ch=='n'){
            Time=time(NULL);
            Tm=localtime(&Time);
            printf("\n\e[1;32mHave a Good Days...\n%.2d : %.2d : %.2d  %.2d / %.2d / %.2d\n\e[0m",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
            return 0;
        }
        else{
            printf("\n\e[1;4;31mWrong Character...\nPlease Write Again...\n\a\e[0m");
        }
    }
}
}