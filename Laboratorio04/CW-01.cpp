#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n);
int addPrimes(int start, int primeQ, int aux);

int main(){
    int n = 0;
    cin >> n;

    cout << addPrimes(2, n, 0) << endl;
    return 0;
}

bool isPrime(int n){
    if(n == 2)
    return true;
    else{
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
              return false;  
            }
            
        }
    }
}

int addPrimes(int start, int primeQ, int aux){
    if(aux == primeQ){
        return 0;
    }else{
        if(isPrime(start) == true){
            return start + addPrimes(start + 1, primeQ, aux + 1);
        }else{
            return 0 + addPrimes(start + 1, primeQ, aux);
        }
    }
}