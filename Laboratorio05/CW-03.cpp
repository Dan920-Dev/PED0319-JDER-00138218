#include <iostream>
using namespace std;

struct node{
    int n;
    node* next;
};

int main(){
    node* pStart = NULL;

    pStart = push(pStart, 5);
    pStart = push(pStart, 8);
    pStart = push(pStart, 9);
    pStart = push(pStart, 12);

    return 0;
}

node* push(node* pStart, int n){
    node* newNodo = new node;
    newNodo->n = n;

    newNodo->next = pStart;
    pStart = newNodo;

    return pStart;
}

node* top(node* pStart){
    if(!pStart){
        return NULL;
    }else{
        pStart->next = NULL;
        return pStart;
    }
}


