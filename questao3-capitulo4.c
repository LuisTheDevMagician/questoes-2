#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<math.h>
#include <time.h>

int main(){
	
	float n1, n2;
	
	printf("Informe o primeiro numero: \n");
	scanf("%f", &n1);
	printf("Informe o segundo numero: \n");
	scanf("%f", &n2);
	
	if(n1>n2){
	printf("O primeiro numero e maior \n");
}else if(n2>n1){
	printf("O segundo numero e maior \n");
	

	}

	
    printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	
	return 0;
}
