#include <iostream> // entrada y salida en consola
#include <string> // para poder usar  cadenas de caracteres
using namespace std;

struct node{
    string name;
    float price;
    int stock;
    node* next;
};
typedef node* stack;

void push(stack* pStack, string name, float price, int stock);
void printStack(stack* pStack);

int main(){

    stack pStack = NULL; // Se inicializa la pila
    string name;
    float price;
    int stock, option;
    bool continu = true; // variable booleana para validar si ingresara mas datos 

    do
    {
        cout << "Nombre del producto: "; getline(cin, name); 
        cout << "Precio: "; cin >> price;
        cout << "Cantidad en almacen "; cin >> stock; cin.ignore();

        push(&pStack, name, price, stock);


        cout << "Desea ingresar mas datos: (1 = si, 0 = no) "; cin >> option;
        cin.ignore();
        
        if(option == 0){
            continu = false;
        }
        if(option == 1){
            continu = true;
        }
        
    } while (continu);

    cout << "Los Datos en la pila son: " << endl;
    printStack(&pStack);

    return 0;
}

// Funcion que almacena los datos ingresados por l usuario
void push(stack* pStack, string name, float price, int stock){
    node* newNode = new node;
    newNode->name = name;
    newNode->price = price;
    newNode->stock = stock;

    newNode->next = *pStack;
    *pStack = newNode;
}

// Funcion que muestra los datos que han sido ingresados a la pila
void printStack(stack* pStack){
    node * newNode = *pStack;
    if(pStack != NULL){
        while (pStack != NULL)
        {
        cout <<"Articulo:" << newNode->name << " ";
        cout << "Precio: " << newNode->price << " ";
        cout << "Cantidad en almacen: " << newNode->stock << " " << endl;
        cout << endl;
        newNode = newNode->next;
     }
    }else{
    cout << "La pila esta vacia" << endl;
}
}