#include <stdio.h>
int quadradoPerfeito(int n);

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d" ,&n);
    printf(" = %d",quadradoPerfeito(n));
    return 0;
}

int quadradoPerfeito(int n) {
    if(n == 1) {
        printf("%d",1);
        return 1;
    }
    printf("%d + ",n * n);
    return n * n + quadradoPerfeito(n - 1);
}
