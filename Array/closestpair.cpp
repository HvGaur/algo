#include<iostream>
#include<math.h>

using namespace std;

void closestsum(int arr[], int val, int n){
    int s = 0;
    int e = n-1;
    int x = 0, y = 0;
    int pdif = INT_MAX;
    while(s<e){
        int tdif = abs(arr[s]+arr[e]-val);
        // pdif = min(tdif,pdif);
        if(tdif < pdif){
            x = s;
            y = e;
            pdif = tdif;
        }
        if(tdif <= val)
        {
            s = s+1;
        }
        else{
            e = e-1;
        }
    }
    cout << arr[x] << " " << arr[y] << endl;
}

int main(){
    int arr[] = {10,22,28,30,40};
    int val = 54;
    int n = sizeof(arr)/sizeof(arr[0]);
    closestsum(arr,val,n);
}