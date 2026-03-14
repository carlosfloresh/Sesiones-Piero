//
// Created by cfloresh on 01/03/2026.
//

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {65, 12, 98, 100, -5};

    int *p = arr;
    cout << p << endl;
    cout << *p << endl;
    cout << *p+1 << endl;
    cout << *(p+1)<< endl;
    cout << *(p+2)<< endl;

    return 0;
}