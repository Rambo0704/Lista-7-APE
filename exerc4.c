#include <stdio.h>

int main(){
	float vet[]={1.3,2.4,2.6,3.6,5.5};
	int *pontvet = vet;
	int i;
	for(i=0;i<5;i++){
		
	printf("%d\n",&pontvet + i);
		
	}
	
	return 0;
}
