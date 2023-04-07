#include<stdio.h>
#include<stdlib.h>
#include"Escritorio\1.h"


int main(){
   Circular c=nuevaCirc();
   Elem i;

c=formarCirc(formarCirc(formarCirc(formarCirc(nuevaCirc(),1),2),3),4);
ImpColaCirc(c);
desformarCirc(c);
puts("/n");
ImpColaCirc(c);
i=primeroCirc(c);
ImpElem(i);
puts("\n");

while(!esnuevaCirc(c)){
    c=desformarCirc(c);
    puts("\n");
    ImpColaCirc(c);
	}

return 0;
}
  /*for(i=1;i<=6;i++)
      c=formarCirc(c,i);

   while(1){
      for(i=1;i<=6;i++){
          ImpElem(primeroCirc(c));
          c=rotarCirc(c);
      }
      c=rotarCirc(c);
      printf("\n");
      getchar();
   }
puts("Cola Circular");
   ImpColaCirc(nuevaCirc());
   getchar();
   puts("Cola Circular");
   ImpColaCirc(c);

   while(!esnuevaCirc(c)){
    c=desformarCirc(c);
    puts("\n");
    ImpColaCirc(c);
   }
}
*/
