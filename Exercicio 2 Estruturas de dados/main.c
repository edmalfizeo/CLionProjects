#include <stdio.h>

int main() {
    int soma = 0, N;
    printf("Digite ate qual numero quer somar: ");
    scanf("%d",&N);
    for (int i = 0; i < N; ++i) {
        soma += i;
    }
    printf("a soma dos numeros e: %d",soma);
    return 0;
}
