// Entrada y salida de datos
#include <iostream>
using namespace std;

// Struct de loss datos de la persona
struct People{
    string name;
    string sex;
    int salary;
    int age;
    int years;
};

void printInfo(People printAd);
void printResult(People printRes);

int main(){
    People info;
    
    // Se piden los datos de la persona tomando en cuenta su sexo, ya que es diferente la edad para jubilarse
    cout << " Nombre: "; cin >> info.name;
    cin.ignore();
    cout << " Sexo, ya sea hombre o mujer: "; cin >> info.sex;
    cin.ignore();
    cout << " Salario: "; cin >> info.salary;
    cin.ignore();
    cout << " Edad: "; cin >> info.age;
    cin.ignore();
    cout << " Años de laborar en la empresa: "; cin >>info.years;
    cout << endl;

    cout << "Datos de la persona "<<endl;
    printInfo(info);
    cout << endl;
    printResult(info) ; cout << endl;

    return 0;
}

// Funcion que solo muestra los datos ingresados
void printInfo(People printAd){

    cout << "Nombre: "<<printAd.name << endl;
    cout << "Sexo: "<<printAd.sex << endl;
    cout << "Salario: "<<printAd.salary << endl;
    cout << "Edad: "<<printAd.age << endl;
    cout << "Años de laborar en la empresa " << printAd.years << endl;

}

// Funcion que evalua si la persona deberia estar jubilado/a o no
void printResult(People printRes){

    if(printRes.sex!="mujer"){
        if(printRes.age >= 60 && printRes.years >= 25){
            cout << "Tomando en cuenta sus años en la empresa, edad y  sexo, debria estar jubilado " << endl;
        }else{
            cout << "Aun no debe estar jubilado " << endl;
        }
    }else{
        if(printRes.age >= 55 && printRes.years >= 25){
            cout << "Tomando en cuenta sus años en la empresa, edad y  sexo, debria estar jubilada " << endl;
        }else{
            cout << "Aun no debe estar jubilada " << endl;
        } 
    } 
}