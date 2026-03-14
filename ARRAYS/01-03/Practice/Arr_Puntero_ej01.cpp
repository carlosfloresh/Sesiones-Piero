//
// Created by cfloresh on 01/03/2026.
//

#include <iostream>
using namespace std;
// Curso Desarrollo -> n notas
// Calcular el promedio, y ademas cuantas y cuales notas son mayores al promedio.
// Declarar el arr -> cin -> guardar ->
int main()
{
    int n;
    cout << "Ingrese una cantidad de numbers para su arrays: " << endl;
    cin >> n;
    int* notas = new int[n];
    cout << "A continuacion, ingresa la nota que sacaste en cada curso." << endl;
    int acumulador = 0, promedio = 0, nota = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Nota en el curso " << i + 1 << ": ";
        cin >> nota;
        notas[i] = nota;
    }
    for (int i = 0; i < n; i++)
    {
        acumulador += notas[i];
    }
    promedio = (acumulador / n);
    cout << "La nota promedio es: " << promedio << endl;
    cout << "Notas mayores al promedio.." << endl;
    for (int i = 0; i < n; i++)
    {
        if (notas[i] > promedio) cout << "Nota " << i << ": " << notas[i] << endl;
    }
    delete[] notas;
    return 0;
}