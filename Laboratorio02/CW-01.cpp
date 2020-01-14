#include <iostream>
using namespace std;

int main(){
    
    float array[20];
    for(int i=0;i<20;i++){
        cout<<"Digite la nota"<<endl;
        cin>>array[i];
    }

    for(int i=0; i<20;i++){
        cout<<"Nota "<<(i+1)<<":\t"<<array[i]<<endl;
    }

    return 0;
}