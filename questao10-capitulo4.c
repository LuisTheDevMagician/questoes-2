#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<math.h>
#include <time.h>

int main(){
	
	float custoF=0, valorC=0;
	
	printf("Informe o Custo de Fabrica do Veiculo: \n");
	scanf("%f", &custoF);
	
	if(custoF<=12000){
	printf("O Valor do Veiculo sera: %.2f reais \n", valorC=custoF+custoF*0.05);
	}else if (custoF>12000 && custoF<=25000){
	printf("O Valor do Veiculo sera: %.2f reais \n", valorC=(custoF+custoF*0.1)+(custoF+custoF*0.15));
	}else if(custoF>25000){
	printf("O Valor do Veiculo sera: %.2f reais \n", valorC=(custoF+custoF*0.15)+(custoF+custoF*0.20));
	
	}
	
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	
	return 0;
}
