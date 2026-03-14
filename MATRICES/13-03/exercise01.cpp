#include <iostream>
using namespace std;
// Decirle al usuario ingrese filas y columnas ---> crear esa matriz dinamicamente y rellenar e imprimirlo.
int main() {

    int rows, cols;
    cout << "Enter number of rows: "; cin >> rows;
    cout << "Enter number of columns: "; cin >> cols;

    // create dynamic matriz
    int** mat = new int*[rows];
    for(int i = 0; i < rows; ++i) {
        mat[i] = new int[cols];
    }

    // read data and put
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "mat[" << i << "][" << j << "] = ";
            cin >> mat[i][j];
        }
    }

    // print data
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    // free up memory
    for(int i = 0; i < rows; ++i) {
        delete[] mat[i];
    }
    delete[] mat;


    return 0;
}
