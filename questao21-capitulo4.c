#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<math.h>
#include <time.h>

int main(){
	
    int codigo=0;
    float valor=0;
	
	printf("Informe o valor do produto: \n");
	scanf("%f", &valor);
	
	printf("Informe o codigo do produto: \n");
	printf("Os codigos vao de 1 ate 30 \n");
	scanf("%d", &codigo);
	
	if(codigo==1){
	printf("O valor do produto e: %.2f reais \n", valor);
	printf("O produto vem da regiao Sul \n");
	}else if(codigo==2){
	printf("O valor do produto e: %.2f reais \n", valor);
	printf("O produto vem da regiao Norte \n");
	}else if(codigo==3){
	printf("O valor do produto e: %.2f reais \n", valor);
	printf("O produto vem da regiao Leste \n");
    }else if(codigo==4){
	printf("O valor do produto e: %.2f reais \n", valor);
	printf("O produto vem da regiao Oeste \n");
    }else if(codigo==5 || codigo==6){
	printf("O valor do produto e: %.2f reais \n", valor);
	printf("O produto vem da regiao Nordeste \n");
    }else if(codigo==7 || codigo==8 || codigo==9){
	printf("O valor do produto e: %.2f reais \n", valor);
	printf("O produto vem da regiao Sudeste \n");
    }else if(codigo>=10 && codigo<=20){
    printf("O valor do produto e: %.2f reais \n", valor);
	printf("O produto vem da regiao Centro Oeste \n");
	}else if(codigo>=21 && codigo<=30){
    printf("O valor do produto e: %.2f reais \n", valor);
	printf("O produto vem da regiao Nordeste \n");
	}
	

    
    
    
    
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	
	return 0;
}
