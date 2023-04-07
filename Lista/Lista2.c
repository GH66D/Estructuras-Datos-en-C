#include<stdio.h>
#include"D:\Documentos\IPN\2 Semestre\Lista\Listainterfase.h"
int main(){
	Lista a=vacia();Lista b=vacia();
		
		a=cons(1,cons(2,cons(3,vacia())));
		a=cons(3,cons(2,cons(1,vacia())));
		esvacia(a)?
		puts("Si es vacia"):puts("No es vacia");
		
		ImpElem(cabeza(a));
		ImpElem(cabeza(resto(a)));
		
		SonIguales(a,b)?puts("Si"):puts("No");
		EsPalindroma(b)?puts("Si"):puts("No");
		EstaEn(3,a)?puts("Si"):puts("No");
	
		
		
		return 0;
		
}
