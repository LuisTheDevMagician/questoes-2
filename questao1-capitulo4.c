#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<math.h>
#include <time.h>

int main(){
	
	float n1, n2, n3, n4;
	
	printf("Informe a primeira nota: \n");
	scanf("%f", &n1);
	printf("Informe a segunda nota: \n");
	scanf("%f", &n2);
	printf("Informe a terceira nota: \n");
	scanf("%f", &n3);
	printf("Informe a quarta nota: \n");
	scanf("%f", &n4);
	
	if((n1+n2+n3+n4)/4 > 6){
		printf("\n O aluno foi Aprovado \n");
	}else if((n1+n2+n3+n4)/4 < 6){
	
	    printf("\n O aluno foi Reprovado \n");
	}
	
	
    printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	
	return 0;
}
