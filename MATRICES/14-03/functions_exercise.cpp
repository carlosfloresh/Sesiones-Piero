#include <iostream>

using namespace std;

// Size
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

int main()
{
    int rows = 0, cols = 0;
    sizeMat(rows, cols);
    int** mat = createMatriz(rows, cols);
    insertMatriz(mat, rows, cols);
    printMatriz(mat, rows, cols);
    deleteMatriz(mat, rows);
    return 0;
}