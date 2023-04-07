#include"D:\Documentos\IPN\2 Semestre\AVL\ABB.h"
typedef ABB AVL;

int Absoluto(int n){
     if(n<0)
         return -n;
     else
         return n;
}

int FactBal(ABB a){
    if(esvacioAB(a))
        return 0;
    else
        return altura(izqAB(a))-altura(derAB(a));
}

AVL vacioAVL(){return vacioAB();}

int esAVL(ABB a){
    if(esvacioAB(a))
        return 1;
    else if((Absoluto(FactBal(a))<=1)&&(esAVL(izqAB(a)))&&(esAVL(derAB(a))))
                return 1;
         else
                return 0;
}


AVL rotaDer(ABB a){
    return consAB(raiz(izqAB(a)),
                  izqAB(izqAB(a)),
                  consAB(raiz(a),derAB(izqAB(a)),derAB(a)));
}

AVL rotaIzq(ABB a){
    return consAB(raiz(derAB(a)),
                  consAB(raiz(a),izqAB(a),izqAB(derAB(a))),
                  derAB(derAB(a)));
}

AVL rotaDerIzq(ABB a){
     return rotaDer(consAB(raiz(a),rotaIzq(izqAB(a)),derAB(a)));
}

AVL rotaIzqDer(ABB a){
    return rotaIzq(consAB(raiz(a),izqAB(a),rotaDer(derAB(a))));
}

AVL hazAVL(ABB a){
    if(Absoluto(FactBal(a))>1)
		if(esAVL(izqAB(a))&&esAVL(derAB(a)))
		      if(FactBal(a)>1)
				if(FactBal(izqAB(a))>0)
                     a=rotaDer(a);
				else a=rotaDerIzq(a);
			  else if(FactBal(derAB(a))<0)
                        a=rotaIzq(a);
				   else a=rotaIzqDer(a);
		else if(esAVL(izqAB(a)))
                  a=consAB(raiz(a),izqAB(a),hazAVL(derAB(a)));
			 else a=consAB(raiz(a),hazAVL(izqAB(a)),derAB(a));
    else if(esAVL(izqAB(a)))
              a=consAB(raiz(a),izqAB(a),hazAVL(derAB(a)));
		 else a=consAB(raiz(a), hazAVL(izqAB(a)), derAB(a));
    return a;
}

AVL insAVL(Elem e, AVL a){
      ABB t=insord(e,a);

      if(esAVL(t))
          return t;
      else
          return hazAVL(t);
}

AVL elimAVL(Elem e, AVL a){
      if(!esAVL(a=elimord(e,a)))
           return hazAVL(a);
      else
           return a;
}
