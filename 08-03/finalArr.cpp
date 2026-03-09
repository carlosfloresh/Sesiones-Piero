#include <iostream>
using namespace std;
// Iniciar un array de forma dinamica...  3 [1,2,3]
// Declarar el arr -> cin -> guardar

// Iniciar un array2 de forma dinamica... 2 [100,-5]
// Declarar el arr2 -> cin -> guardar

// Iniciar un arr+arr2 de forma dinamica... arr5[1,2,3,100,-5]
// Imprimir el size y los elementos
int main() {
    int n1, n2;
    cout << "Ingrese una cantidad de numbers para su array 1: " << endl;
    cin >> n1;
    int* arreglo1 = new int[n1];
    cout << "A continuacion, ingresa los valores para el primer arreglo" << endl;
    for (int i = 0; i < n1; i++)
    {
        cout << "Valor para la posicion " << i << ": ";
        cin >> arreglo1[i];
    }
    cout << endl;
    cout << "Ingrese una cantidad de numbers para su array 2: " << endl;
    cin >> n2;
    int* arreglo2 = new int[n2];
    cout << "A continuacion, ingresa los valores para su segundo arreglo" << endl;
    for (int i = 0; i < n1; i++)
    {
        cout << "Valor para la posicion " << i << ": ";
        cin >> arreglo2[i];
    }
    int n3 = n1 + n2;
    int* arreglo3 = new int[n3];

    for (int i = 0; i < n1; i++) {
        arreglo3[i] = arreglo1[i];
    }
    for (int i = 0; i < n2; i++) {
        arreglo3[n1+i] = arreglo2[i];
    }
    cout << "Tu arreglo final seria: " << endl;
    for (int i = 0; i < n3; i++) {
        cout << arreglo3[i] << endl;
    }
    cout << endl;
    delete []arreglo1;
    delete []arreglo2;
    delete []arreglo3;
    return 0;
}