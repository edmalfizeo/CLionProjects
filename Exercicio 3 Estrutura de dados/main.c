#include <stdio.h>

int main() {
    int vetor[8], vetorInvertido[8];
    for (int i = 0; i < 8; ++i) {
        printf("\nDigite um valor: ");
        scanf("%d",&vetor[i]);
    }
    for (int i = 0; i < 8; ++i) {
        vetorInvertido[i] = vetor[7 - i];
    }
    for (int i = 0; i < 8; ++i) {
        printf("%d ",vetorInvertido[i]);
    }
    return 0;
}
