#include <stdio.h>
#include<locale.h>

int main(){
	float n1, n2, n3, media;
	 
	 printf("Escreva o primeiro numero: ");
	 scanf("%f", &n1);
	 
	 printf("Escreva o segundo numero: ");
	 scanf("%f", &n2);
	 
	 printf("Escreva o terceiro numero: ");
	 scanf("%f", &n3);
	 
	 media = (n1 + n2 + n3) / 3;
	 
	 printf("Media do aluno: %.f\n", media);
	 
	 return 0;
}


