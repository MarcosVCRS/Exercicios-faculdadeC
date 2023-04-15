#include<stdio.h>

int main(){
	float s1, aumento_percentual, valor_aumento, s2;
	
	printf("Qual e seu salario: ");
	scanf("%f", &s1);
	printf("Qual foi seu aumento percentual: ");
	scanf("%f", &aumento_percentual);
	
	valor_aumento = (s1*aumento_percentual);
	s2 = (s1 + s1*aumento_percentual);
	
	printf("Valor do aumento foi de: %.f\n", valor_aumento); 
	
	printf("Seu novo salario foi de: %.f", s2);	

	return 0;
}
