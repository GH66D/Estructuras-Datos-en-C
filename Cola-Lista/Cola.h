#include"D:\Documentos\IPN\2 Semestre\Lista\Lista.h"

typedef Lista Cola;

Cola nueva(){return vacia();}
Cola formar(Cola q, Elem e){
      if(esvacia(q))
         return cons(e,q);
      else
         return cons(cabeza(q),formar(resto(q),e));
}
int esnueva(Cola q){return esvacia(q);}
Elem primero(Cola q){return cabeza(q);}
Cola desformar(Cola q){return resto(q);}

