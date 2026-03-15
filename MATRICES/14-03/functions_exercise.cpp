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
// Print

int main()
{
    int rows = 0, cols = 0;
    sizeMat(rows, cols);
    cout << rows << endl;
    cout << cols << endl;
    createMatriz(rows, cols);
    return 0;
}