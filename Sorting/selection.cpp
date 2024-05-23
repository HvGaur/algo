#include<iostream>

using namespace std;

void selection_sort(int arr[], int n){
    for(int i = 0; i < n-1; i++){

        int current = arr[i];
        int minimum = i;

        for(int j = i; j < n; j++){
            if(arr[j] < arr[minimum]){
                minimum = j;
            }
        }

        swap(arr[minimum], arr[i]);
    }
}

int main(){
    int arr[] = {5,6,4,1,9,8,10,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, size);

    for(auto x : arr){
        cout << x << " ";
    }
}