#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<math.h>
#include <time.h>

int main(){
	
	float n1, n2, soma;
	
	printf("Considerando que a menor nota possivel e 0 e a maior possivel e 10 \n");
	printf("Informe a primeira nota: \n");
	scanf("%f", &n1);
	printf("Informe a segunda nota: \n");
	scanf("%f", &n2);
	
	
	if((n1+n2/2) >= 0 && (n1+n2)/2<3){
	printf("Reprovado \n");
	}else if ((n1+n2)/2 >= 3 && (n1+n2)/2<7){ 
	printf("Exame \n");
    }else{ 
    printf("Aprovado \n");

	}

	
    printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	
	return 0;
}
