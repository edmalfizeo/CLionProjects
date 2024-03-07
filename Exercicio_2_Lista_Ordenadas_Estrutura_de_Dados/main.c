#include <stdio.h>
#include <string.h>
char nome[10][80];
void Ordenar();

int main() {
    for(int i = 0;i <= 9; i++) {
        printf("\nDigite o %d nome: ",i + 1);
        gets(nome[i]);
    }

    Ordenar();
    printf("\nNomes Ordenados: \n");
    for (int i = 0; i <= 9; ++i) {
        puts(nome[i]);
    }
    return 0;
}


void Ordenar() {
    int n;
    char aux[80];
    for(int i=0; i <= 9; i++) {
        for(int j= i+1; j <= 9; j++) {
            n = strcmp(nome[i], nome[j]);
            if(n > 0) {
                strcpy(aux,nome[i]);
                strcpy(nome[i],nome[j]);
                strcpy(nome[j],aux);
            }
        }
    }
}