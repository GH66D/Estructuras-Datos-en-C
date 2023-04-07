#include"D:\Documentos\IPN\2 Semestre\Lista\Lista.h"


int NumElemsL(Lista l){
    if(esvacia(l))
        return 0;
    else
        return 1+NumElemsL(resto(l));
};


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

int SonIguales(Lista l1,Lista l2){
	if(esvacia(l1)&&esvacia(l2))
		return 1;
	else if (esvacia(l1)||esvacia(l2))
			return 0;
		else if(EsIgual(cabeza(l1),cabeza(l2)))
				return SonIguales(resto(l1),resto(l2));
			else 
				return 0;	
};


int EsPalindroma(Lista l){
	return SonIguales(l,InvierteLista(l));	
};

int EstaEn(Elem e,Lista l){
	if(esvacia(l))
		return 0;
	else if (EsIgual(e,cabeza(l)))
			return 1;
		else
			return EstaEn(e,resto(l));
};

Lista SustituyeElem(Elem a,Elem b,Lista l){
	if(esvacia(l))
		return l;
	else if(EsIgual(b,cabeza(l)))
		return cons(a,SustituyeElem(a,b,resto(l)));
	else
		return cons(cabeza(l),SustituyeElem(a,b,resto(l)));
};

Lista SustituyeElemIter(Elem a,Elem b,Lista l){
	Lista t;
	
	for(t=vacia();!esvacia(l);l=resto(l))
		
		if(EsIgual(b,cabeza(l)))
			t=cons(a,t);
		else 
			t=cons(cabeza(l),t);
			
	return InvierteLista(t);		
};

/*void Burbuja(Elem a[],int n){
	int i,j;
	for(j=0;j<n-1;j--)
	for(i=0;i<n;i++)
	
	}
*/	
	
	



