cmake_minimum_required(VERSION 3.27)
project(Exercicio_1_Listas_Ordenadas_Estrutura_de_Dados C)

set(CMAKE_C_STANDARD 17)

add_executable(Exercicio_1_Listas_Ordenadas_Estrutura_de_Dados main.c
        insertionSort.c
        bubbleSort.c
        selectionSort.c
)
