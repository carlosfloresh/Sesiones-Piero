#include <iostream>
using namespace std;
int main() {
    int mat1[4][3] = { {5,1,3},{90,465,5},{15,89,-5},{-88,478,-500} };
    int mat2[4][3] = { {3,8,8},{5,9,9},{5,-8,-6},{-5,9,1}};

    int mat3[4][3] = {0};
    // Yo quiero declarar una mat3, donde sean la suma de las otras 2 mat.
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            mat3[i][j] = mat1[i][j]+mat2[i][j];
            cout << mat3[i][j] << endl;
        }
    }
    return 0;
}