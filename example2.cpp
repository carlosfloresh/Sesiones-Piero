//
// Created by cfloresh on 24/02/2026.
//

#include <iostream>

using namespace std;

int main() {
    int mat[4][3] = { {5,1,3},{90,465,5},{15,89,-5},{-88,478,-500} };

    // Rows
    for (int i = 0; i < 4; i++) {
        int sumRows = 0;
        for (int j = 0; j < 3; j++) {
            sumRows += mat[i][j];
        }
        cout << "Suma de la fila "<<i<<": "<<sumRows<<endl;
    }

    // Column
    for (int i = 0; i < 3; i++) {
        int sumColumns = 0;
        for (int j = 0; j < 4; j++) {
            sumColumns += mat[i][j];
        }
        cout << "Suma de la fila "<<i<<": "<<sumColumns<<endl;
    }

    // Big Element
    int bigElement = mat[0][0];
    int bigRow = 0; int bigColumn = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (mat[i][j] >mat[0][0]) {
                bigElement = mat[i][j];
                bigRow = i;
                bigColumn = j;
            }
        }
    }
    cout << "Mayor elemento de la matriz: "<<bigElement<<". Posicionamiento: ["<<bigRow<<"]["<<bigColumn<<"]"<<endl;
    return 0;
}