#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//BIBLIOTECAS ADICIONADAS

int main() {
	int vez, num, esc, apar;
	
	printf("Digite a quantidade de numeros da sequencia:\n");
	scanf(" %i", &vez);
	printf("Digite o numero procurado:\n");
	scanf(" %i", &num);
	
	apar = 0;
	
	while(vez!=0){
		scanf(" %i", &esc);
		vez = vez - 1;
		if(esc==num){
			apar = apar + 1;
		}
	}
	
	printf("O numero %i apareceu na sequencia %i vezes.", num, apar);
	
	return 0;
}
