#include <iostream>
using namespace std;

struct node{
    int n;
    node* next;
};

typedef node* st;

void initialize(st* s);
void push(st* s, int n);
int top(st* s);
int pop(st* s);

int main(void){
    st s;

    initialize(&s);

    push(&s, 5);
    push(&s, 7);
    push(&s, 4);
    push(&s, 1);

    cout << top(&s) << endl;

    cout << pop(&s) << endl;
    cout << pop(&s) << endl;
    cout << pop(&s) << endl;

    cout << top(&s) << endl;

    return 0;
}

void initialize(st* s){
    *s = NULL;
}

void push(st* s, int n){
    node* newNode = new node;
    newNode->n = n;
    newNode->next = *s;

    *s = newNode;
}

int top(st* s){
    if(!(*s))
        return -1;
    else
        return (*s)->n;
}

int pop(st* s){
    if(!(*s))
        return -1;
    else{
        int aux = (*s)->n;
        *s = (*s)->next;
        return aux;
    }
}

bool isEmpty(st* s){
    return *s == NULL;
}