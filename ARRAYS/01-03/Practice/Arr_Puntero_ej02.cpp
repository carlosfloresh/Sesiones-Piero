//
// Created by cfloresh on 01/03/2026.
//

#include <iostream>
// El usuario dice cuantos nums quiere ingresar.
// inicialziar arr -> cargar nums -> imprimir -> liberar memoria
using namespace std;
int main()
{
    int n;
    cout << "Ingrese una cantidad de numeros para su arreglo: " << endl;
    cin >> n;
    int* arreglo = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese un numero para la posicion " << i << ": ";
        cin >> arreglo[i];
        cout << endl;
    }
    cout << "tu arreglo entero seria:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arreglo[i] << endl;
    }
    delete[] arreglo;
    return 0;
}