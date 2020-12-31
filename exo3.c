#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double* adresseMinTab(double tab[], int nb) {
    double* p ;
    double* min=tab ;
    for(p=tab+1 ; p<tab+nb ; p++) {
        if (*p<*min) min=p ;
    }
    return min ;

}

 int indiceMinTab(double tab[], int nb) {
     int i ;
     for ( i = 0; i < nb; i++)
         if (tab[i]== *adresseMinTab(tab,nb)) 
     return i ;  

 }

 double valMinTab(double tab[], int nb) {
     return tab[indiceMinTab(tab,nb)] ;
 }

 void renverseTab(double tab[], int nb)  {
     double *p1 ,*p2 ;
     double tmp ;
     for(p1=tab,p2=tab+nb-1;p1<p2 ;p1++,p2--) {
         tmp=*p1 ;
         *p2=*p1 ;
         *p2=tmp ;
     }
 }
#define N 10 
 int main() {
     int i ;
     double *amin ;
     double t1[N] ;
     for (i=0 ; i<N ; i++) {  t1[i]=randf() ; }
     for (i=0 ; i<N ; i++) { printf("%lf" , t1[i]) ; }
     renverseTab(t1,N) ;
     for (i=0 ; i<N ; i++) { printf("%lf" , t1[i]) ; }
     amin = adresseMinTab(t1,NBVAL);
     printf("L'indice du min est %d et sa valeur est %lf\n",amin-t1,*amin) ;
     *amin=0;
     for (i=0; i<NBVAL; i++) printf("%.2lf ",t1[i]); puts("");
}
     
