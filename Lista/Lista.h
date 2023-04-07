#include"D:\Documentos\IPN\2 Semestre\Elem\Elem1.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct NodoLista{
                 Elem dato;
                 struct NodoLista *sig;
               }*Lista;

Lista vacia(){ return NULL; }  // vacia: -> Lista;
Lista cons(Elem e, Lista l){
       Lista t=(Lista)malloc(sizeof(struct NodoLista));
       t->dato=e;
       t->sig=l;
       return t;
}
Elem esvacia(Lista l){return l==vacia();} // esvacia: Lista -> Bool;
Elem cabeza(Lista l){return l->dato;}   // cabeza: Lista -> Elem;
Lista resto(Lista l){return l->sig;}

void ImpLista(Lista l){
   if(!esvacia(l)){
       ImpElem(cabeza(l));
       ImpLista(resto(l));
   }
}

/* EstaEn(e,l)== Cierto*/
Elem ConsultaLista(Elem e, Lista l){
    if(EsIgual(e,cabeza(l)))
        return cabeza(l);
    else
        return ConsultaLista(e,resto(l));
}
/* EstaEn(e,l)== Cierto*/
Lista BorraElem(Elem e,Lista l){
    if(EsIgual(e,cabeza(l)))
        return resto(l);
    else
        return cons(cabeza(l),BorraElem(e,resto(l)));
}

int NumElem(Lista l) {
  int count = 0;
  while (l) {
    count++;
    l = resto(l);
  }
  return count;
}

int NumElemsL(Lista l){
    if(esvacia(l))
        return 0;
    else
        return 1+NumElemsL(resto(l));
};

Lista PegaListas(Lista l1, Lista l2){
    if(esvacia(l1))
        return l2;
    else
        return cons(cabeza(l1),PegaListas(resto(l1),l2));
}

Lista InvierteLista(Lista l){
    if(esvacia(l))
        return l;
    else
        return PegaListas(InvierteLista(resto(l)),cons(cabeza(l),vacia()));
}

Lista InsOrd(Elem e, Lista l){
    if(esvacia(l))
        return cons(e,l);
    else if(EsMenor(e,cabeza(l)))
              cons(e,l);
         else
              return cons(cabeza(l),InsOrd(e,resto(l)));
};

Lista OrdenaListaAsc(Lista l){
     if(esvacia(l))
        return l;
     else
        return InsOrd(cabeza(l),OrdenaListaAsc(resto(l)));
};

Lista OrdenaListaDesc(Lista l){
       return InvierteLista(OrdenaListaAsc(l));
};

int SonIguales(Lista l1, Lista l2){
    if(esvacia(l1)&&esvacia(l2))
          return 1;
    else if(esvacia(l1)||esvacia(l2))
               return 0;
         else if(EsIgual(cabeza(l1),cabeza(l2)))
                  return SonIguales(resto(l1),resto(l2));
              else
                  return 0;
};

int EsPalindroma(Lista l){return SonIguales(l,InvierteLista(l));}

int EstaEn(Elem e, Lista l){
        if(esvacia(l))
             return 0;
        else if(EsIgual(e,cabeza(l)))
                  return 1;
             else
                  return EstaEn(e,resto(l));
}

Lista SustituyeElem(Elem e1, Elem e2, Lista l){
       if(esvacia(l))
            return l;
       else if(EsIgual(e2,cabeza(l)))
                return cons(e1,SustituyeElem(e1,e2,resto(l)));
            else
                return cons(cabeza(l),SustituyeElem(e1,e2,resto(l)));
}

Lista SustituyeElemIter(Elem e1, Elem e2, Lista l){
       Lista t;

       for(t=vacia() ;!esvacia(l); l=resto(l))
           if(EsIgual(e2,cabeza(l)))
               t=cons(e1,t);
           else
               t=cons(cabeza(l),t);

       return InvierteLista(t);
}
