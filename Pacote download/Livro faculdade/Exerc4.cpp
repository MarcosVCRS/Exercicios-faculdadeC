#include<stdio.h>
#include<locale.h>

int main(){
	float n1, n2, n3, p1, p2, p3, mp;
	
	setlocale(LC_ALL, "portugues");
	
	printf("Escreva o primeiro numero: ");
	scanf("%f", &n1);
	printf("Peso 1: ");
	scanf("%f", &p1);
	printf("Escreva o segundo numero: ");
	scanf("%f", &n2);
	printf("Peso 2: ");
	scanf("%f", &p2);
	printf("Escreva o terceiro numero: ");
	scanf("%f", &n3);
	printf("Peso 3:");
	scanf("%f", &p3);
		
	mp = (n1*p1 + n2*p2 + n3*p3)/(p1 + p2 + p3);
	
	printf("A media ponderada do aluno: %.f", mp);
	
	return 0;
}
