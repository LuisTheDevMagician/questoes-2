#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<math.h>
#include <time.h>



int main(){
	
	float idade=0;
	
	printf("Informe sua idade: \n");
	scanf("%f", &idade);
	
	if(idade<18){
	printf("Menor de idade \n");
	}else{
	printf("Maior de idade \n");
	}
	
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
    
	return 0;
}
