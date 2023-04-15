#include<stdio.h>

int main(){
	float s1, adicional, desconto, s2;
	
	printf("Qual e seu salario: ");
	scanf("%f", &s1);
	
	adicional = (s1*0.05);
	desconto = (s1 - s1*0.07);
	s2 = adicional + desconto;
	
	printf("Seu salario novo e %.f", s2);
	
	return 0;
}
