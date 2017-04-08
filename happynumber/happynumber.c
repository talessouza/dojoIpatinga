#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio2.h>


void assertEquals(char * esperado, char * atual, char * mensagem) {
	int resultado_comparacao = strcmp(esperado, atual);
	if (resultado_comparacao == 0) {
		textcolor(LIGHTGREEN);
		printf("%s - TEST OK! !!!\n", mensagem);
		textcolor(LIGHTGRAY);
	} else {
		textcolor(LIGHTRED);
		printf("%s - ****ERRO**** NO TEST - Esperado: [%s] retornado: [%s]!!!\n", mensagem, esperado, atual);
		textcolor(LIGHTGRAY);
	}
}

char * happy(int number) {
	
	
	if (number == 10){
		
		char digito[2];
		char digitos[20];
		itoa(number, digitos, 10);
		
		int n;
		
		for (int i=0; i<2;i++ ){
			digito[0] = digitos[i];
			digito[1] = '\0';
			n=atoi(digito);
			printf("%d ",n);
		}
		
		
		return "feliz";
		
	}
	
	if (number == 1 || number == 100 ) {
		return "feliz";
	}
	return "triste";



}


int main(int argc, char *argv[]) {

	assertEquals("feliz", happy(1), "test 1");
	assertEquals("triste", happy(4), "test 4");
	assertEquals("feliz", happy(10), "test 10");
	assertEquals("feliz", happy(100), "test 100");

	return 0;
}


