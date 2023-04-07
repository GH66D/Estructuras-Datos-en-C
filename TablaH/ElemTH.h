#include<stdio.h>

typedef char* ElemT;

int Llave(ElemT e){
      int i=0,n=0;
      while(e[i])
         n=n+e[i++];
      return n;
}


ElemT LeeElemT(){ElemT e; scanf("%s",e); return e;}
void ImpElemT(ElemT e){printf("%s ",e);}
/*
int EsMenor(Elem e1, Elem e2){return e1<e2;}
int EsMayor(Elem e1, Elem e2){return e1>e2;}
int EsIgual(Elem e1,Elem e2){return e1==e2;}
int EsMoI(Elem e1,Elem e2){return e1>=e2;}

void Intercambia(Elem *a, Elem *b){
     Elem t;
     t=*a; *a=*b; *b=t;
};
*/
