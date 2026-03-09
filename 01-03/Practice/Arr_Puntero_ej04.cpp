//
// Created by cfloresh on 01/03/2026.
//

#include <iostream>
// Iniciar un array de forma dinamica.... int (Z) enteros               /10 numbers
// Declarar el arr -> cin -> guardar ->                                 /3 positivos
// guardar mis numbers positivos en un 2do array de ese size exacto     / 2arr[3] <<<  ... luego imprimir
using namespace std;
int main()
{
    int n;
    cout << "Ingrese una cantidad de numbers para su arrays: " << endl;
    cin >> n;

    int positivos = 0;
    int* notas = new int[n]; // 5
    cout << "A continuacion, ingresa la nota que sacaste en cada curso." << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Nota en el curso " << i + 1 << ": ";
        cin >> notas[i];
        if (notas[i] > 0) positivos++;
    }
    for (int i = 0; i < n; i++) {
        cout << notas[i] << " ";
    }
    cout << endl;


    int nuevoArray[positivos]; // 2
    int cont = 0;
    for (int i = 0; i < n; i++) {
        if (notas[i] > 0) {
            nuevoArray[cont] = notas[i];
            cont++;
        }
    }
    cout << "Tu nuevo array con solo positivos es: " << endl;
    for (int i = 0; i < positivos; i++) {
        cout << nuevoArray[i] << " ";
    }
    cout << "Size: " << cont << endl;
    return 0;
}