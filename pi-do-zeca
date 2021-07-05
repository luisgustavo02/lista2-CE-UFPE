#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//BIBLIOTECAS ADICIONADAS

double eq1(int x){
	double y;
	int i;		
	
	for(i=0;i<x;i++){
		y += pow(-1.0,i)/((2.0*i)+1.0);
	}
	return y;
}

double eq2(int x){
	double y;
	int i;
	
	for(i=0;i<x;i++){
		y += 2/((4.0*i + 1.0)*(4.0*i + 3));
	}
	return y;
}

double eq3(int x){
	double y=3.0;
	int d1=2, d2=3, d3=4, i;
	
	for(i=0;i<x-1;i++){
		y += (4 * pow(-1.0,i))/(d1 * d2 * d3);
		d1 += 2.0;
		d2 += 2.0;
		d3 += 2.0;
	}
	return y;
}
int main(){
	int num;
	
	scanf(" %i", &num);
	
	printf("%.6lf - %.6lf\n", eq1(num)*2.0, (eq1(num)*4.0)/M_PI);
	printf("%.6lf - %.6lf\n", eq2(num)*4.0, (eq2(num)*4.0)/M_PI);
	printf("%.6lf - %.6lf", eq3(num), eq3(num) / M_PI);
	
	return 0;
}
