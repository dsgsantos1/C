#include<stdio.h>

int main(){
	
	int i, j, soma;
	
	for(i = 1; i <= 6; i++){
		
		for(j = 1; j <= 6; j++){
			
			soma = i + j;
			
			if(soma == 7){
				
				printf("%d + %d\n", i, j);
				
			}
			
		}
		
	}
	
}
