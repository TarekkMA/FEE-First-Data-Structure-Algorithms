#include <iostream>

using namespace std;

class Sort{
public:
    void selection_sort(int a[],int n);
    void bubble_sort(int a[],int n);
    void insertion_sort(int a[],int n);
};

void Sort::selection_sort(int a[],int n){
    if(n < 2) return;

    int smallest;
    for(int i=0;i<n;i++){

        smallest=i;
        for(int j=0;i<n;i++){
            if(a[i]<a[smallest])
                smallest = i;
        }

        swap(a[i],a[smallest]);

    }
}


int main(){

    Sort sort; 

    int a[] = {9,8,6,43,2,7,2,7,16,8,9,64,3};

    sort.selection_sort(a,13);

    for(int i=0;i<13;i++)
        cout << a[i] << endl;

    return 0;
}