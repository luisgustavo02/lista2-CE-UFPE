#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//BIBLIOTECAS ADICIONADAS

int main() {
	int i, pontmin, alunos, p1, p2, ptot;
	
	fflush(stdin);
	scanf(" %i", &i);
	fflush(stdin);
	scanf(" %i", &pontmin);
	fflush(stdin);
	alunos = 0;
	
	while(i!=0){
		fflush(stdin);
		scanf(" %i", &p1);
		fflush(stdin);
		scanf(" %i", &p2);
		fflush(stdin);
		ptot = p1 + p2;
		i = i-1;
		if(p1!=0 && p2!=0 && ptot >= pontmin){
			alunos = alunos + 1;
		}
	}
	printf("%i", alunos);
	
	return 0;
}
