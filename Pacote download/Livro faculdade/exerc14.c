#include<stdio.h>

int main(){
	
	int x;
	float n1, n2, n3;
	
	printf("Escreva o primeiro numero: ");
	scanf("%f", &n1);
	
	printf("Escreva o segundo numero: ");
	scanf("%f", &n2);
	
	printf("Escreva o terceiro numero: ");
	scanf("%f", &n3);
	
	printf("Escreva um numero inteiro e positivo de 1 a 3: ");
	scanf("%d", &x);
	
	if(x==1){
		if(n1>n2 && n2>n3){
		printf("A ordem e: %f %f %f", n3, n2, n1);
	}
		if(n2>n1 && n1>n3){
		printf("A ordem e: %f %f %f", n3, n1, n2);				
	}
		if(n3>n2 && n2>n1){
		printf("A ordem e: %f %f %f", n1, n2, n3);
	}
		if(n2>n3 && n3>n1){
		printf("A ordem e: %f %f %f", n1, n3, n2);
	}
		if(n3>n1 && n1>n2){
		printf("A ordem e: %f %f %f", n2, n1, n3);
	}
		if(n1>n3 && n3>n1){
		printf("A ordem e: %f %f %f", n2, n3, n1);
	}
	}
	if(x==2){
				if(n1<n2 && n2<n3){
		printf("A ordem e: %f %f %f", n3, n2, n1);
	}
		if(n2<n1 && n1<n3){
		printf("A ordem e: %f %f %f", n3, n1, n2);				
	}
		if(n3<n2 && n2<n1){
		printf("A ordem e: %f %f %f", n1, n2, n3);
	}
		if(n2<n3 && n3<n1){
		printf("A ordem e: %f %f %f", n1, n3, n2);
	}
		if(n3<n1 && n1<n2){
		printf("A ordem e: %f %f %f", n2, n1, n3);
	}
		if(n1<n3 && n3<n1){
		printf("A ordem e: %f %f %f", n2, n3, n1);
	}
	}
	if(x==3){
		if(n1>n2 && n2>n3){
		printf("A ordem e: %f %f %f", n3, n1, n2);
	}
		if(n2>n1 && n1>n3){
		printf("A ordem e: %f %f %f", n3, n2, n1);				
	}
		if(n3>n2 && n2>n1){
		printf("A ordem e: %f %f %f", n1, n3, n2);
	}
	}
	
	return 0;
	
		
}
