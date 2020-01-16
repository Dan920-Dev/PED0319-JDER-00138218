#include <iostream>
#include <string>
using namespace std;

struct Enterprise{
    string name;
    int employees;
};

int main(){
    Enterprise* array;
    int size;

    cout<<"Digite cantidad de empresas: "; cin>>size;
    array= new Enterprise[size];
    for(int i = 0; i < size; i++){
        cout<< "Name:\t"; cin>>array[i].name;
        cin.ignore();
        cout<< "Empleados:\t"; cin>> (array + i)->employees;
        cin.ignore();
        cout<<endl;
    }
    
    return 0;
}


