#include <iostream>
#include <cmath>
using namespace std;

float invert(int n, float res);

int main(){
    int n;
    float res = 0;
    // pidiendo datos al usuario y comprobando que sean numero natural
    cout << "Digite el numero que desea inveertir: "; cin >> n;

    if(n <= 0)
    cout << "El numero ingresado no es un numero natural " << endl;

    if( n > 0)
    cout << "El numero invertido es: " << invert(n, 0) << endl;
    

    return 0;
}


// funcion que invierte el numero natural

float invert(int n, float res){
    if(n < 10){
        return n;
    }else{
        res = n % 10;
        n = n / 10;
        cout << res;
        return invert(n, res);
    }
}