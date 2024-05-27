#include<iostream>

using namespace std;

void rev(int arr[], int n){
    int i =0;
    int s = n;
    n--;
    while(i<n){
        swap(arr[i], arr[n]);
        i++;
        n--;
    }
    for(int i = 0; i < s; i++){
        cout << arr[i] << " ";
    }


}

int main(){
    int arr[] = {2,1,5,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    rev(arr, n);
    // for(int i = 0; i < n; i++){
    //     cout << arr[i];
    // }
}