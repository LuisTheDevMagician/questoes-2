#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<math.h>
#include <time.h>

int main(){
	
	float n1, n2;
	int opcao;
	
	printf("Informe o primeiro numero: \n");
	scanf("%f", &n1);
	printf("Informe o segundo numero: \n");
	scanf("%f", &n2);

    printf("Escolha uma das opcoes abaixo: \n");
    printf("Opcao 1 - O primeiro numero elevado ao segundo numero. \n");
    printf("Opcao 2 - Raiz quadrada de cada um dos numeros. \n");
    printf("Opcao 3 - Raiz cubica de cada um dos numeros. \n");
    scanf("%d", &opcao);
    
    if(opcao==1){
    printf("O primeiro numero elevado ao segundo numero e: %.0f \n", pow(n1,n2));
}else if(opcao==2){
	printf("Raiz quadrada de cada um dos numeros e: %.2f , %.2f \n", sqrt(n1), sqrt(n2));
}else if(opcao==3){
	printf("Raiz cubica de cada um dos numeros e: %.2f , %.2f \n", cbrt(n1), cbrt(n2));
}else{
	printf("Erro - nenhuma das opcoes validas foi escolhida \n");
}

    printf("o programa vai fechar em 5 segundos...");
    sleep(5);
    return 0;
	}
    
