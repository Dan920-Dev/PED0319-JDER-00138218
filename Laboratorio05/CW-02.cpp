// Pila de cajas
// peso, contenido, destino
#include <iostream>
#include <stack>
#include <string>
using namespace std;

struct pack{
    string content, address;
    float weigth;
};


int main(){
    int option = 0;
    stack<pack> st;
    pack aux;
    do
    {
        cout << "Peso: "; cin >>aux.weigth; cin.ignore;
        cout << "contenido: "; getline(cin, aux.content);
        cout << "Destino "; getline(cin, aux.address);

        st.push(aux);

        cout << "Desea ingresar mas datos: (1 = si, 0 = no\t"; cin >> option;
        cin.ignore();

    } while (option != 0);

    aux = st.top();

    cout << "Peso: " << aux.weigth << endl;
    cout << "Contenido: " << aux.content << endl;
    cout << "Destino: " << aux.address << endl;

    
    return 0;
}