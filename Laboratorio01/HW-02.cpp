/* Realizar una función que reciba una cadena de caracteres y
retorne 1 si es una cadena compuesta solamente por
números, 0 si es alfanumérica (números y letras), y -1 si
solamente contiene letras */

#include <iostream>
#include <string> // Libreria para cadena de caracteres
using namespace std;

void Evaluating(char *, char *);

int main(){
    char letter[10];
    char character[]={'1' ,'2' ,'3','4' ,'5' ,'6' ,'7' ,'8' ,'9' ,'0'};
    
    cout<<"Digite una cadena de caracteres"<<endl;
    cin>>letter[10];

    Evaluating(letter, character);
    return 0;
}

void Evaluating(char *a, char *b){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++)
    }
}