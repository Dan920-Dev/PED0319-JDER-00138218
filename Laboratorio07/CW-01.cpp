#include <iostream>
using namespace std;

struct node{
    int n;
    bool flag;
    node* next;
};

void print(node* list, int i, int n);
node* queue(node* list, int n);

int main(){
    node* list = NULL;

    for(int i = 0; i <= 20; i++){
        list = queue(list,i);
    }

    node* aux = list;

    while (aux->next)
    {
        aux = aux->next;

        aux->next = list;
    }
    
    print(list, 0, list->n);

    return 0;
}

void print(node* list, int i, int n){
    if(i == 1 && list->n){
        return;
    }else{
        cout << list->n;
        print(list->next, 1, n);
    }
}

node* queue(node* list, int n){
    node* newNode = new node;
    newNode->n = n;
    newNode->flag = true;
    newNode->next = NULL;

    if(!list)
    list = newNode;
    else{
        newNode->flag = false;

        node* aux = list;

        while (aux->next)
        {
            aux = aux->next;

            aux->next = newNode;
        }

        return list;
        
    }


}