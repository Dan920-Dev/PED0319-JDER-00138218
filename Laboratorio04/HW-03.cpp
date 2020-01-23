#include <iostream>
#include <string>
using namespace std;
// structura
struct homeAppliances{
    string name;
    float cost;
    float SalePrice;
};
// prototipo de funciones
void add(homeAppliances* Array, int size);
float Sum(homeAppliances* Array, int size , int aux , bool flag);

int main(){
    homeAppliances* Array;
    int size = 0;
    char op;
    // llenando arreglo
    cout << "Digite el numero de electrodomesticos que ingresara al registro: "; cin >> size;
    cin.ignore();
    add(Array, size);
    cout << endl;

    cout << "Opciones: " << endl;
    cout << "C - Suma de Costos" << endl;
    cout << "V - Suma de ventas" << endl;
    cin >> op; 

    if(op == 'c' or op == 'C'){
        cout << Sum(Array, size, 0, true);
    }
    if(op == 'v' or op == 'V'){
        cout << Sum(Array, size, 0, false);
    }

    

    return 0;
}

// llenando
void add(homeAppliances* Array, int size){
    Array = new homeAppliances[size];
        for(int i = 0; i < size; i++){

        cout << "Electrodomestico No." << i + 1 << endl;
        cout << "Nombre: "; getline(cin, Array[i].name); 
        cout << "Costo: "; cin >> Array[i].cost;
        cout << "Precio de venta: "; cin >> Array[i].SalePrice;
        cin.ignore();
        cout << endl;
    }
}

// funcion que suma
float Sum(homeAppliances* Array, int size , int aux , bool flag){
    int sum = 0;
    if(aux == size){
        return 0;
    }else{
        if(flag){
            return  Array[aux].cost + Sum(Array, size, aux + 1, flag);
        }else{
            return  Array[aux].SalePrice + Sum(Array, size, aux + 1, flag);
        }
    }
}