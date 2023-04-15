#include<stdio.h>

int main(){
	float n1, n2, n3, media, ne;
	
	printf("Escreva sua primeira nota: ");
	scanf("%f", &n1);
	
	printf("Escreva sua segunda nota: ");
	scanf("%f", &n2);
	
	printf("Escreva sua terceira nota: ");
	scanf("%f", &n3);
	
	media = (n1+n2+n3)/3;
	printf("Sua media e: %.f \n", media);
	
	if(media>=7 && media<=10){
	printf("APROVADO");
	}

	else if(media>=3){
		ne = (12-media);
		printf("Exame, a nota que voce precisa para ser aprovado: %.f", ne);
	}
		
	else {
	printf("Voce foi reprovado");
	}
	
	
	return 0;
	}
