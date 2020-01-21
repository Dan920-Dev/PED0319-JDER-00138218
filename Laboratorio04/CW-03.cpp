#include <iostream>
#include <cmath>
using namespace std;

float evaluate(monomio* array, int size, int aux);

struct monomio{
    float coef, exp;
};

int main(){
    monomio* array;
    int size;
    
    cout << "Digite la cantidad de monomios: "; cin >> size;
    array = new monomio[size];
    for(int  i = 0; i < size; i++){
        cin >> array[i].coef >> array[i].exp;
    }

    evaluate(array, size, 0);
    
    return 0;
}

float evaluate(monomio* array, int size, int aux){
    if(aux == size)
    return 0;
    else{
        return pow(array[aux].coef, array[aux].exp) + evaluate(array, size, aux + 1);
    }
}