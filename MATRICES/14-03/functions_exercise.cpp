#include <iostream>

using namespace std;

// Size
void sizeMat(int &rows, int &cols) {
    cout << "Enter the size of rows: " << endl; cin >> rows;
    cout << "Enter the size of cols: " << endl; cin >> cols;
}

// Create matriz

// Insert data into matriz
// Print

int main()
{
    int rows = 0, cols = 0;
    sizeMat(rows, cols);
    cout << rows << endl;
    cout << cols << endl;
    return 0;
}