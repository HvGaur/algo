#include<iostream>

using namespace std;

void printAscending(int n){
    if(n==0){
        cout << "0" << " ";
        return;
    }
    printAscending(n-1);
    cout << n << " ";
}

void printDescending(int n){
    if(n==0){
        cout << "0" << endl;
        return;
    }
    cout << n << " ";
    printDescending(n-1);
}

int main(){
    int n =5;
    printAscending(n);
    cout << endl;
    printDescending(n);
    return 0;

}