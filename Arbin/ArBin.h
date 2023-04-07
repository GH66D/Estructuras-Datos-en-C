#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"D:\Documentos\IPN\2 Semestre\Elem\Elem.h"


typedef struct NodoAB{
           Elem r;
           struct NodoAB *i;
           struct NodoAB *d;
}*ArBin;

ArBin vacioAB(){return NULL;}
ArBin consAB(Elem r, ArBin i, ArBin d){
     ArBin t=(ArBin)malloc(sizeof(struct NodoAB));
     t->r=r;
     t->i=i;
     t->d=d;

     return t;
}

int esvacioAB(ArBin a){return a==NULL;}
Elem raiz(ArBin a){return a->r;}
ArBin izqAB(ArBin a){return a->i;}
ArBin derAB(ArBin a){return a->d;}


int EsHoja(ArBin a){return esvacioAB(izqAB(a))&&esvacioAB(derAB(a));}
int EsInterno(ArBin a){return !esvacioAB(izqAB(a))||!esvacioAB(derAB(a));}
int mayor(int n1, int n2){
      if(n1>n2)
         return n1;
      else
         return n2;
}
int altura(ArBin a){
       if(esvacioAB(a))
            return 0;
       else
            return 1+mayor(altura(izqAB(a)),altura(derAB(a)));
}
int NumElemsAB(ArBin a){
      if(esvacioAB(a))
          return 0;
      else
          return 1+NumElemsAB(izqAB(a))
                    +NumElemsAB(derAB(a));
  }

void PreOrd(ArBin a){
     if(!esvacioAB(a)){
        ImpElem(raiz(a));
        PreOrd(izqAB(a));
        PreOrd(derAB(a));
     }
}

void InOrd(ArBin a){
     if(!esvacioAB(a)){
        InOrd(izqAB(a));
        ImpElem(raiz(a));
        InOrd(derAB(a));
     }
}

void PostOrd(ArBin a){
     if(!esvacioAB(a)){
        PostOrd(izqAB(a));
        PostOrd(derAB(a));
        ImpElem(raiz(a));
     }
}

void ImpNivelAB(ArBin a, int nivel){
    if (esvacioAB(a))
        return;
    if (nivel == 1)
        ImpElem(raiz(a));
    else if (nivel > 1){
        ImpNivelAB(izqAB(a), nivel-1);
        ImpNivelAB(derAB(a), nivel-1);
    }
}
void ImpNivelPorNivelAB(ArBin a){
    int h = altura(a),i;
    for (i=1; i<=h; i++){
        ImpNivelAB(a, i);
        printf("\n");
    }
}

int EsLleno(ArBin a){
    if(esvacioAB(a))
        return 1;
    else if((altura(izqAB(a))==altura(derAB(a)))&&
             (EsLleno(izqAB(a)))&&(EsLleno(derAB(a))))
            return 1;
         else
            return 0;
}

int EsCompleto(ArBin a){
   if(esvacioAB(a))
       return 1;
   else if (((altura(izqAB(a))-altura(derAB(a)))<=1)&&
             (EsCompleto(izqAB(a)))&&(EsCompleto(derAB(a))))
              return 1;
        else
              return 0;
}

ArBin HazCompleto(Elem e, ArBin a){
     if(esvacioAB(a))
         return consAB(e,vacioAB(),vacioAB());
     else if(((altura(izqAB(a))==(altura(derAB(a))+1))&&(EsLleno(izqAB(a))))||
               ((altura(izqAB(a))==altura(derAB(a)))&&(!EsLleno(derAB(a)))))
              return consAB(raiz(a),izqAB(a),HazCompleto(e,derAB(a)));
          else
             return consAB(raiz(a),HazCompleto(e,izqAB(a)),derAB(a));
}
/* El árbol debe de ser completo */
Elem EncuentraUltimo(ArBin a){
    if(EsHoja(a))
        return raiz(a);
    else if(altura(izqAB(a))==(altura(derAB(a))+1))
              return EncuentraUltimo(izqAB(a));
         else
              return EncuentraUltimo(derAB(a));
}

/* El árbol debe de ser completo */
ArBin EliminaUltimo(ArBin a){
     if(EsHoja(a))
        return vacioAB();
    else if(altura(izqAB(a))==(altura(derAB(a))+1))
              return consAB(raiz(a),EliminaUltimo(izqAB(a)),derAB(a));
         else
              return consAB(raiz(a),izqAB(a),EliminaUltimo(derAB(a)));
}
/*
Espec ArBin
   vacioAB:->ArBin;
   consAB:Elem,ArBin,ArBin->ArBin;
   esvacioAB:ArBin->Bool;
   raiz:ArBin->Elem;
   izqAB:ArBin->ArBin;
   derAB:ArBin->ArBin;
  Axiomas: Elem r, ArBin i,d;
   [ab1]esvacioAB(vacioAB())=Cierto;
   [ab2]esvacioAB(consAB(r,i,d))=Falso;
   [ab3]raiz(vacioAB())=ERROR;
   [ab4]raiz(consAB(r,i,d))=r;
   [ab5]izqAB(vacioAB())=ERROR;
   [ab6]izqAB(consAB(r,i,d))=i;
   [ab7]derAB(vacioAB())=ERROR;
   [ab8]derAB(consAB(r,i,d))=d;
  Fin ArBin.
*/






