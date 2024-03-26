#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<math.h>
#include <time.h>

int main(){
	
	int opcao=0;
	float n1=0, n2=0, resultado=0;
	
	printf("Informe o valor do primeiro numero: \n");
	scanf("%f", &n1);
	
	printf("Informe o valor do segundo numero: \n");
	scanf("%f", &n2);
	
	printf("Escolha uma opcao de 1 a 4 \n");
	printf("1 - Média entre os números digitados\n");
	printf("2 - Diferença do maior pelo menor\n");
	printf("3 - Produto entre os numeros digitados\n");
	printf("4 - Divisão do primeiro pelo segundo\n");
	scanf("%d", &opcao);
	
	
	if(n1>n2){
	if(opcao==1){
	printf("Media entre os numeros digitados: %.2f \n", resultado=(n1+n2)/2);
	}else if(opcao==2){
	printf("Diferenca do maior pelo menor: %.2f \n", resultado=n1-n2);
	}else if(opcao==3){
	printf("Produto entre os numeros digitados: %.2f \n", resultado=n1*n2);
	}else if(opcao==4 && n2!=0){
	printf("Divisão do primeiro pelo segundo: %.2f \n", resultado=n1/n2);
	}else{
	    printf("Nao foi possivel realizar a operacao\n");
	}
}
	if(n1<n2){
	if(opcao==1){
	printf("Media entre os numeros digitados: %.2f \n", resultado=(n1+n2)/2);
	}else if(opcao==2){
	printf("Diferenca do maior pelo menor: %.2f \n", resultado=n2-n1);
	}else if(opcao==3){
	printf("Produto entre os numeros digitados: %.2f \n", resultado=n1*n2);
	}else if(opcao==4 && n2!=0){
	printf("Divisão do primeiro pelo segundo: %.2f \n", resultado=n1/n2);
	}else{
	    printf("Nao foi possivel realizar a operacao\n");
	}
}
	

	
    printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	
	return 0;
}
