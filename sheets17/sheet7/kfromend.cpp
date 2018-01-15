#include <iostream>
using namespace std;


struct Node{
    int id;
    string name;
    int age;
    Node* next;
};

void addToEnd(Node*& head,int id,string name,int age){
    Node* nn = new Node;
    nn->name = name;
    nn->age = age;
    nn->id = id;
    nn->next = NULL;

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

void display(Node* head){
    Node* node = head;
    while(node!=NULL){
        cout << node->id << "" << node->name << " " << node->age << endl;
        node = node->next;
    }
}

void kNodeFromEnd(Node* head,int k){
    int count = 0;
    
    Node* node = head;
    while(node!=NULL){
        count++;
        node = node->next;
    }
    
    int pos = count-k;
    
    if(pos < 0){
        cout << "Not valid" << endl;
        return;
    }
    
    node = head;
    for(int i=0;i<pos-1;i++){
        //cout << i << "" << node->name << endl;
        node=node->next;
    }
    
    cout << node->id << " " << node->name << " " << node->age << endl;
    
}


int main() {
    Node* head = NULL;
    addToEnd(head, 10,"Tarek",1);
    addToEnd(head, 10,"Mohamed",2);
    addToEnd(head, 10,"Abdalla",3);
    addToEnd(head, 10,"Mahmoud",4);
    addToEnd(head, 10,"Ali",5);
    addToEnd(head, 10,"Shams",6);
    addToEnd(head, 10,"Toka",7);
    addToEnd(head, 10,"Zainab",8);
    
    
    
    //Shams
    kNodeFromEnd(head, 2);
    
    //Zainab
    kNodeFromEnd(head, 0);
    
    //Tarek
    kNodeFromEnd(head, 8);
    


    return 0;
}
