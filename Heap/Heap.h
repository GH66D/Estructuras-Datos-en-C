#include<stdio.h>
#include"D:\Documentos\IPN\2 Semestre\Arbin\ArBin.h"
#include"D:\Documentos\IPN\2 Semestre\Lista\Lista.h"
typedef ArBin Heap;

Heap HazHeap(Elem e, Heap i, Heap d){
     if((esvacioAB(i))&&(esvacioAB(d)))
         return consAB(e,i,d);
     else if(esvacioAB(d))
             if(EsMoI(e,raiz(i)))
                  return consAB(e,i,d);
             else
                  return consAB(raiz(i),consAB(e,vacioAB(),vacioAB()),d);
          else if((EsMoI(e,raiz(i)))&&(EsMoI(e,raiz(d))))
                    return consAB(e,i,d);
               else if(EsMoI(raiz(i),raiz(d)))
                        return consAB(raiz(i), HazHeap(e,izqAB(i),derAB(i)),d);
                    else
                        return consAB(raiz(d),i,HazHeap(e,izqAB(d),derAB(d)));
}
/* a debe ser completo */
Heap ConsHeap(ArBin a){
       if(esvacioAB(a))
            return a;
       else
            return HazHeap(raiz(a),ConsHeap(izqAB(a)),ConsHeap(derAB(a)));
}

Lista HeapSort(Heap t){
     Lista l=vacia();
     Elem e;
     while(!esvacioAB(t)){
        if(EsHoja(t))
            return l=cons(raiz(t),l);
        else{
            l=cons(raiz(t),l);
            e=EncuentraUltimo(t);
            t=EliminaUltimo(t);
            t=HazHeap(e,izqAB(t),derAB(t));
        }
     }
}

Lista rHeapSort(ArBin t){
     if(esvacioAB(t))
          return vacia();
     else if(EsHoja(t))
             return cons(raiz(t),vacia());
          else
             return (cons(raiz(t),rHeapSort(HazHeap(EncuentraUltimo(t),
                                           izqAB(EliminaUltimo(t)),
                                           derAB(EliminaUltimo(t))))));
     }
Lista r2HeapSort(ArBin t){
     if(esvacioAB(t))
          return vacia();
     else if(EsHoja(t))
             return cons(raiz(t),vacia());
          else
             return PegaListas(r2HeapSort(HazHeap(EncuentraUltimo(t),
                                           izqAB(EliminaUltimo(t)),
                                           derAB(EliminaUltimo(t)))),
                        cons(raiz(t),vacia()));
     }
