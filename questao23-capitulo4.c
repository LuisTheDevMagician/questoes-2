#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<math.h>
#include <time.h>

int main(){
	
    int codigo=0, quantidade=0, valorP=0;
    float valor=0, desconto=0, precoF=0;
    
    printf("Os codigos de produto vao de 1 ate 40 \n");
    printf("Informe o codigo do produto: \n");
    scanf("%d", &codigo);
    
    printf("Informe a quantidade de produtos que ira levar: \n");
    scanf("%d", &quantidade);
    
    if(codigo>0 && codigo<=10){
    valorP=10;
    valor=valorP*quantidade;
    if(valor<=250){
    desconto=valor*0.05;
    printf("O valor unitario do prduto e: %d reais \n", valorP);
    printf("Valor total da nota sem desconto: %.2f \n", valor);
    printf("Valor do desconto a ser aplicado: %.2f \n", desconto);
    printf("Valor da nota com desconto: %2.f \n", precoF=valor-desconto);
	}else if(valor>250 && valor<=500){
	desconto=valor*0.1;
    printf("O valor unitario do prduto e: %d reais \n", valorP);
    printf("Valor total da nota sem desconto: %.2f \n", valor);
    printf("Valor do desconto a ser aplicado: %.2f \n", desconto);
    printf("Valor da nota com desconto: %2.f \n", precoF=valor-desconto);
	}else if(valor>500){
	desconto=valor*0.15;
    printf("O valor unitario do prduto e: %d reais \n", valorP);
    printf("Valor total da nota sem desconto: %.2f \n", valor);
    printf("Valor do desconto a ser aplicado: %.2f \n", desconto);
    printf("Valor da nota com desconto: %2.f \n", precoF=valor-desconto);
}
}
    if(codigo>10 && codigo<=20){
    valorP=15;
    valor=valorP*quantidade;
    if(valor<=250){
    desconto=valor*0.05;
    printf("O valor unitario do prduto e: %d reais \n", valorP);
    printf("Valor total da nota sem desconto: %.2f \n", valor);
    printf("Valor do desconto a ser aplicado: %.2f \n", desconto);
    printf("Valor da nota com desconto: %2.f \n", precoF=valor-desconto);
	}else if(valor>250 && valor<=500){
	desconto=valor*0.1;
    printf("O valor unitario do prduto e: %d reais \n", valorP);
    printf("Valor total da nota sem desconto: %.2f \n", valor);
    printf("Valor do desconto a ser aplicado: %.2f \n", desconto);
    printf("Valor da nota com desconto: %2.f \n", precoF=valor-desconto);
	}else if(valor>500){
	desconto=valor*0.15;
    printf("O valor unitario do prduto e: %d reais \n", valorP);
    printf("Valor total da nota sem desconto: %.2f \n", valor);
    printf("Valor do desconto a ser aplicado: %.2f \n", desconto);
    printf("Valor da nota com desconto: %2.f \n", precoF=valor-desconto);
}
}
    if(codigo>20 && codigo<=30){
    valorP=20;
    valor=valorP*quantidade;
    if(valor<=250){
    desconto=valor*0.05;
    printf("O valor unitario do prduto e: %d reais \n", valorP);
    printf("Valor total da nota sem desconto: %.2f \n", valor);
    printf("Valor do desconto a ser aplicado: %.2f \n", desconto);
    printf("Valor da nota com desconto: %2.f \n", precoF=valor-desconto);
	}else if(valor>250 && valor<=500){
	desconto=valor*0.1;
    printf("O valor unitario do prduto e: %d reais \n", valorP);
    printf("Valor total da nota sem desconto: %.2f \n", valor);
    printf("Valor do desconto a ser aplicado: %.2f \n", desconto);
    printf("Valor da nota com desconto: %2.f \n", precoF=valor-desconto);
	}else if(valor>500){
	desconto=valor*0.15;
    printf("O valor unitario do prduto e: %d reais \n", valorP);
    printf("Valor total da nota sem desconto: %.2f \n", valor);
    printf("Valor do desconto a ser aplicado: %.2f \n", desconto);
    printf("Valor da nota com desconto: %2.f \n", precoF=valor-desconto);
}
}
    if(codigo>30 && codigo<=40){
    valorP=30;
    valor=valorP*quantidade;
    if(valor<=250){
    desconto=valor*0.05;
    printf("O valor unitario do prduto e: %d reais \n", valorP);
    printf("Valor total da nota sem desconto: %.2f \n", valor);
    printf("Valor do desconto a ser aplicado: %.2f \n", desconto);
    printf("Valor da nota com desconto: %2.f \n", precoF=valor-desconto);
	}else if(valor>250 && valor<=500){
	desconto=valor*0.1;
    printf("O valor unitario do prduto e: %d reais \n", valorP);
    printf("Valor total da nota sem desconto: %.2f \n", valor);
    printf("Valor do desconto a ser aplicado: %.2f \n", desconto);
    printf("Valor da nota com desconto: %2.f \n", precoF=valor-desconto);
	}else if(valor>500){
	desconto=valor*0.15;
    printf("O valor unitario do prduto e: %d reais \n", valorP);
    printf("Valor total da nota sem desconto: %.2f \n", valor);
    printf("Valor do desconto a ser aplicado: %.2f \n", desconto);
    printf("Valor da nota com desconto: %2.f \n", precoF=valor-desconto);
}
}
     
     
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	
	return 0;
}

