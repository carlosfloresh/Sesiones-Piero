//
// Created by cfloresh on 01/03/2026.
//

#include <iostream>
using namespace std;
// Curso Desarrollo -> 5 notas
// Calcular el promedio, y ademas cuantas y cuales notas son mayores al promedio.
// Declarar el arr -> cin -> guardar ->
int main()
{
    int notas[5];
    int *p = notas;
    cout << "A continuacion, ingresa la nota que sacaste en cada curso." << endl;
    int acumulador = 0, promedio = 0, nota = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Nota en el curso " << i + 1 << ": ";
        cin >> *(p+i);
        acumulador += *(p+i);
    }
    promedio = (acumulador / 5);
    cout << "La nota promedio es: " << promedio << endl;
    cout << "Notas mayores al promedio.." << endl;
    for (int i = 0; i < 5; i++)
    {
        if (*(p+i) > promedio) cout << "Nota " << i << ": " << *(p+i) << endl;
    }
}