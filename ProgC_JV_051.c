#include <stdio.h>
#include <stdint.h>
#include <stdbool.h> // Vari veis booleanas
#include <limits.h>
#include <float.h>

// chcp 860 (na linha de comandos, se for necess rio)

// ------------------------------------------
// Programa principal

void main(void)
{
	/* Valores m¡nimos e m ximos dos tipos de dados em 'C' */
	
	printf("Valores m¡nimos e m ximos dos tipos de dados em 'C':" );
	
	printf("\nsigned char: 	[%20d , %20d]"    	, SCHAR_MIN , SCHAR_MAX  ); // 
	printf("\nshort int:   	[%20d , %20d]"    	, SHRT_MIN  , SHRT_MAX   ); //
	printf("\nint: 			[%20d , %20d]"    	, INT_MIN   , INT_MAX    ); //
	printf("\nfloat:		[%20.5g , %20.5g]"  , FLT_MIN  	, FLT_MAX  	 ); 


}