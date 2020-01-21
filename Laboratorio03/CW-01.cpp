#include <iostream>
#include <string>
using namespace std;

struct Address{
    int houyseNumber;
    string city, state;
};

struct personalInfo{
    Address personalAddress;
    string name;
    int age;
};

int main(){
    personalInfo p1;

    cout << "Nombre: "; cin >> p1.name;
    cout << "Edad "; cin >> p1.age;
    cout << "Ciudad: "; cin >> p1.personalAddress.city;
    cout << "No. Casa: "; cin >> p1.personalAddress.houyseNumber;
    cout << "Departamento: "; cin >> p1.personalAddress.state;
    return 0;
}