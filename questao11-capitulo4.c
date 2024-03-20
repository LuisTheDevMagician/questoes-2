#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<math.h>
#include <time.h>

int main(){
	
	float salario=0, aumento=0, salarioN=0;
	
	printf("Informe o valor do seu Salario Atual: \n");
	scanf("%f", &salario);
	
	if(salario<=300){
	printf("Seu aumento sera de: %.2f reais \n", aumento=salario*0.15);
	printf("Seu Novo Salario sera: %.2f reais \n", salarioN=salario+aumento);
	}else if(salario>300 && salario<600){
   	printf("Seu aumento sera de: %.2f reais \n", aumento=salario*0.10);
	printf("Seu Novo Salario sera: %.2f reais \n", salarioN=salario+aumento);
	}else if(salario>=600 && salario<=900){
	printf("Seu aumento sera de: %.2f reais \n", aumento=salario*0.05);
	printf("Seu Novo Salario sera: %.2f reais \n", salarioN=salario+aumento);
	}else if(salario>900){
    printf("Voce nao recebera aumento \n");
	}
	
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	
	return 0;
}
