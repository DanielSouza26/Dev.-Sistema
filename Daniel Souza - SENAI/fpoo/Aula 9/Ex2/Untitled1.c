 #include <stdlib.h>
#include <stdio.h>
#include <time.h>

void main(void) {
    int numeroSorteado, i;
    
    int funcao(){
    	return rand() % 10;
	}

    char* nomes[10];

    nomes[0] = "Oseias";
    nomes[1] = "Miria";
    nomes[2] = "ana";
    nomes[3] = "Carlos";
    nomes[4] = "Creusa";
    nomes[5] = "jubis";
    nomes[6] = "marta";
    nomes[7] = "julia";
    nomes[8] = "fulano";
    nomes[9] = "ciclano";

    srand(time(NULL));

    for (i = 0; i < 2; i++) {
        numeroSorteado = rand() % 4;
        printf("O sorteado foi: %s\n", nomes[numeroSorteado]);
    }
}
