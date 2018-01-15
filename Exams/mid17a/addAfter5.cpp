#include <iostream>
using namespace std;


struct Node{
    int value;
    Node* next;
};

void addToEnd(Node*& head,int value){
    Node* nn = new Node;
    nn->next = NULL;
    nn->value = value;
    if(head == NULL){
        head = nn;
        return;
    }
    
    Node* cur = head;
    while(cur->next != NULL){
        cur = cur->next;
    }
    
    cur->next = nn;
}

void display(Node* node){
    while(node!=NULL){
        cout << node->value << endl;
        node = node->next;
    }
}

void addAfter5(Node* head,int value){
    Node* nn = new Node;
    nn->value = value;
    
    if(head->value == 5){
        nn->next = head;
        head = nn;
        return;
    }
    
    Node* cur = head->next;
    Node* prev = head;
    while(cur->value!=5){
        prev = cur;
        cur = cur->next;
    }
    
    nn->next = cur;
    prev->next = nn;
}

int main() {
    Node* head = NULL;
    addToEnd(head, 1);
    addToEnd(head, 2);
    addToEnd(head, 3);
    addToEnd(head, 4);
    addToEnd(head, 5);
    addToEnd(head, 6);
    display(head);
    cout << endl;
    addAfter5(head,55);
    display(head);

    cout << "Hello, World!" << endl;
    return 0;
}
