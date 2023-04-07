#include"D:\Documentos\IPN\2 Semestre\Arbin\ArBin.h"

typedef ArBin ABB;

ABB insord(Elem e, ABB a){
      if(esvacioAB(a))
            return consAB(e,vacioAB(),vacioAB());
      else if(EsMenor(e,raiz(a)))
                return consAB(raiz(a),insord(e,izqAB(a)),derAB(a));
           else
                return consAB(raiz(a),izqAB(a),insord(e,derAB(a)));
}

Elem Mayor(ABB a){
    if(EsHoja(a))
         return raiz(a);
    else if((!esvacioAB(izqAB(a)))&&(esvacioAB(derAB(a))))
             return raiz(a);
         else
             return Mayor(derAB(a));
}

ABB elimord(Elem e, ABB a){
     if(EsHoja(a))
         return vacioAB();
     else if(EsIgual(e,raiz(a)))
              if((!esvacioAB(izqAB(a)))&&(esvacioAB(derAB(a))))
                      return izqAB(a);
              else if((esvacioAB(izqAB(a)))&&(!esvacioAB(derAB(a))))
                        return derAB(a);
                   else
                        return consAB(Mayor(izqAB(a)),
                                      elimord(Mayor(a),izqAB(a)),derAB(a));
          else if(EsMenor(e,raiz(a)))
                       return consAB(raiz(a),elimord(e,izqAB(a)),derAB(a));
               else
                       return consAB(raiz(a),izqAB(a),elimord(e,derAB(a)));
}
/*
Espec ABB
     Importar TODO de ArBin;
     Ocultar la función consAB();
     insord:Elem, ABB -> ABB;
   Axiomas: Elem e, ABB a;
     [ABB1] esvacioAB(insord(e,a))= FALSO;
     [ABB2] raiz(insord(e,a))= Si esvacioAB(a) ret e;
                               Sino ret raiz(a);
     [ABB5] izqAB(insord(e,a))= Si esvacioAB(a) ret vacioAB();
                                Sino Si EsMenor(e,raiz(a))
                                           ret insord(e,izqAB(a));
                                     Sino
                                           ret izqAB(a);
     [ABB6] derAB(insord(e,a))= Si esvacioAB(a) ret vacioAB();
                                Sino Si EsMayor(e,raiz(a))
                                           ret insord(e,derAB(a));
                                     Sino
                                           ret derAB(a);
 Fin ABB.
*/
