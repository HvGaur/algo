#include<iostream>
#include<vector>

using namespace std;

bool isSorted(int arr[], int n){
    if(n == 1 or n==0) return true;
    if(arr[0] < arr[1] && isSorted(arr+1, n-1)) return true;
    return false;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    // int n = arr.size();
    int n = sizeof(arr)/sizeof(arr[0]);
    if(isSorted(arr,n)) cout << "YES";
    else cout << "NO";
    return 0;
}