#include <iostream>
using namespace std;

void printletters(char *printArray, int size);

int main(){
    int size=0;

    cout<<"Digite la cantidad de letras: "; cin>>size;

    char *array;
    array=new char[size];

    for(int i = 0; i < size; i++){
        cout<<"Digite Letra: "; cin>>array[i];
    }

    printletters(array,size);
    return 0;
}

void printletters(char *printArray, int size){
    for(int i = 0; i < size; i++){
        cout<< "Letra: "<< printArray[i]<<endl;
    }
}