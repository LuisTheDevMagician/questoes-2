#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<math.h>
#include <time.h>

int main(){
	
	float valor=0, valorF=0, desconto=0;
	
	printf("Informe o valor do Produto: \n");
	scanf("%f", &valor);
	
	if(valor<=30){
	printf("Nao havera Desconto \n");
	}else if(valor>30 && valor<=100){
    printf("Valor do Desconto: %.2f \n", desconto=valor*0.1);
    printf("Valor do Produto com Desconto: %.2f \n", valorF=valor-desconto);
	}else if(valor>100){
    printf("Valor do Desconto: %.2f \n", desconto=valor*0.15);
    printf("Valor do Produto com Desconto: %.2f \n", valorF=valor-desconto);
	}
	
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	
	return 0;
}
