#include<stdio.h>

int main(){
	float n1, n2, n3, p1, p2, p3, media;
	
	printf("Escreva a primeira nota:");
	scanf("%f", &n1);
	
	printf("Escreva a segunda nota:");
	scanf("%f", &n2);
	
	printf("Escreva a terceira nota:");
	scanf("%f", &n3);
	
	p1 = 2;
	p2 = 3;
	p3 = 5;
	
	media = (n1*p1 + n2*p2 + n3*p3)/p1 + p2 +p3;
	
	if(media>=8){
	printf("Sua nota e: A");
	}

	
	if(media>=7 && media<8){
	printf("Sua nota e: B");
	}
	
	if(media>=6 && media<7){
	printf("Sua nota e: C");
	}
	
	if(media>=5 && media<6){
	printf("Sua nota e: D");
	}
	
	if(media>=0 && media<5){
	printf("Sua nota e: E");
	}
	
	return 0;
}
