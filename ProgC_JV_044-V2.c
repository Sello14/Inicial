#include <stdio.h>

int main()
{

	printf("\n*************************"); 	
	
	// Mostra as letras 'grandes' e respetivos números
	// na tabela de código ASCII
	char c = 'a';
	while(c <= 'z')
	{
		printf("\nLetra %c = %d", c, c);
		c++; // ou outra forma, 'c = c + 1';
	}
	
	printf("\n"); // Mostra uma linha em branco
		
	/* Escreve um caráter (definido) 25 vezes */
	int k = 1;
	while( k <= 25 ){
		printf("*");
		k = k + 1; // ou outra forma, 'k++';
	}
	
	printf("\n"); // Mostra uma linha em branco

	/* 
	   Escreve os números de 100 até 200, 
	   na mesma linha, com um 'espaço'
	   entre cada número. 
	*/
	int num = 100;
	while( num <= 200){
		printf("%d ", num);
		num++; // ou outra forma, 'num = num + 1';
	}
	
	// Separa o outupt
	printf("\n*************************"); 
	
	// Mostra as letras 'grandes' e respetivos números
	// na tabela de código ASCII
	char d = 'A';
	while(d <= 'Z')
	{
		printf("\nLetra %c = %d", d, d);
		d = d + 1;
	}
	
	// Separa o outupt
	printf("\n*************************"); 	
	
	return 0;
}
