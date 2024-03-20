#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<math.h>
#include <time.h>

int main(){
	
    int idade=0;
    float peso=0;
	
	printf("Informe a idade da pessoa: \n");
	scanf("%d", &idade);
	
	printf("Informe o peso da pessoa: \n");
	scanf("%f", &peso);
	
	if(idade<20 && peso<=60){
	printf("O grupo de risco da pessoa e o numero 9 \n");
    }else if(idade<20 && peso>60 && peso<=90){
    printf("O grupo de risco da pessoa e o numero 8 \n");
    }else if(idade<20 && peso>90){
    printf("O grupo de risco da pessoa e o numero 7 \n");
    }else if(idade>=20 && idade<=50 && peso<=60){
    printf("O grupo de risco da pessoa e o numero 6 \n");
    }else if(idade>=20 && idade<=50 && peso>60 && peso<=90){
    printf("O grupo de risco da pessoa e o numero 5 \n");
    }else if(idade>=20 && idade<=50 && peso>90){
    printf("O grupo de risco da pessoa e o numero 4 \n");
    }else if(idade>50 && peso<=60){
    printf("O grupo de risco da pessoa e o numero 3 \n");
    }else if(idade>50 && peso>60 && peso<=90){
    printf("O grupo de risco da pessoa e o numero 2 \n");
    }else if(idade>50 && peso>90){
    printf("O grupo de risco da pessoa e o numero 1 \n");
    }
    
     
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	
	return 0;
}

