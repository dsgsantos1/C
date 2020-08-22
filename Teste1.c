#include<stdio.h>

/*float v(float vetor[]){
	
	int i;
	
	for(i = 0; i < 5; i++){
		
		scanf("%f\n", &vetor[i]);
		
	}
	
	return vetor[5];
}*/

void conf(int cod, float vet[]){
	
	int i;
	
	while(cod =! 0){
	
	if(cod == 0){
		break;
	}
	
	if(cod == 1){
		
		for(i = 0; i < 5; i++){
			
			printf("%f ", vet[i]);
			
		}
		
	}
	
	if(cod == 2){
		
		for(i = 4; i >= 0; i--){
			
			printf("%f ", vet[i]);
			
		}
		
	}
	
	else{
		
		printf("Error");
		
	}
}

}

int main(){
	
	int i, cod;
	
	float v[5];
	
	for(i = 0; i < 5; i++){
		
		v[i] = i;
		
	}
	
	scanf("%d\n", &cod);
	
	conf(cod, v[5]);
