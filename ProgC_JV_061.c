#include <stdio.h>
#include <stdio.h>

/**
	Tema: Leituras [Input]
*/
	
void mudaLinha(void); //prototipo
void meuCarimbo(void); //prototipo

void main(void) //Programa principal
{
	meuCarimbo();
	mudaLinha();
	
	/*---------------------------------------------------- */
	//1º ex (com caracteres)
	
	char c1, c2;
	
	printf("escrever um caracter: ");
	scanf("%c", &c1);
	
	printf("Escrever outro caracter: ");
	scanf("%c", %c2);
	
	printf("Os caracteres lidos foram '%c' e '%c'", c1, c2);
	mudaLinha(); mudaLinha();
	
}

// ------------------------------------------
// Função que mostra (algumas) informações gerais
	void meuCarimbo(void)
	{
		time_t tempo_atual = time(NULL);
		struct tm *tempo_local = localtime(&tempo_atual);
		char data_hora[64];
		strftime(data_hora, sizeof(data_hora), "%d-%m-%Y %H:%M:%S", tempo_local);
		printf("\n[António Fonseca] - [ %s ]", data_hora);
		mudaLinha();
	}