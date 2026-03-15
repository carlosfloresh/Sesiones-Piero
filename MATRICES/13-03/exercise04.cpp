#include <iostream>
using namespace std;
// Decirle al usuario ingrese filas y columnas ---> crear esa matriz dinamicamente y rellenar e imprimirlo.
// Iniciar un matriz de forma dinamica... [a][b]
// Iniciar un matriz de forma dinamica... [a][b]

// Iniciar un mat+mat2 de forma dinamica...
// Iniciar un matriz de forma dinamica... [2a][2b]
// Imprimir el size y los elementos

void sizeMat(int &rows, int &cols) {
    cout << "Enter the size of rows: " << endl; cin >> rows;
    cout << "Enter the size of cols: " << endl; cin >> cols;
}

// Create matriz
int** createMatriz(int rows, int cols) {
    int** mat = new int*[rows];
    for(int i = 0; i < rows; ++i) {
        mat[i] = new int[cols];
    }
    return mat;
}

// Insert data into matriz
void insertMatriz(int** mat, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "mat[" << i << "][" << j << "] = ";
            cin >> mat[i][j];
        }
    }
}

// Print
void printMatriz(int **mat, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

// Leak memory
void deleteMatriz(int **mat, int rows) {
    for(int i = 0; i < rows; ++i) {
        delete[] mat[i];
    }
    delete[] mat;
}

int** createMixOfTwoMatricez(int **mat1, int **mat2, int rows, int cols) {
    int** mat = new int*[rows];
    for(int i = 0; i < rows; ++i) {
        mat[i] = new int[cols];
    }
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            mat[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    return mat;
}

int main()
{
    cout<<"Write the size you would like for the mats: " << endl;
    int rows = 0, cols = 0;
    sizeMat(rows, cols);
    int** mat1 = createMatriz(rows, cols);
    insertMatriz(mat1, rows, cols);
    cout<<"Your mat 1 is:"<<endl;
    printMatriz(mat1, rows, cols);
    cout<<"Write what would you like for the second mat: " << endl;
    int** mat2 = createMatriz(rows, cols);
    insertMatriz(mat2, rows, cols);
    cout<<"Your mat 2 is:"<<endl;
    printMatriz(mat2, rows, cols);
    cout<<"your mashup is: "<<endl;
    int** mat3 = createMixOfTwoMatricez(mat1, mat2, rows, cols);
    printMatriz(mat3, rows, cols);
    return 0;
}