#include <iostream>
using namespace std;

int Fibo(int n);

int main(){
    int n;
    // pidiendo datos al usuario
    cout << "Digite que  n termino desea de la serie fibonacci: "; cin >> n;
    if(n < 0){
        cout << "No se puede buscar un n termino negativo!" << endl;
    }
    cout << "El termino " << n << "de la serie fibonacci es: " << Fibo(n); 
    cout << endl;
    return 0;
}

// funcion recursiva para el n termino
int Fibo(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }else{
        return Fibo(n - 1) + Fibo(n - 2);
    }
}