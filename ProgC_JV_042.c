#include <stdio.h>

int main()
	{
		// Neste programa pretende-se mostrar
		// alguns exemplos de uso da instrução
		// 'printf()' - saída de dados (output).
		// 
		
		// Aproveitamos a deixa e usamos também
		// alguns tipos de dados permitidos em 'C'.
		
		char c	 	= 'a';
		char l[]	= "programa";
		float x	 	= 34561256.9871;
		double y 	= 76534213.9871;

		/* Mostrar valores */
		printf("Joao Vasconcellos");
		printf("\n");
		printf("Linha de texto simples.\n");
		printf("c: %c	\n", 	c);
		printf("c: (%d)	\n", 	c);		
		printf("x: %f	\n", 	x);
		printf("y: %g	\n", 	y);
		printf("l: %s	\n",	l);
		printf("l: %c	\n",	l);
		printf("\n");
		
		// o mesmo, mas agora usando só uma linha de código
		printf("c: %c (%d), x: %f, y: %g, l: %s \n", c, c, x, y, l);
		
		/*
			O resultado da execução do programa é mostrado
			no ecrã, mas também podemos guardar resultados 
			dessa execução em ficheiros de texto
				./ProgC_AF_042 > ProgC_AF_042.txt
			Para visualizar o ficheiro criado:
				type .\ProgC_AF_042.txt
			Se quisermos acrescentar informação ao ficheiro
			de texto devemos usar o símbolo '>>':
				./ProgC_AF_042 >> ProgC_AF_042.txt
		*/
		
		return 0; 
}