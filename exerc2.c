#include <stdio.h>

int main(){
	int num1,num2;
	if(&num1 > &num2){
		printf("n1:%d\n",&num1);
	}else {
		printf("n2:%d\n",&num2);
	}
	
	return 0;
}
