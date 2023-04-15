#include<stdio.h>

int main(){
	
	int n1, n2, n3, x;
	
	printf("Escreva o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Escreva o segundo numero: ");
	scanf("%d", &n2);
	
	printf("Escreva o terceiro numero: ");
	scanf("%d", &n3);
	
	printf("Escreva um numero sem obedecer a regra anterior: ");
	scanf("%d", &x);
	
	if(x>n3){
		printf("A ordem e: %d %d %d %d", x, n3, n2, n1);
	}
	if(x<n1){
		printf("A ordem e: %d %d %d %d", n3, n2, n1, x);
	}
	if(x<n3 && x>n2){
		printf("A ordem e: %d %d %d %d", n3, x, n2, n1);
	}
	if(x<n2 && x>n1){
		printf("A ordem e: %d %d %d %d", n3, n2, x, n1);
	}
	
	return 0;
}
