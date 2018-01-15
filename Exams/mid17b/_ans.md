# 2017 Midterm (لآ)

---

## 1

**c) Overflow**
![a](1-1.png)

**d) 31 and 5 respectively**    
![a](1-2.png)

**c) 3**    
![a](1-3.png)

**a) Stack**    
![a](1-4.png)

**b) 30**   
![a](1-5.png)

**c) 3**    
![a](1-6.png)

**d) 31 and 5**    
![a](1-7.png)

**d) None of the mentioned**    
![a](1-8.png)

## 2

![a](2.png)
[للبرنامج كامل (اضغط هنا)](./delete30.cpp) 

```cpp
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
```

## 3

![a](3-1.png)

```1
INFIX:  (A+B)*(C*D-E)*F/G
POSTFIX: A B + C D * E - * F * G /
PREFIX:  / * * + A B - * C D E F G
```
---
![a](3-2.png)    
**Print n node**
---
![a](3-3.png)
**Queue outputs input in the same orrder that it was enterd with (First in First out)**    
**Stack outputs input in a reversed orrder(First in Last out)**

```cpp
/**
 * Array
 **/

struct Stack{
    int top;
    int data[100];
};

/**
 * Linked List
 **/

struct StackNode{
    int value;
    StackNode* prev;
};

```