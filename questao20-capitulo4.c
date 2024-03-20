#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<math.h>
#include <time.h>

int main(){
	
    int idade=0;
	
	printf("Informe a idade do Nadador:");
	scanf("%d", &idade);
	
	if(idade>=5 && idade<=7){
	printf("Categoria Infantil \n");
	}else if(idade>=8 && idade<=10){
	printf("Categoria Juvenil \n");
	}else if(idade>=11 && idade<=15){
	printf("Categoria Adolescente \n");
	}else if(idade>=16 && idade<=30){
	printf("Categoria Adulto \n");
	}else if(idade>30){
	printf("Categoria Senior \n");
	}else{
	printf("Ainda nao pode nadar \n");
	}
    
    
    
    
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	
	return 0;
}
