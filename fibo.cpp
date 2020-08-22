#include<stdio.h>

int main(){
	
	int n1, i, p;
	
	f[0] = 0;
	f[1] = 1;
	
	printf("Fala: \n");
	
	scanf("%d\n", &p);
	
	for(i = 2; i >= p; i++){
		
		f[i] = f[i - 1] + f[i - 2];
		printf("%d\n ", f[i]);
		
		
	}
	
	
}
