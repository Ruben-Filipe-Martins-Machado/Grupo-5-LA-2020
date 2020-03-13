#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUF_SIZE 1024
#include "dados.h"
#include "logica.h"

// Função modificada
void mostrar_tabuleiro(COORDENADA c) {
    int i, j;
    for (i = 0 ; i < 8; i++){
        for (j = 0 ; j < 8; j++) {
            if (i == 0 && j == 8 ) printf ("2");
            else if ( i == 8 && j == 0 ) printf ("1");
            else if ( i == c.coluna && j == c.linha )  printf ("*");
            else printf (".");

        }
        printf ("\n");
    }

}
// Modificada e por completar.
int interpretador (ESTADO *e) {
    char linha [BUF_SIZE];
    char col[2], lin[2];
    if (fgets(linha, BUF_SIZE, stdin) == NULL)
        return 0;
    if (strlen(linha) == 3 && sscanf(linha, "%[a-h]%[1-8]", col, lin) == 2) {
        COORDENADA coord = {*col - 'a', *lin - '1'};
        jogar(e, coord);
        mostrar_tabuleiro(coord);
    }
    return 1;
}
