#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<math.h>
#include <time.h>

int main(){
	
	float altura=0, opcao=0;
	
	printf("Informe o valor da altura: \n");
	scanf("%f", &altura);
	
	printf("Escolha uma das opcoes abaixo: \n");
	printf("Opcao - 1 Homem \n");
	printf("Opcao - 2 Mulher \n");
	scanf("%f", &opcao);
	
	if(opcao==1){
	printf("Seu peso ideal e: %.2f Kg \n", altura=(altura*72.7)-58);
	}else if(opcao==2){
    printf("Seu peso ideal e: %.2f Kg \n", altura=(altura*62.1)-44.7); 
	}else{
	printf("Erro - nenhuma opcao valida foi selecionada \n");
	}

	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	
	return 0;
}
