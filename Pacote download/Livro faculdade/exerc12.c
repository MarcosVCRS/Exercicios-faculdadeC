#include<stdio.h>

int main(){
	
	int n1, n2, n3;
	
	printf("Escreva o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Escreva o segundo numero: ");
	scanf("%d", &n2);
	
	printf("Escreva o terceiro numero: ");
	scanf("%d", &n3);
	
	if(n1>n2 && n2>n3){
		printf("A ordem e: %d %d %d", n3, n2, n1);
	}
	if(n2>n1 && n1>n3){
		printf("A ordem e: %d %d %d", n3, n1, n2);				
	}
	if(n3>n2 && n2>n1){
		printf("A ordem e: %d %d %d", n1, n2, n3);
	}
	if(n2>n3 && n3>n1){
		printf("A ordem e: %d %d %d", n1, n3, n2);
	}
	if(n3>n1 && n1>n2){
		printf("A ordem e: %d %d %d", n2, n1, n3);
	}
	if(n1>n3 && n3>n1){
		printf("A ordem e: %d %d %d", n2, n3, n1);
	}

	return 0;
}
