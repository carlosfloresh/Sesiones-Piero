//
// Created by cfloresh on 01/03/2026.
//

#include <iostream>
using namespace std;


void imprimir(int arr[]) {
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
}

void imprimir2(int *p) {
    for (int i = 0; i < 5; i++) {
        cout << *(p+i) << " ";
    }
}

int main()
{
    int arr[5] = {10,20,30,40,50};
    imprimir2(arr);
    return 0;
}
