#include<iostream>
#include<algorithm>

using namespace std;

int bin_search(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid] == key) return mid;
        else if(arr[mid] < key)  start = mid+1;
        else   end = mid-1;
    }
    return -1;
}

int main(){
    int arr[] = {6,5,7,3,2,10,98,6,78,65};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 100;
    sort(arr, arr+size);
    for(auto x:arr){
        cout << x << "  ";
    }
    int pos = bin_search(arr, size, key);

    cout << endl << pos << endl;
}