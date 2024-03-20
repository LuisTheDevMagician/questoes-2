#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<math.h>
#include <time.h>

int main(){
	
	float valorI=0, opcao=0;
	
	printf("Informe o valor do seu Investimento: \n");
	scanf("%f", &valorI);
	
	printf("Escolha uma das opcoes abaixo: \n");
	printf("Opcao - 1 Poupança \n");
	printf("Opcao - 2 Fundos de renda fixa \n");
	scanf("%f", &opcao);
	
	if(opcao==1){
	printf("O valor do seu investiemnto com correcao de um mes e: %.2f \n", valorI=valorI*0.03+valorI);
	}else if(opcao==2){
	printf("O valor do seu investiemnto com correcao de um mes e: %.2f \n", valorI=valorI*0.04+valorI);
	}else{
	printf("Erro - nenhuma opcao valida foi selecionada \n");
	}

	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	
	return 0;
}
