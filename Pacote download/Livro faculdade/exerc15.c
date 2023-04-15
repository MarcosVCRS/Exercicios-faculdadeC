#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	
	int op, n1, n2, soma,x;
	float raiz;
	
	
	setlocale(LC_ALL,"PORTUGUESE");
	
	printf("---Menu de Opcoes---\n");
	
	printf(" Escolha o numero 1 para somar: \n");
	printf(" Escolha o numero 2 para raiz:\n");
	scanf("%d", op);
	
	switch (op){
	case 1:	
		printf("Escolha o primeiro numero:");
		scanf("%d", &n1);
		
		printf("Escolha o segundo numero:");
		scanf("%d", &n2);
		
		soma = n1+n2;
		
		printf("Resultado = %.d", soma);
		
		break;
	case 2:
		
		printf("Escolha um numero:");
		scanf("%d", &n1);
		
		raiz = sqrt(n1);
		printf("Sua raiz é:%.f", raiz);
		
		break;
		
	}
		
}
