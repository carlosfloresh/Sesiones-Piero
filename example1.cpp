//
// Created by cfloresh on 24/02/2026.
//

#include <iostream>

using namespace std;

int main() {
    int mat[3][3];
    cout << "Enter matrix elements" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element of row " << i << " column " << j << ": ";
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "mat[" << i << "][" << j << "] = " << mat[i][j] << endl;
        }
    }
    return 0;
}
