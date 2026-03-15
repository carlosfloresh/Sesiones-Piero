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

int** createMixOfTwoMatricez(int **mat1, int **mat2, int rows, int cols, int rows1, int cols1, int rows2, int cols2) {
    int** mat = new int*[rows];
    for(int i = 0; i < rows; ++i) {
        mat[i] = new int[cols];
    }
    for(int i = 0; i < rows1; ++i) {
        for(int j = 0; j < cols1; ++j) {
            mat[i][j] = mat1[i][j];
        }
    }
    for(int i = rows1; i < rows1 + rows2; ++i) {
        for(int j = cols1; j < cols1 + cols2; ++j) {
            mat[i][j] = mat2[i][j];
        }
    }
    return mat;
}

int main()
{
    cout<<"Write the size you would like for the first mat: " << endl;
    int rows1 = 0, cols1 = 0, rows2 = 0, cols2 = 0, rows3 = 0, cols3 = 0;
    sizeMat(rows1, cols1);
    int** mat1 = createMatriz(rows1, cols1);
    insertMatriz(mat1, rows1, cols1);
    cout<<"Your mat 1 is:"<<endl;
    printMatriz(mat1, rows1, cols1);
    cout<<"Write the size you would like for the second mat: " << endl;
    sizeMat(rows2, cols2);
    int** mat2 = createMatriz(rows2, cols2);
    insertMatriz(mat2, rows2, cols2);
    cout<<"Your mat 2 is:"<<endl;
    printMatriz(mat2, rows2, cols2);
    rows3 = rows1 + rows2;
    cols3 = cols1 + cols2;
    cout<<"your mashup is: "<<endl;
    int** mat3 = createMixOfTwoMatricez(mat1, mat2, rows3, cols3, rows1, cols1, rows2, cols2);
    printMatriz(mat3, rows3, cols3);
    return 0;
}