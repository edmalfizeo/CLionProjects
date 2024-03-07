#include <stdio.h>

int somar(int numero){
    if(numero == 1) {
        return 1;
    }else {
        return numero + somar(numero-1);
    }
}
int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d",&numero);

    printf("%d",somar(numero));
}

