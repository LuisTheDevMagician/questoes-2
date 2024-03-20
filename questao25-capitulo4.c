#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<math.h>
#include <time.h>

int main(){
	
	int horasE=0, horasEm=0, horasF=0, horasFm=0;
	float premio;
	
	printf("Informe a quantidade de horas Extras: \n");
	scanf("%d", &horasE);
	
	printf("Informe a quantidade de horas que faltou: \n");
	scanf("%d", &horasF);
	
	horasEm=horasE*60;
	horasFm=horasF*60;
	premio=horasEm-(2/3*(horasFm));
	
	if(premio<600){
	printf("Voce ira receber 100 reais de Gratificacao \n");
	}else if(premio>=600 && premio<1200){
	printf("Voce ira receber 200 reais de Gratificacao \n");
	}else if(premio>=1200 && premio<1800){
	printf("Voce ira receber 300 reais de Gratificacao \n");
	}else if(premio>1800 && premio<2400){
	printf("Voce ira receber 400 reais de Gratificacao \n");
	}else if(premio>=2400){
	printf("Voce ira receber 500 reais de Gratificacao \n");
	}
	
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	
	return 0;
}

	
