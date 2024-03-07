#include <stdio.h>

int acharNumero(int numero, int vetor[]);

int main() {
    int vetor[6], numero;
    for (int i = 0; i < 6; ++i) {
        printf("\nDigite um valor: ");
        scanf("%d",&vetor[i]);
    }
    printf("\nDigite o numero que deseja buscar o indice: ");
    scanf("%d",&numero);
    acharNumero(numero,vetor);
    printf("\n%d", acharNumero(numero,vetor));
    return 0;
}

int acharNumero(int numero,int vetor[]) {
    for (int i = 0; i < 6; ++i) {
        if(vetor[i] == numero) {
            return i;
        }
    }
    return -1;
}

