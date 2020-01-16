#include <iostream>
#include <string>
using namespace std;

void jerigonzaP(string word, int size, int pos);

int main(){
    string word = "";
    cout << "Palabra: ";
    getline(cin,word);

    jerigonzaP(word, word.length(), 0);

    return 0;
}

void jerigonzaP(string word, int size, int pos){
    if(size == pos)
    return;
    else{
        if(word[pos] == 'a' or word[pos] == 'A' or word[pos] == 'e' or word[pos] == 'E' or word[pos] == 'i' or word[pos] == 'I' or word[pos] == 'o' or word[pos] == 'O' or word[pos] == 'u' or word[pos] == 'U'){
            cout << word[pos] << "p" << word[pos];
        }
        else
        
            cout << word[pos];
            jerigonzaP(word, size, pos+1);
    }
}