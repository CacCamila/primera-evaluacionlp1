/*
realice un programa que reciba un nuemero entero 
y diga si es par y muestre
 cuales son sus divisores 

*/


#include <stdio.h>

int main(){
	
	int numero = 0 ;
	printf ("\t ingrese un numero entero \n ");
	scanf ("%d",&numero);

	if(numero %2==0){
	printf("numero: %d ingresado es par ", numero);
	
	}
	else{
printf("numero %d ingresado no es par " , numero);		
		
	}
	
	for(int i=1 ;i<numero; i++){
		if(numero %i==0){
			printf("el numero %d es divisor de %d", i, numero);}}
		
	
	
}
