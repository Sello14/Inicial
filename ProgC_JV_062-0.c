#include <stdio.h>

int main(){

int i, inicio, fim, somatorio = 0;

printf("Valor de incio: ");
scanf("%d", &inicio);

printf("Valor de fim: ");
scanf("%d", &fim);

for( i = inicio; i <= fim; i++ )
{
	somatorio += i;
}

//i = inicio;
//while( i <= fim ){
//	somatorio += i;
//	i++;
//}
	

printf("o somatorio dos numeros de %d a %d e %d: ", inicio, fim, somatorio);

return 0;

}