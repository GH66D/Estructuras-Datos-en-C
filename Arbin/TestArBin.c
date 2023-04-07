#include"D:\Documentos\IPN\2 Semestre\Arbin\ArBin.h"

int main(){

   ArBin b=consAB(50,vacioAB(),vacioAB());
   ArBin c=consAB(25,vacioAB(),vacioAB());
   ArBin a=consAB(5,b,c);

   esvacioAB(a)?puts("Si."):puts("No.");
   esvacioAB(vacioAB())?puts("Si."):puts("No.");
   ImpElem(raiz(izqAB(a)));
   ImpElem(raiz(derAB(a)));

   EsHoja((b))?puts("Si."):puts("No.");
   EsHoja((c))?puts("Si."):puts("No.");
   EsHoja((a))?puts("Si."):puts("No.");

   printf("%d\n",NumElemsAB(a));
   puts("Preorder:");
   PreOrd(a);
   puts("\nInorder:");
   InOrd(a);
   puts("\nPostorder:");
   PostOrd(a);

   return 0;

}
