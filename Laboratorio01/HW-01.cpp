//Realizar una función que retorne la suma de los números
//primos entre el 1 y 100

#include <iostream>
using namespace std;

int Sum_Return();

int main(){

    cout<<"Este programa muestra la suma de los numeros primos entre el 1 y 100"<<endl;
    cout<<"Los cuales son: "<<endl;
    
for (int i=2;i<=100;i++){ //se empieza en 2, ya que el 1 no es primo
 int a=0;
 for(int j=1;j<=100;j++){ 
     if(i%j==0) 
     a++;
 }
 if (a==2){ //si solo tiene dos números divisores entonces es primo y se muestra
 cout<<i<<" ";
 }
 }

cout<<endl;
cout<<"La suma entre los numeros primos del 1 al 100 es: "<<endl;
cout<<Sum_Return()<<endl;

    return 0;
}

int Sum_Return(){
    int sum=0, data=0;

    for (int i=2;i<=100;i++){ 
 int a=0;
 for(int j=1;j<=100;j++){ 
     if(i%j==0) 
     a++;
 }
 if (a==2){ 
 sum=sum+i;
 }
 
 }
 return sum;    
}