#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int>& arr, int s, int e){
    int i = s;
    int m = (s+e)/2;
    int j = m+1;

    vector<int> temp;
    while(i<=m and j<=e){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=m){
        temp.push_back(arr[i++]);
    }
    while(j<=e){
        temp.push_back(arr[j++]);
    }
    int idx = 0;
    for(int i = s; i <= e; i++){
        arr[i] = temp[idx++];
    }
}

void mergesort(vector<int>& arr, int s, int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    mergesort(arr, s, mid);
    mergesort(arr,mid+1,e);
    return merge(arr, s, e);
}

int main(){

    vector<int> arr{8,7,6,6,5,4,4,3,22,1};
    int s = 0;
    int e = arr.size()-1;
    mergesort(arr, s, e);
    for(auto& num: arr){
        cout << num << " " ;
    }
    return 0;
}