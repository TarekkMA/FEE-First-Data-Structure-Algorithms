
#include <iostream>
using namespace std;

struct node{
    int value;
    node* next;
};

void addToEnd(node*& head,int value){
    node* nn = new node;
    nn->value = value;
    nn->next = NULL;
    if(head == NULL){
        head = nn;
        return;
    }
    
    node* cur = head;
    while(cur->next!=NULL){
        cur = cur->next;
    }
    cur->next = nn;
}


void display(node* head){
    node* cur = head;
    while(cur!=NULL){
        cout << cur->value << endl;
        cur = cur->next;
    }
}

void addAfter50(node*& head,int value){
    node* cur = head;
    
    while(cur->value != 50){
        cur = cur->next;
    }
    
    node* new_node = new node;
    new_node->value = value;
    new_node->next = cur->next;
    cur->next = new_node;
}

int main() {
    node* head = NULL;
    
    addToEnd(head, 10);
    addToEnd(head, 20);
    addToEnd(head, 30);
    addToEnd(head, 40);
    addToEnd(head, 50);
    addToEnd(head, 60);
    addToEnd(head, 70);
    addToEnd(head, 80);
    
    display(head);
    
    cout << endl;
    
    addAfter50(head, 55);
    
    display(head);

    return 0;
}
