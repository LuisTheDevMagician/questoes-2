#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<math.h>
#include <time.h>

int main(){
	
    float preco=0, aumento=0, imposto=0, novoP=0;
    int categoria=0;
    char letra;
   
    
    printf("Informe o valor do preco do produto: \n");
    scanf("%f", &preco);
    
    printf("Escolha uma das categorias abaixo \n");
    printf("1  limpeza \n");
    printf("2  alimentacao \n");
    printf("3  vestuario \n");
    printf("Qual categoria vai escolher: \n");
    scanf("%d", &categoria);
    
    printf("Informe R maiusculo produtos que necessitam de refrigeracao \n");
    printf("Informe N maiusculo produtos que nao necessitam de refrigeracao \n");
    fflush(stdin);
    scanf("%c", &letra);
    fflush(stdin);
   
  
    
    if(preco<=25 && letra=='N' && categoria==1){
	aumento=preco*0.05;
	imposto=preco*0.08;
	}else if(preco<=25 && letra=='N' && categoria==2){
	aumento=preco*0.08;
	imposto=preco*0.05;
	}else if(preco<=25 && letra=='N' && categoria==3){
	aumento=preco*0.1;
	imposto=preco*0.08;
}

	 if(preco<=25 && letra=='R' && categoria==1){
	aumento=preco*0.05;
	imposto=preco*0.05;
	novoP=(preco+aumento)-imposto;
	}else if(preco<=25 && letra=='R' && categoria==2){
	aumento=preco*0.08;
	imposto=preco*0.05;
	}else if(preco<=25 && letra=='R' && categoria==3){
	aumento=preco*0.1;
	imposto=preco*0.05;


}
	if(preco>25 && letra=='N' && categoria==1){
	aumento=preco*0.12;
	imposto=preco*0.08;

}else if(preco>25 && letra=='N' && categoria==2){
	aumento=preco*0.15;
	imposto=preco*0.05;

}else if (preco>25 && letra=='N' && categoria==3){
	aumento=preco*0.15;
	imposto=preco*0.08;

}
if(preco>25 && letra=='R' && categoria==1){
	aumento=preco*0.12;
	imposto=preco*0.05;

}else if(preco>25 && letra=='R' && categoria==2){
	aumento=preco*0.15;
	imposto=preco*0.05;

}else if (preco>25 && letra=='R' && categoria==3){
	aumento=preco*0.15;
	imposto=preco*0.05;

}

    novoP=(preco+aumento)-imposto;
    if(novoP<=50){
		printf("O Novo Preco e %.2f e sua Categoria e Barato \n", novoP);
    }else if(novoP>50 && novoP<=120){
    	printf("O Novo Preco e %.2f e sua Categoria e normal \n", novoP);
	}else if(novoP>120){
	printf("O Novo Preco e %.2f e sua Categoria e Caro \n", novoP);
	}
	
   

	
    printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	
	return 0;
}
