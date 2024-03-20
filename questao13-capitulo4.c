#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<math.h>
#include <time.h>

int main(){
	
    float preco=0, calculo=0;
    
    printf("Informe o preco do produto: \n");
    scanf("%f", &preco);
    
    if(preco<=50){
    calculo=preco+(preco*0.05);
	if(calculo<=80){
	printf("Novo Preco: %.2f \n", calculo);
	printf("Classificacao: Barato \n");
	}
}
if(preco>50 && preco<=100){
    calculo=preco+(preco*0.1);
	if(calculo<=80){
	printf("Novo Preco: %.2f \n", calculo);
	printf("Classificacao: Barato \n");
	}else if(calculo>80 && calculo<=120){
	printf("Novo Preco: %.2f \n", calculo);
	printf("Classificacao: Normal \n");
	}
}
if(preco>100){
    calculo=preco+(preco*0.15);
	if(calculo>80 && calculo<=120){
	printf("Novo Preco: %.2f \n", calculo);
	printf("Classificacao: Normal \n");
	}else if(calculo>120 && calculo<=200){
	printf("Novo Preco: %.2f \n", calculo);
	printf("Classificacao: Caro \n");
	}else if(calculo>200){
	printf("Novo Preco: %.2f \n", calculo);
	printf("Classificacao: Muito Caro \n");
	}
}


	
    printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	
	return 0;
}
