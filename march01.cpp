/*El usuario ingresa N números y tu programa debe imprimir el segundo y tercer mayor (distinto):

❌ sin vector

❌ sin re ordenar (nada de bubble / sort)

✅ solo recorriendo el arreglo y manteniendolo en variables*/


#include <iostream>
using namespace std;
void crearArreglo(int n, int arreglo[]) {
    int num;
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el numero que desea para la posicion " << i << ": ";
        cin >> num;
        cout << endl;
        arreglo[i] = num;
    }
    cout << "Tu arreglo actual es: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arreglo[i] << endl;
    }
}
void ordenarArreglo(int n, int arreglo[]) {
    for (int i = 0; i < n; i++)
    {

    }
}
int main()
{
    int n;
    cout << "Ingrese una cantidad de numeros para su arreglo: " << endl;
    cin >> n;
    int* arreglo = new int[n];
    crearArreglo(n, arreglo);
    return 0;
}