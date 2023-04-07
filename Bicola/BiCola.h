#include<stdio.h>
#include<stdlib.h>
#include"D:\Documentos\IPN\2 Semestre\Elem\Elem.h"
typedef struct NodoBi{
        Elem dato;
        struct NodoBi *izq;
        struct NodoBi *der;
}*ApNodoBi;

typedef struct BiNodo{
     ApNodoBi izq;
     ApNodoBi der;
}*BiCola;

BiCola nuevaBi(){
    BiCola t=(BiCola)malloc(sizeof(struct BiNodo));
    t->izq=t->der=NULL;
    return t;
}


int esnuevaBi(BiCola q){ return ((q->izq==NULL) && (q->der==NULL));}

BiCola formarBiIzq(Elem e, BiCola q){
    ApNodoBi t=(ApNodoBi)malloc(sizeof(struct NodoBi));
    t->dato=e; t->izq=NULL;
    if(esnuevaBi(q))
        q->izq=q->der=t;
    else{
         t->der=q->izq;
         q->izq->izq=t;
         q->izq=t;
   }
   return q;
}

BiCola formarBiDer(BiCola q, Elem e){
    ApNodoBi t=(ApNodoBi)malloc(sizeof(struct NodoBi));
    t->dato=e; t->der=NULL;
    if(esnuevaBi(q))
        q->izq=q->der=t;
    else{
         t->izq=q->der;
         q->der->der=t;
         q->der=t;
   }
   return q;
}


Elem izquierdoBi(BiCola q){return q->izq->dato;}

Elem derechoBi(BiCola q){return q->der->dato;}


BiCola desformarBiIzq(BiCola q){
       ApNodoBi t=q->izq;
       if(q->izq==q->der)
            q->izq=q->der=NULL;
       else{
            q->izq=q->izq->der;
            q->izq->izq=NULL;
       }
       free(t);
       return q;
}

BiCola desformarBiDer(BiCola q){
       ApNodoBi t=q->der;
       if(q->der==q->izq)
            q->der=q->izq=NULL;
       else{
            q->der=q->der->izq;
            q->der->der=NULL;
       }
       free(t);
       return q;
}

void ImpBiIzq(BiCola q){
    ApNodoBi t=q->izq;
    do{
        ImpElem(t->dato);
        t=t->der;
    }while(t->der!=NULL);
}

void ImpBiDer(BiCola q){
    ApNodoBi t=q->der;
    do{
        ImpElem(t->dato);
        t=t->izq;
    }while(t->izq!=NULL);
}


/*
Espec BiCola
    nuevaBi:->BiCola;
    formarBiIzq: Elem, BiCola -> BiCola;
    formarBiDer: BiCola, Elem -> BiCola;
    esnuevaBi: BiCola -> Bool;
    izquierdoBi: BiCola -> Elem;
    derechoBi: BiCola -> Elem;
    desformarBiIzq: BiCola -> BiCola;
    desformarBiDer: BiCola -> BiCola;

    Axiomas: Elem e, Bicola q;
      [b1] esnuevaBi(nuevaBi())= Verdadero;
      [b2] esnuevaBi(formarBiIzq(e,q))= Falso;
      [b3] esnuevaBi(formarBiDer(q,e))= Falso;
      [b4] izquierdoBi(nuevaBi())= ERROR;
      [b5] izquierdoBi(formarBiIzq(e,q))= e; //[e,a,r,b,c,d]
      [b6] izquierdoBi(formarBiDer(q,e))= Si esnuevaBi(q) ret e;
                                          Sino ret izquierdoBi(q);
      [b7] derechoBi(nuevaBi()) = ERROR;
      [b8] derechoBi(formarBiIzq(e,q))=Si esnuevaBi(e) ret e;
                                       Sino ret derechoBi(q);
      [b9] derechoBi(formarBiDer(q,e))= e;
      [b10] desformarBiIzq(nuevaBi())=ERROR;
      [b11] desformarBiIzq(formarBiIzq(e,q))=q;
      [b12] desformarBiIzq(formarBiDer(q,e))=
                         Si esnuevaBi(q) ret q;
                         Sino ret formarBiDer(desformarBiIzq(q),e);
      [b13] desformarBiDer(nuevaBi())= ERROR;
      [b14] desformarBiDer(formarBiIzq(e,q))=
                         Si esnuevaBi(q) ret q;
                         Sino ret formarBiIzq(e,desformarBiDer(q));
      [b15] desformarBiDer(formarBiDer(q,e))= q;
    Fin BiCola.

*/
