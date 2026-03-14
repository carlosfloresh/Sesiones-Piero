#include <iostream>
using namespace std;
// Decirle al usuario ingrese filas y columnas ---> crear esa matriz dinamicamente y rellenar e imprimirlo.
// Encontrar e imprimir el elemento mayor y su pocision
int main() {
    int rows, cols, mayor = 0;
    int posiRows = 0, posiCols = 0;
    cout << "Enter number of rows: "; cin >> rows;
    cout << "Enter number of columns: "; cin >> cols;
    // create dynamic matriz
    int** mat = new int*[rows];
    for(int i = 0; i < rows; ++i) {
        mat[i] = new int[cols];
    }
    cout<<"write the value that you want at .."<<endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "mat[" << i << "][" << j << "] = ";
            cin >> mat[i][j];
        }
    }

    // print data
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat[i][j] > mayor) {
                mayor = mat[i][j];
                posiRows = i;
                posiCols = j;
            }
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"the mayor value es: " << mayor << " y se encuentra at " << posiRows << posiCols << endl;
    return 0;
}