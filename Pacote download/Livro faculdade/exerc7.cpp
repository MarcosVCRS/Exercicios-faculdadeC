#include<stdio.h>
#include<locale.h>

int main(){
	
	float n1, n2, n3, n4, media;
	
	printf("Qual sua primeira nota: ");
	scanf("%f", &n1 );
	
	printf("Qual sua segunda nota: ");
	scanf("%f", &n2 );
	
	printf("Qual sua terceira nota: ");
	scanf("%f", &n3 );
	
	printf("Qual sua quarta nota: ");
	scanf("%f", &n4 );
	
	media = (n1+n2+n3+n3)/4;
	printf("Sua media foi de: %.f", media);
	
	if(media>=7)
	printf("Por isso voce foi aprovado");
		
	else (media<7);
	printf("Por isso voce foi reprovado");
	
	return 0;
}
