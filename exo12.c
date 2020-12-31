#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double calculPi(double epsilon)  {
     double x0,x1=0, y0,y1=1;
    do { x0=x1; y0=y1;
         x1=(x0+y0)/2;
         y1=sqrt(x1*y0);
    } while (fabs(x0-x1)>(fabs(x0)+fabs(x1))*epsilon);
    return x1;
}


void reste(int a ,int b, int* q) {
     *q = a%b ;
}

int quot(int a ,int b) {
     return a/b ;
}

void calc(int a, int b, int* q ,int* r) {
     reste(a,b,r) ;
     *q= quot(a,b) ;   
}

int main()  {
     int a,b, q, r;
     printf("entrer deux entiers\n") ;
     scanf("%d %d" ,&a,&b) ;
     calc(a,b,&q,&r) ;
     printf("le quotient est %d et le reste est %d" , q,r) ;
     return 0 ;
}
    