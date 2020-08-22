#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int i, cod = 1;
	
	float v[5];
	
	for(i = 0; i < 5; i++){
		
		v[i] = i;
		
	}
	

	while(i != 0){
		
		printf("Digite um codigo:\n1-Mostrar a sequencia na ordem normal\n2-Mostrar a sequencia na ordem inversa\n");
		
		scanf("%d", &cod);
	
		system("cls");
	
		if(cod == 1){
			
			for(i = 0; i < 5; i++){
				
				printf("%.1f ", v[i]);
				
			}
			
			printf("\n");
		
		}
		
		if(cod == 2){
			
			for(i = 4; i >= 0; i--){
				
				printf("%.1f ", v[i]);
				
			}
			
			printf("\n");
			
		}
		
		else{
			
			printf("Codigo invalido!\n");
		}
			
	}
	
	
	
}
