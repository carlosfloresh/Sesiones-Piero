#include <iostream>

using namespace std;
// Iniciar un array de forma dinamica...  3 [1,2,3]
// Declarar el arr -> cin -> guardar

// Iniciar un array2 de forma dinamica... 2 [100,-5]
// Declarar el arr2 -> cin -> guardar

// Iniciar un arr+arr2 de forma dinamica... arr5[1,2,3,100,-5]
// Imprimir el size y los elementos

int size() {
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    return n;
}
int* createArray(int n) {
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    return arr;
}
void printArray(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    // Arr1
    int size1 = size();
    int* arr = createArray(size1);
    printArray(arr, size1);

    // Arr2
    int size2 = size();
    int* arr2 = createArray(size2);
    printArray(arr2, size2);

    delete arr;
    return 0;
}