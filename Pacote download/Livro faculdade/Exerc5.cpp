#include<stdio.h>

int main(){
	float s1, s2;
	
	printf("Qual e o seu salario: ");
	scanf("%f", &s1);
	
	s2 = (s1*1.25);
	
	printf("Seu novo salario e: %.f", s2);
	
	return 0;
}
