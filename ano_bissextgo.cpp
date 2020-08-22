#include<stdio.h>

int main(){
	int ano;
	
	scanf("%d", &ano);
	
	printf("\n");
	
	if( ano % 4 == 0){
		
		if(ano % 100 == 0){
			
			if( ano % 100 == 0){
				
				printf("Eh bissexto");
				
			}
			
			else{
				printf("Nao eh");
			}
			
		}
		
		else{
			printf("eh");
			
		}
		
	}
	
	else{
		printf("nao eh");
	}
	
}
