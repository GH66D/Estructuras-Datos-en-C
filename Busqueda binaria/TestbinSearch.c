#include<stdio.h>
#include"D:\Documentos\IPN\2 Semestre\Ordenamiento\Ordenamiento.h"

int BusqBin(int [], int, int);


int main(){

   int a[100], e, n, t, i;
   printf("De cuantas posiciones quieres el arreglo: ");
   scanf("%d",&n);
   printf("Ingresa %d enteros: ",n);
   LeeArreglo(a,n);
   Burbuja(a,n);
   ImpArreglo(a,n);
   printf("Cual elemento buscas?");
   scanf("%d",&t);
   i=BusqBin(a,n,t);
   t>=0?printf("El elemento %d esta en %d.\n",t,i):
        printf("El elemento %d no esta en el arreglo.\n",t,i);

   return 0;
}

int BusqBin(int a[], int n, int t){
      int i=0,d=n-1, m=(d-i)/2;

      while(i<=d){
        if(t==a[m])
            return m;
        else if(t<a[m]){
                 d=m-1;
                 m=(d+i)/2;
             }else{
                 i=m+1;
                 m=(d+i)/2;
             }
      }
      return -1;
};
