#include <iostream>
using namespace std;

long  int factorial(int n);

int main(){
    int n;
    cout<< "Digite el numero del factorial que desea: "<<endl; cin>>n;
    cout<<factorial(n);
    cout<<endl;

    return 0;
}

long  int factorial(int n){
    if(n == 0 or n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}