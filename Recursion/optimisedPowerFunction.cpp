#include<iostream>

using namespace std;

int optimisedPower(int a, int n){
    if(n==0) return 1;
    int sub = optimisedPower(a, n/2);
    int subsq = sub*sub;
    if(n&1) return a*subsq;
    return subsq;
}

int main(){
    int a = 2;
    int n = 10;
    cout << optimisedPower(a,n);
    return 0;
}