#include<stdio.h>

typedef int Elem1;

Elem1 LeeElem1(){Elem1 e; scanf("%d",&e); return e;}
void ImpElem1(Elem1 e){printf("%d",e);}
int EsMenor1(Elem1 e1, Elem1 e2){return e1<e2;}
int EsMayor1(Elem1 e1, Elem1 e2){return e1>e2;}
int EsIgual1(Elem1 e1,Elem1 e2){return e1==e2;}
int EsMoI1(Elem1 e1,Elem1 e2){return e1>=e2;}

void Intercambia1(Elem1 *a, Elem1 *b){
     Elem1 t;
     t=*a; *a=*b; *b=t;
};
