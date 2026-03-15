#include <iostream>

using namespace std;

// Size

// Pointers
void sizeMatP(int *rows, int *cols) {
    cout << "Enter the size of rows: " << endl; cin >> *rows;
    cout << "Enter the size of cols: " << endl; cin >> *cols;
}
// Reference
void sizeMatR(int &rows, int &cols) {
    cout << "Enter the size of rows: " << endl; cin >> rows;
    cout << "Enter the size of cols: " << endl; cin >> cols;
}

// Create matriz

// Insert data into matriz
// Print

int main()
{
    int rows = 0, cols = 0;
    sizeMatP(&rows, &cols);
    sizeMatR(rows, cols);
    return 0;
}