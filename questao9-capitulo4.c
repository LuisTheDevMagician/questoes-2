#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<math.h>
#include <time.h>

int main(){
	
	float saldoMedio=0, credito=0;
	
	printf("Informe o valor do seu Saldo Medio do Ultimo Ano: \n");
	scanf("%f", &saldoMedio);
	
	if(saldoMedio>400){
	printf("Voce recebera um Credito Especial de 30 por cento. \n");
	printf("Saldo Medio do ultimo Ano: %.2f reais \n", saldoMedio);
	printf("Seu Credito Especial sera: %.2f reais \n", credito=saldoMedio*0.3+saldoMedio);
	}else if(saldoMedio>300 && saldoMedio<=400){
    printf("Voce recebera um Credito Especial de 25 por cento. \n");
	printf("Saldo Medio do ultimo Ano: %.2f reais \n", saldoMedio);
	printf("Seu Credito Especial sera: %.2f reais \n", credito=saldoMedio*0.25+saldoMedio);
	}else if(saldoMedio>200 && saldoMedio<=300){
	printf("Voce recebera um Credito Especial de 20 por cento. \n");
	printf("Saldo Medio do ultimo Ano: %.2f reais \n", saldoMedio);
	printf("Seu Credito Especial sera: %.2f reais \n", credito=saldoMedio*0.2+saldoMedio);
	}else if(saldoMedio<=200){
	printf("Voce recebera um Credito Especial de 10 por cento. \n");
	printf("Saldo Medio do ultimo Ano: %.2f reais \n", saldoMedio);
	printf("Seu Credito Especial sera: %.2f reais \n", credito=saldoMedio*0.1+saldoMedio);
	}
	
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	
	return 0;
}
