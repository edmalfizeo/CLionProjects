void bubbleSort(int *num, int tam) {
    int aux;
    for (int i = tam - 1; i >= 1; i--) {
        for (int j = 0; j < i; ++j) {
            if(num[j]>num[j + 1]) {
                aux = num[j];
                num[j] = num[j + 1];
                num[j + 1] = aux;
            }
        }
    }
}