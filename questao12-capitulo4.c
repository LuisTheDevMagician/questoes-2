#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<math.h>
#include <time.h>

int main(){
	
	float salario=0, salarioB=0, salarioF=0;
	
	printf("Informe o valor do seu Salario Bruto Atual: \n");
	scanf("%f", &salarioB);
	
	if(salarioB<=350){
	salario = salarioB + 100;
	salarioF = salario - (salario*0.07);
	printf("Seu Novo Salario sera: %.2f reais \n", salarioF);
	}else if(salarioB>350 && salarioB<600){
   	salario = salarioB + 75;
	salarioF = salario - (salario*0.07);
	printf("Seu Novo Salario sera: %.2f reais \n", salarioF);
	}else if(salario>=600 && salario<=900){
	salario = salarioB + 50;
	salarioF = salario - (salario*0.07);
	printf("Seu Novo Salario sera: %.2f reais \n", salarioF);
	}else if(salario>900){
    salario = salarioB + 35;
	salarioF = salario - (salario*0.07);
	printf("Seu Novo Salario sera: %.2f reais \n", salarioF);
	}
	
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	
	return 0;
}
