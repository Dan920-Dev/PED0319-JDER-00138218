#include <iostream>
#include <string>

using namespace std;

struct node{
    string word;
    node* left,* right;
};

void insertInTree(node** tree, string word);

int main (void){
    node * pTree = NULL;

    insertInTree(&pTree, "Hola");
    insertInTree(&pTree, "Pupusas");
    insertInTree(&pTree, "Codigo");
    insertInTree(&pTree, "Adios");
    insertInTree(&pTree, "F");
    return 0;
}

node* createleaf(string word){
    node * leaf = new node;
    leaf->word = word;
    leaf->left = NULL;
    leaf->right = NULL;

    return leaf; 
}

void insertInTree(node** tree, string word){
    if(!(*tree)){
        *tree = createleaf(word);
    }
    else{
        if(word.compare((*(*tree)).word)<=0)
            insertInTree(&(*(*tree)).left,word);
        else
            insertInTree(&(*(*tree)).right,word);
    }
}