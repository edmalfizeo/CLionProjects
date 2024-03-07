#include <stdio.h>
int base2(int n);

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("%d", base2(n));
    return 0;
}

int base2(int n) {
    if(n == 0) {
        return 1;
    }
    return 2 * base2(n - 1);
}