#include <stdio.h>

void func(int *a, int *b){
	int aux;
	aux=*a;
	*a=*b;
	*b= aux;
	printf("c: %d\n",*a);
	printf("d: %d\n",*b);
}
int main(){
	int c,d;
	printf("Digite o valor de c:\n");
	scanf("%d",&c);
	printf("Digite o valor de d:\n");
	scanf("%d",&d);
	func(&c,&d);
	return 0;
}
