#include <iostream>
#define SIZE 100
using namespace std;

struct Stack{
    char data[SIZE];
    int top = -1;
};

bool isEmpty(Stack s){
    if(s.top == -1)
        return true;
    else
        return false;
}

bool isFull(Stack s){
    if(s.top == SIZE-1)
        return true;
    else
        return false;
}

void push(Stack&s,char c){
    if(isFull(s)){
        cout << "FULL" << endl;
        return;
    }
    
    s.top++;
    s.data[s.top] = c;
}

char pop(Stack&s){
    if(isEmpty(s)){
        cout << "EMPTY" << endl;
        return 0;//if empty return char which assci value is 0
    }
    char val = s.data[s.top];
    s.top--;
    return val;
}


bool isBalanced(char expression[]){
    Stack s;
    char c = expression[0]; //starting value
    int i = 0;
    
    //while to loop over the string
    //string have '\0' ending
    while(c!='\0'){
        
        if(c == '('){
            push(s,'(');
        
        }else if(c == ')'){
            
            if(s.top == -1)
                return false;
            else
                pop(s);
        }
        i++;
        c = expression[i];
    }
    
    
    //check if there is '(' still not removed
    if(isEmpty(s)){
        return true;
    }else{
        //stack is not empty and expression is not balanced
        return false;
    }
}

int main() {
    char exp1[] = "(3+4)*(2+5-6)";
    char exp2[] = "((5-2)/(7+4)";
    
    if(isBalanced(exp1)){
        cout << exp1 << " is balanced" << endl;
    }else{
        cout << exp1 << " is not balanced" << endl;
    }
    
    if(isBalanced(exp2)){
        cout << exp2 << " is balanced" << endl;
    }else{
        cout << exp2 << " is not balanced" << endl;
    }

    return 0;
}












