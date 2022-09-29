#include <stdio.h>
#include <stdlib.h>

main(){
	float valorEntrada, valorSaida;
	int resp;
	
	do{
		printf("Digite o valor da compra: R$");
		scanf("%f", &valorEntrada);
		
		if(valorEntrada<=500){
			valorSaida = 0.05 * valorEntrada;
			printf("O valor total a ser pago : R$%2.f. \nCom o desconto de : R$%2.f.", (valorEntrada-valorSaida), valorSaida);
		}else{
			valorSaida = 0.05 * valorEntrada;
			printf("O valor total a ser pago : R$%2.f. \nCom o desconto de : R$%2.f. \n ", (valorEntrada-valorSaida), valorSaida);
		}
	
		printf("\nDigite um numero: \n 1 - para repetir. \n 0 - para fechar. \n");
		scanf("%d", &resp);
	} while (resp==1);
}
