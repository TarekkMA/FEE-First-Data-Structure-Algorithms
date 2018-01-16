#include <iostream>

using namespace std;


void reverseArray(int a[],int n){
    int i = 0; // 1 op
    int j = n-1; // 1 op

    while(i<j){          // n/2 + 1  
        int temp = a[i]; // 3   * (n/2)
        a[i] = a[j];     // 2   * (n/2)
        a[j] = temp;     // 1   * (n/2)
        i++;             // 1   * (n/2)
        j--;             // 1   * (n/2)
    }
}

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10};

    reverseArray(a,10);

    for(int i=0;i<10;i++){
        cout << a[i] << endl;
    }


}