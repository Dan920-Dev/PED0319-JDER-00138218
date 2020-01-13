#include <iostream>
using namespace std;

int main(){
    char secret[]={'c' ,'o' ,'d','i' ,'f' ,'i' ,'c' ,'a' ,'r'  };
    char verification[9];
    char guessletter;
    int a=13;

    cout<<"Ahorcado"<<endl;
    cout<<"La palabra a adivinar contiene nueve letras"<<endl;
    do{
        cout<<"Letra: "; cin>>guessletter;
    }while(a>0);

    return 0;
}

void verifyletter(char arr1[9], char arr2[9], char Letter, int size){
    for(int i=0;i<size;i++){
        if(arr1[i]==Letter){
            arr2[i]=Letter;
        }
    }
}