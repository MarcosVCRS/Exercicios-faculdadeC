#include<stdio.h>

int main(){
	float s1, s2;
	
	printf("Qual e seu salario: ");
	scanf("%f", &s1);
	
	if(s1<500){
	s2 = (s1*1.3);
	printf("Seu salario novo e: %.f", s2);
	}
	
	else{
	printf("Voce nao tem direito a esse beneficio");
	} 
	
	return 0;
}


