#include<iostream>

using namespace std;

void print(int arr[][10], int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
}

int main(){
    int arr[10][10];

    int m,n;
    cin >> m >> n;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    print(arr, m, n);
    // cout << arr[1];
}