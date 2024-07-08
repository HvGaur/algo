#include<iostream>

using namespace std;

int getFibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    int ans = getFibonacci(n-1) + getFibonacci(n-2);
    return ans;
}

int main(){
    int n = 7;
    cout << getFibonacci(n);
    return 0;
}