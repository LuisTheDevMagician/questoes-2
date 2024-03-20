#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<math.h>
#include <time.h>

/*  A senha a ser informada para dar certo é 4531*/

int main(){
	
	float senha=0;
	
	printf("Informe a senha: \n");
	scanf("%f", &senha);
	
	if(senha==4531){
	printf(" \n Senha Correta \n Permissao concedida ao usuario \n");
	}else{
	printf(" \n Senha Incorreta \n Permissao negada \n");
	}
	
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
    
	return 0;
}
