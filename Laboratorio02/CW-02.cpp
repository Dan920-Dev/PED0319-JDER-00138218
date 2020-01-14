#include <iostream>
using namespace std;

int main(){
    int matrix[3][3];
    int aux=1;
    for(int i = 0;i < 3; i++){
        for(int j = 0;j < 3; j++){
            matrix[i][j]=aux++;
        }
    }

    for(int i = 0;i < 3; i++){
        for(int j = 0;j < 3; j++){
            cout<<matrix[i][j]<< "\t";
        }
        cout<<endl;
    }
    return 0;
}