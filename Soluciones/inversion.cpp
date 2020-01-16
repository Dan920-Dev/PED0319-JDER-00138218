#include <iostream>
using namespace std;

void invertirArreglo(int* A, int* B, int size);

int main(){
    int size = 0;
    cout << "Tamaño del arreglo: "; cin >> size;

    if(size < 2){
        cout << "ERROR" << endl;
        return 0;
    }

    int *A, *B;
    A = new int[size]; B = new int[size];

    for(int i = 0; i < size; i++){
        cout << "Valor: "; cin >> A[i];
    }

    invertirArreglo(A, B, size);

    cout << "Arreglo A: ";
    for(int i = 0; i < size; i++){
        cout << A[i] << " ";
    }

    cout << "Arreglo B: ";
    for(int i = 0; i < size; i++){
        cout << B[i] << " ";
    }

    return 0;
}

void invertirArreglo(int* A, int* B, int size){
    int aux=0;
    for(int i = size - 1; i >= 0; i--){
        B[aux] = A[i];
        aux++;
    }
}