#include <stdio.h>
int x (int n);
int main() {
    int n;
    printf("Digite um numero :");
    scanf("%d", &n);
    printf("%d", x(n));
    return 0;
}

int x (int n){
    if(n == 1 || n == 2) {
        return n;
    }
    return x(n - 1) + n * x(n - 2);
}