#include <iostream>
using namespace std;
// declare dynamic array
// int n1 = 5;
// int* arreglo1 = new int[n1];

int main() {
    int rows = 4;
    int columns = 6;
    // declare

    // int* a ->  puntero -> int   | a = 5    -----> xkashjk5453
    // int** a -> puntero -> puntero -> int   -----> xkashjk5453V2

    // int* a ->  xkashjk5453 -> 5
    // int** a -> xkashjk5453V2 -> xkashjk5453 -> 5

    int** mat = new int*[rows];       // array de punteros
    for(int i = 0; i < rows; ++i) {
        mat[i] = new int[columns];    // para cada fila -> arr
    }


    for(int i = 0; i < rows; ++i) {
        delete[] mat[i];
    }
    delete[] mat;


    return 0;
}