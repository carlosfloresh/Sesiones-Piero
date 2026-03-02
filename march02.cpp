/*El usuario ingresa N números y tu programa debe imprimir el segundo y tercer mayor (distinto):

❌ sin vector

❌ sin re ordenar (nada de bubble / sort)

✅ solo recorriendo el arreglo y manteniendolo en variables*/

//[1] [2] [3]
//A    B   C

//[1] [2] [3]
//D    A   B




// Al momento de leer el numero vamos haciendo la comparacion
#include <iostream>
using namespace std;

int main()
{
    int max1=-9999;
    int max2=-9999;
    int max3=-9999;
    int size;
    cout << "Ingrese un numero: ";
    cin >> size;
    int* arreglo = new int[size];

    for (int i = 0; i < size; i++) {
        int number;
        cout << "Ingrese un numero ["<<i<<"]: ";
        cin >> number;
        arreglo[i] = number;
    }
    for (int i = 0; i < size; i++) {
        if ( arreglo[i] > max1) {
            max3 = max2;
            max2 = max1;
            max1 = arreglo[i];
        }
    }
    cout << "1: PRIMER LUGAR: "<< max1 << endl;
    cout << "2: SEGUNDO LUGAR: "<< max2 << endl;
    cout << "3: TERCER LUGAR: "<< max3 << endl;

    return 0;
}