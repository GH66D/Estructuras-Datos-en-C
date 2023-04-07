#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include"D:\Documentos\IPN\2 Semestre\Ordenamiento\Ordenamiento.h"

int main(){
   int a[1000], n, i;
   time_t inicio, terminacion;

   srand(time(NULL));

   printf("Dame el valor de n:");
   scanf("%d",&n);
   Shell4(a,n);

   for(i=0;i<n;i++)
       a[i]=n-1-i;
       //a[i]=1+rand()%99;
   printf("Arreglo desordenado:\n");
   ImpArreglo(a,n);

   Shell4(a,n);

   printf("\nArreglo ordenado:\n");
   ImpArreglo(a,n);
printf("%d",time);
   return 0;
}
