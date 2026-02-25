#include <iostream>
using namespace std;
int main() {
    int mat[4][3] = { {5,1,3},{90,465,5},{15,89,-5},{-88,478,-500} };
    //1. suma de filas
    int sumaFila1 = 0, sumaFila2 = 0, sumaFila3 = 0, sumaFila4 = 0;
    int sumaColumna1 = 0, sumaColumna2 = 0, sumaColumna3 = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 0) sumaFila1 += mat[i][j];
            else if (i == 1) sumaFila2 += mat[i][j];
            else if (i == 2) sumaFila3 += mat[i][j];
            else if (i == 3) sumaFila4 += mat[i][j];
        }
    }
    //2. suma de columnas
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 0) sumaColumna1 += mat[i][j];
            else if (j == 1) sumaColumna2 += mat[i][j];
            else if (j == 2) sumaColumna3 += mat[i][j];
        }
    }
    cout << "La suma de filas es: " << sumaFila4 << endl;
    cout << "La suma de columnas es: " << sumaColumna3 << endl;
    cout << "Mayor elemento de la matriz y en que posicionamiento: " << endl;
    return 0;
}