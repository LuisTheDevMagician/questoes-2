#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<math.h>
#include <time.h>

int main(){
	
	float salario=0;
	
	printf("Informe o valor do Salario: \n");
	scanf("%f", &salario);
	
	if(salario<=500){
	printf("Voce recebera um aumento de 30 por cento no seu salario. \n");
	printf("Seu novo salario sera: %.2f reais \n", salario*0.3+salario);
	}else{
		printf("Voce nao recebera aumento no salario. \n");
	}
	
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	
	return 0;
}
