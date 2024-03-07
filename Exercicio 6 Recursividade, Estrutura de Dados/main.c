#include <stdio.h>
int multSoma(int n,int a);

int main() {
    int n, a;
    printf("Digite a quantidade de vezes que deseja somar: ");
    scanf("%d", &n);
    printf("\nDigite o numero que deseja multiplicar: ");
    scanf("%d", &a);
    printf("\n%d", multSoma(n,a));
    return 0;
}

int multSoma(int n, int a) {
    if(n == 0) {
        return 0;
    }else{
        return a + multSoma(n - 1, a);
    }
}