#include<stdio.h>

int main(){
	int *a,*b,c=10,d=20;
	
	a=&c; b=&d;
	
	printf("a=%u\tb=%u\n",a,b);
	
	return 0;
	
	
	
}
