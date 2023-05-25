#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<time.h>
#include<Windows.h>

double roots(double a, double b, double c, double*x1r, double*x1i, 
double*x2r, double*x2i);

int main(void){
    double a, b, c, x1r, x1i, x2r, x2i,delta;
    char ch;
    time_t Time;
    Time=time(NULL);
    struct tm *Tm=localtime(&Time);
    printf("\n\e[1mWelcome To Program...\n%.2d : %.2d : %.2d  %.2d / %.2d / %.2d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year);
    while(1){
      x1r=0;x1i=0;x2r=0;x2i=0;
      printf("\n\e[1;34mEnter coefficients of quadratic equation:\e[0m ");scanf("%lf %lf %lf",&a,&b,&c);
      delta=roots(a,b,c,&x1r,&x1i,&x2r,&x2i);
      if (delta<0.0)
        printf("X1I: %.2f\nX2I: %.2f",x1r,x1i,x2r,x2i);
      else if (delta==0.0)
        printf("X1R: %.2f\n",x1r);
      else{
        printf("X1R: %.2f\nX2R: %.2f\n",x1r,x2r);
      }

      while(1){
        printf("\n\e[1;36mWould You Like To Contunie (Y/N) ? : ");scanf(" %c",&ch);
        if(ch=='Y' || ch=='y'){
            Sleep(2000);break;
        }
        else if (ch=='N' || ch=='n'){
            Time=time(NULL);
            Tm=localtime(&Time);
            printf("\n\e[1;32mHave a Good Days..\n%.2d : %.2d : %.2d  %.2d / %.2d / %.2d\n\e[0m",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year);
            return 0;
        }
        else{
            printf("\n\e[1;4;31mWrong Character...\nPlease Write Again...\n\a\e[0m");
        }
      }
    }
    
}

double roots(double a, double b, double c, double*x1r, double*x1i, double*x2r, double*x2i){
     double delta=(b*b)-(4*a*c);
     if (delta<0.0){
         *x1i=cimag(delta*I);
         *x2i=cimag(-delta*I);
        
     }
     else if (delta==0.0){
        *x1r=(-b+sqrt(delta))/(2*a);

     }
     else{
       *x1r=(-b+sqrt(delta))/(2*a);
       *x2r=(-b-sqrt(delta))/(2*a);
     }
     return delta;
}