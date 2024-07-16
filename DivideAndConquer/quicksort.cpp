#include<iostream>
#include<vector>

using namespace std;

int partition(vector<int>& arr, int s, int e){
    int i = s-1;
    int key = arr[e];
    for(int j = s; j < e; j++){
        if(arr[j] < key){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[e], arr[i+1]);
    return i+1;
}

void quicksort(vector<int>& arr, int s, int e){
    if(s>=e) return;
    // int i = 0; 
    int p = partition(arr, s, e);
    quicksort(arr, s, p-1);
    quicksort(arr, p+1, e);
    return;
}

int main(){

    vector<int> arr{8,7,6,6,5,4,4,3,22,1};
    int s = 0;
    int e = arr.size()-1;
    quicksort(arr, s, e);
    for(auto& num: arr){
        cout << num << " " ;
    }
    return 0;
}