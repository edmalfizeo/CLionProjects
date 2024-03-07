#include <stdio.h>

int main() {
    int vetor[10], menorValor = 10, indiceMenorNumero;
    for (int i = 0; i < 10; ++i) {
        printf("\nDigite um valor %d",i);
        scanf("%d",&vetor[i]);
        if(vetor[i] < menorValor) {
            menorValor = vetor[i];
        }
    }
    for (int i = 0; i < 10; ++i) {
        if(vetor[i] == menorValor) {
            indiceMenorNumero = i;
        }
    }
    printf("\nMenor Valor: %d",menorValor);
    printf("\nIndice do menor valor: %d",indiceMenorNumero);
    return 0;
}
