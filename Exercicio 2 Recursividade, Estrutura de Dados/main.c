#include <stdio.h>
int fib(int n);

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for (int i = 0; i < 10; ++i) {
        printf("%d ",fib(i));
    }
    return 0;
}

int fib(int n) {
    if(n == 0 || n == 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}