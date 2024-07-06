#include<iostream>

using namespace std;

void clearLastBits(int &n, int idx){
    int mask = ~0 << idx;
    n = n&mask;
}

int main(){
    int n = 15;
    int i  = 2;
    clearLastBits(n , i);
    cout << n;
    return 0;
}