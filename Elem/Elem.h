#include<stdio.h>

typedef char  Elem;

Elem LeeElem(){Elem e; scanf("%c",&e); return e;}
void ImpElem(Elem e){printf("%c",e);}
char EsMenor(Elem e1, Elem e2){return e1<e2;}
char EsMayor(Elem e1, Elem e2){return e1>e2;}
char EsIgual(Elem e1,Elem e2){return e1==e2;}
char EsMoI(Elem e1,Elem e2){return e1>=e2;}

void Intercambia(Elem *a, Elem *b){
     Elem t;
     t=*a; *a=*b; *b=t;
};
