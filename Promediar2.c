/* Informa la longitud promedio de las líneas
 * por Nahuel Lattessi
 * 20150511
 */

#include <stdio.h> /* getchar EOF feof perror printf */
#include <stdlib.h> /* EXIT_SUCCESS */

int main(void) {
	int nl; /* la cantidad de lineas */
	int nc; /* la cantidad de caracteres */
	int c; /* el caracter leido */

	for(nl = nc = 0; ( c = getchar()) != EOF;)
		if(c == '\n')
			++nl;
		else
			++nc;

	if( ferror(stdin) )
		perror("No se pudo seguir leyendo de la entrada debido a un error");

	printf("Longitud promedio: %.1f\n", (nl == 0 && nc == 0) ? 0 : (nc + 1) / (float)(nl + 1));

	printf("Cantidad de lineas: %i\n", (nl == 0 && nc == 0) ? 0 : nl + 1);
	printf("Cantidad de caracteres: %i\n", (nl == 0 && nc == 0) ? 0 : nc + 1);
	
	return EXIT_SUCCESS;
}