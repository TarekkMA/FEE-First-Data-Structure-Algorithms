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

void delete30(Node*& head){
    if(head->value == 30){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    
    Node* rem = head->next;
    Node* prev = head;
    while(rem->value!=30){
        prev = rem;
        rem = rem->next;
    }
    
    prev->next = rem->next;
    delete rem;
}

int main() {
    Node* head = NULL;
    addToEnd(head, 10);
    addToEnd(head, 20);
    addToEnd(head, 30);
    addToEnd(head, 40);
    addToEnd(head, 50);
    addToEnd(head, 60);
    display(head);
    cout << endl;
    delete30(head);
    display(head);

    cout << "Hello, World!" << endl;
    return 0;
}
