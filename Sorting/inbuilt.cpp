#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int arr[] = {5,4,7,6,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+size);
    for(auto x : arr){
        cout << x << " ";
    }
    reverse(arr, arr+size);
        // cout << x << " "
}