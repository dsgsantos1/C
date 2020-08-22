#include<stdio.h>

int main(){
	
	float n = 10000, taxa = 0.011, total = 0;
	int i;
	
	for(i = 1; i <= 12; i++){
		
		total = total + n + (n * taxa);
		
	}
	
	printf("%f", total);
}
