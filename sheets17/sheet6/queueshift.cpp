/*
Queue using shift
*/

#include <iostream>

#define SIZE 5

using namespace std;

struct Queue{
    int data[SIZE];
    int rear = -1;
};

bool isFull(Queue& q){
    if(q.rear == SIZE-1){
        return true;
    }else{
        return false;
    }
}

bool isEmpty(Queue& q){
    if(q.rear == -1){
        return true;
    }else{
        return false;
    }
}


void enqueue(Queue& q,int value){
    if(isFull(q)){
        cout << "Queue is FULL" << endl;
        return;
    }

    q.rear++;
    q.data[q.rear] = value;

    cout << value << " is enqueued" << endl;
}

void dequeue(Queue& q){
    if(isEmpty(q)){
        cout << "Queue is EMPTY" << endl;
        return;
    }

    int value = q.data[0];
    cout << value << " is dequeued" << endl;

    for(int i=0;i<q.rear;i++){
        q.data[i] = q.data[i+1];
    }

    q.rear--;
}

void multiDelete(Queue& q,int n){
    for(int i=0;i<n;i++){
        dequeue(q);
    }
}

int main(){
    Queue q;
    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    enqueue(q,4);
    enqueue(q,5);

    cout << endl;

    multiDelete(q,10);
}