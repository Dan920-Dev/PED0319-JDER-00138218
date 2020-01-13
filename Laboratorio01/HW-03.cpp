/*  Realizar un programa que almacene en un arreglo de tamaño
15, números aleatorios entre 1 y 75. Luego leer el arreglo, si
el número en la posición i es múltiplo de 7, acumularlo en una
suma e imprimir el resultado */

#include <iostream>
#include <time.h>


using namespace std;

int main(){
    int num=0, sum=0;
    int array[15];

    srand(time(NULL));
    num=rand();

    cout<<"Multiplos de 7 en el arreglo son:"<<endl;
    for(int i=0;i<15;i++){
        num=1+rand()%(76-1);
        array[i]=num;
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Los multiplos de 7 son:"<<endl;
    for(int i=0;i<15;i++){
        if(array[i]%7==0){
            cout<<array[i]<<" ";
            sum=sum+array[i];
        }
    }
    cout<<endl;
    cout<<"La suma de los multiplos de 7 es: "<<endl;
    cout<<sum<<endl;    
    return 0;
}