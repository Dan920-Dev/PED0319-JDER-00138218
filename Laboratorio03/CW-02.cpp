#include <iostream>
#include <string>
using namespace std;

struct Address{
    int houyseNumber;
    string city, state;
};

struct personalInfo{
    Address pAddress;
    string name;
    int age;
};

void printInfo(personalInfo* pI, int size, int pos);

int main(){
    personalInfo* pData;
    int size=0;

    cout << "Cantidad de datos a ingresar: "; cin >> size;
    pData = new personalInfo[size];

    for(int i = 0; i < size; i++){
        cout << "Nombre: "; cin >> pData[i].name;
        cout << "Edad: "; cin >> pData[i].age;
        cout << "No. Casa: "; cin >> pData[i].pAddress.houyseNumber;
        cout << "Ciudad: "; cin >> pData[i].pAddress.city;
        cout << "Estado: "; cin >> pData[i].pAddress.state;
        cout << endl;
    }
    cout << "Datos ingresados " << endl;
    printInfo(pData, size, 0);

    return 0;
}

void printInfo(personalInfo* pI, int size, int pos){
    if(pos == size){
        return;
    }else{
        printInfo(pI, size, pos + 1);
        cout << "Nombre: " << pI[pos].name << endl;
        cout << "Edad: " << pI[pos].age << endl;
        cout << "No. Casa: " << pI[pos].pAddress.houyseNumber << endl;
        cout << "Ciudad: " << pI[pos].pAddress.city << endl;
        cout << "Estado: " << pI[pos].pAddress.state << endl;
        cout << endl;

        
    }
}