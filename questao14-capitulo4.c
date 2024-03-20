#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<math.h>
#include <time.h>

int main(){
	
	float salario=0, salarioN=0;
	
	printf("Informe o valor do seu Salario  Atual: \n");
	scanf("%f", &salario);
	
	if(salario<=300){
	printf("Seu Novo Salario sera: %.2f reais \n", salarioN=salario*0.5+salario);
	}else if(salario>300 && salario<=500){
    printf("Seu Novo Salario sera: %.2f reais \n", salarioN=salario*0.4+salario);
	}else if(salario>500 && salario<=700){
	printf("Seu Novo Salario sera: %.2f reais \n", salarioN=salario*0.3+salario);
	}else if(salario>700 && salario<=800){
    printf("Seu Novo Salario sera: %.2f reais \n", salarioN=salario*0.2+salario);
	}else if(salario>800 && salario<=1000){
    printf("Seu Novo Salario sera: %.2f reais \n", salarioN=salario*0.1+salario);
	}else{
    printf("Seu Novo Salario sera: %.2f reais \n", salarioN=salario*0.05+salario);
	}
	
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	
	return 0;
}
