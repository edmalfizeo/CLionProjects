#include <stdio.h>
void printPar(int n);

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printPar(n);
    return 0;
}

void printPar(int n) {
    if(n < 1) {
        return;
    }

    printPar(n - 1);

    if(n % 2 == 0){
        printf("%d ", n);
    }
}