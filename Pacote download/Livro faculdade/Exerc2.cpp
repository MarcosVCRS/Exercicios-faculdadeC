#include<stdio.h>

int main(){
	float s1, desconto, s2;
	
	printf("Qual e seu salario: ");
	scanf("%f", &s1);
	
	desconto = (s1 - s1*0.10);
	s2 = 50 + desconto;
	
	printf("Seu novo salario e %.f", s2);
	
	return 0;
}
