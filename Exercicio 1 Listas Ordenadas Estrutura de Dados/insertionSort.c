void insertionSort(int *num, int tam) {
    int i, j, atual;
    for (i = 1; i < tam; i++){
        atual = num[i];
        j = i - 1;
        while ((j>=0) && (atual < num[j])) {
            num[j+1] = num[j];
            j--;
        }
        num[j+1] = atual;
    }
}
