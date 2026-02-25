#include <iostream>
using namespace std;
int main() {
    int mat1[4][4] = { {5,1,3,9},{90,465,5,1},{15,0,89,-5},{-88,-6,478,-500} };
    int mat1_inverse[4][4] = {0};

    // 5    1       3       9
    // 90   465     5       1
    // 15   0       89      -5
    // -88  -6      478     -500

    // 5    90  15  -88
    // 1    465  0   -6
    // 3    5   89   478
    // 9    1   -5   -500
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            mat1_inverse[i][j] = mat1[j][i];
        }
    }

    // imprimir
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << mat1[i][j]<<" ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << mat1_inverse[i][j]<<" ";
        }
        cout << endl;
    }


    return 0;
}