#include<iostream>

using namespace std;

int pow(int a, int n){
    if(n==0) return 1;
    a = a*pow(a, n-1);
    return a;
}

int main(){
    int a = 2;
    int n = 10;
    cout << pow(a,n) << endl;
    return 0;
}