# 2017 Midterm (A)

---

## 1

**a) Underflow**
![a](1-1.png)

**c) 3**
![a](1-2.png)

**d) all of the mentioned**
![a](1-3.png)

**b) false**
![a](1-4.png)

**a) true**
![a](1-5.png)

**c) possible if X is not the first node.....**
![a](1-6.png)

**a) before deletion**
![a](1-7.png)

**a) 20**
![a](1-8.png)

## 2

![a](2.png)
[للبرنامج كامل (اضغط هنا)](./addAfter50.cpp) 

```cpp
void addAfter5(Node* head,int value){
    Node* nn = new Node;
    nn->value = value;
    
    int i = 1;
    
    Node* cur = head;
    Node* prev;
    while(i<5){
        prev = cur;
        cur = cur->next;
        i++;
    }
    
    nn->next = cur;
    prev->next = nn;
}
```

## 3

![a](3-1.png)

```1
INFIX:  (A-B)*(C+D)*E/(F+G)
POSTFIX: A B - C D + * E * F G + /
PREFIX:  / * * - A B + C D E + F G
```

![a](3-2.png)

```cpp
if(prev != NULL){
    *head = prev;
}
```

![a](3-3.png)
**Queue outputs input in the same orrder that it was enterd with (First in First out)**    
**Stack outputs input in a reversed orrder(First in Last out)**

```cpp
/**
 * Array
 **/

struct Queue{
    int front;
    int rear;
    int data[100];
};

/**
 * Linked List
 **/

struct QueueNode{
    int value;
    QueueNode* next;
};

```