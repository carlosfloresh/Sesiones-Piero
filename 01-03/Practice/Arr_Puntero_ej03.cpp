//
// Created by cfloresh on 01/03/2026.
//

#include <iostream>
// Iniciar un array de forma dinamica....
// Declarar el arr -> cin -> guardar ->
// saber el mayor y menor numero.
using namespace std;
int main()
{
    int n;
    cout << "Ingrese una cantidad de numbers para su arrays: " << endl;
    cin >> n;
    int* notas = new int[n];
    cout << "A continuacion, ingresa la nota que sacaste en cada curso." << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Nota en el curso " << i + 1 << ": ";
        cin >> notas[i];
    }
    int mayor = notas[0], menor = notas[0];
    for (int i = 0; i < n; i++)
    {
        if (notas[i] > mayor) mayor = notas[i];
        if (notas[i] < menor) menor = notas[i];
    }
    cout << mayor << endl;
    cout << menor;
    return 0;
}