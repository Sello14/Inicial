#include <stdio.h>

int main()
{
	// Este programa mostra as letras 'pequenas'...
	char c = 'a';
	
	while(c <= 'z')
	{
		printf("\nLetra %c = %d", c, c);
		c++;
		//c = c + 1;
	}
	
	printf("\n"); // Linha em branco
		
	int k = 1;
	while(k <= 22){
		printf("�");
		k = k +1;
	}
	
	int num = 100;
	while( num <= 200){
		printf("\n%d", num);
		num++;
	}
	
	printf("\n컴컴컴컴컴컴컴컴컴컴컴"); 
	
	char d = 'A';
	
	while(d <= 'Z')
	{
		printf("\nLetra %c = %d", d, d);
		d = d + 1;
	}
	
	printf("\n컴컴컴컴컴컴컴컴컴컴컴");
	
	
	// Desenhar um rect긪gulo usando caracteres da tabela ASCII.
	
	
	return 0;
}