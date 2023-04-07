#include<stdio.h>
#include<string.h>
typedef struct{
        char pais[80];
        char capital[80];
        char gentilicio[80];
        char idiom[80];
        char moneda[80];
        char poblacion[80];
} ElemT;

int Llave(ElemT eT){
      int i=0,n=0;
      while(eT.pais[i])
         n=n+eT.pais[i++];
      return n;
}


ElemT FLeeElemT(FILE *in){
      ElemT eT;
      fscanf(in,"%s%s%s%s%s%s\n",
             eT.pais,eT.capital,eT.gentilicio,eT.idiom,eT.moneda,eT.poblacion);
      return eT;
}

ElemT LeeElemT(){ElemT eT; scanf("%s",eT); return eT;}
void ImpElemT(ElemT eT){printf("%s\t%s\t%s\t%s\t%s\t%s\n",
             eT.pais,eT.capital,eT.gentilicio,eT.idiom,eT.moneda,eT.poblacion);}
             
int EsIgualT(ElemT eT1,ElemT eT2){return strcmp(eT1.pais,eT2.pais)==0;}
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
