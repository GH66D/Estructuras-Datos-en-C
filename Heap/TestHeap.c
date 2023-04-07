#include<stdio.h>
#include<stdlib.h>
#include"C:\Santiago\ClasesEnLinea\Ago2021\2CM2\Elem\Elem.h"
#include"C:\Santiago\ClasesEnLinea\Ago2021\2CM2\Lista\Lista.h"
#include"C:\Santiago\ClasesEnLinea\Ago2021\2CM2\Heap\Heap.h"
ArBin InsertaCompleto(Lista,ArBin);

int main(){

    ArBin a=vacioAB();
    Lista l=vacia();
    Elem e;

    while(e=LeeElem())
        l=cons(e,l);

    a=ConsHeap(InsertaCompleto(l,a));
    puts("\n-----Heap-------------\n");
    ImpNivelPorNivelAB(a);
    puts("\n-----Elementos ordenados-------------\n");
    ImpLista(r2HeapSort(a));
    return 0;
}

Heap InsertaCompleto(Lista l,ArBin a){
    if(esvacia(l))
        return a;
    else
        return InsertaCompleto(resto(l), HazCompleto(cabeza(l),a));
}
