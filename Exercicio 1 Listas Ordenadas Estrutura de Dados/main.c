#include <stdio.h>
#include <string.h>

void bubbleSort(int *num, int tam);
void insertionSort(int *num, int tam);
void selectionSort(int *num, int tam);
void stringSort();

int main() {
    int num[10],tam;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tam);
    for (int i = 0; i < tam; ++i) {
        printf("\nDigite o numero na posicaoo %d: ",i);
        scanf("%d",&num[i]);
    }
    insertionSort(num,tam);
    for (int i = 0; i < tam; ++i) {
        printf("%d ",num[i]);
    }
    return 0;
}





