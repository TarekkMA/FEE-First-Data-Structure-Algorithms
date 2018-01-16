#include <iostream>

using namespace std;




void reverseArray(int a[],int n){
    int i = 0; 
    int j = n-1; 

    while(i<j){         
        int temp = a[i]; 
        a[i] = a[j];     
        a[j] = temp;     
        i++;             
        j--;             
    }
}

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10};

    reverseArray(a,10);

    for(int i=0;i<10;i++){
        cout << a[i] << endl;
    }


}