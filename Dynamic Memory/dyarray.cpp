#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        arr[i] = i;
        cout << arr[i] << " ";
    }

    //deleting the array after work is done to prevent memory leak
    delete []arr;
    return 0;
}